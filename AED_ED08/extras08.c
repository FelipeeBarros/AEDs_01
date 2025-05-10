/*
Extra08 - v0.0. - 09 / 05 / 2025
Author: Felipe Silva Barros
*/

#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <time.h>
#include <stdlib.h>

void calcularDivisoresPares(int numero, int *quantidade, int divisores[])
{
    *quantidade = 0;
    for (int i = 1; i <= numero; i++)
    {
        if (numero % i == 0 && i % 2 == 0)
        {
            divisores[*quantidade] = i;
            (*quantidade)++;
        }
    }
}

void encontrarPalavrasSemE(char palavras[][100], int n, char resultado[][100], int *quantidade)
{
    *quantidade = 0;
    for (int i = 0; i < n && *quantidade < 10; i++)
    {
        int tamanho = strlen(palavras[i]);
        if (tamanho > 0)
        {
            char primeira = tolower(palavras[i][0]);
            char ultima = tolower(palavras[i][tamanho - 1]);
            if (primeira != 'e' && ultima != 'e')
            {
                strcpy(resultado[*quantidade], palavras[i]);
                (*quantidade)++;
            }
        }
    }
}

void exercicio08E1(void)
{
    int numero;
    printf("Digite um numero inteiro: ");
    scanf("%d", &numero);
    getchar();

    int quantidade;
    int divisores[numero];
    calcularDivisoresPares(numero, &quantidade, divisores);

    printf("Divisores pares de %d: ", numero);
    for (int i = 0; i < quantidade; i++)
    {
        printf("%d ", divisores[i]);
    }
    printf("\n");

    FILE *arquivo = fopen("DIVISORES.TXT", "w");
    if (arquivo == NULL)
    {
        printf("Erro ao criar arquivo!\n");
        return;
    }

    fprintf(arquivo, "%d\n", quantidade);
    for (int i = 0; i < quantidade; i++)
    {
        fprintf(arquivo, "%d\n", divisores[i]);
    }
    fclose(arquivo);

    printf("Divisores gravados em DIVISORES.TXT\n");

    printf("\n\nAperte ENTER para continuar");
    getchar();
}

void exercicio08E2(void)
{
    FILE *arquivo = fopen("PALAVRAS.TXT", "r");
    if (arquivo == NULL)
    {
        printf("Arquivo PALAVRAS.TXT nao encontrado!\n");
        return;
    }

    char palavras[100][100];
    int n = 0;
    while (fscanf(arquivo, "%99s", palavras[n]) == 1 && n < 100)
    {
        n++;
    }
    fclose(arquivo);

    char resultado[10][100];
    int quantidade;
    encontrarPalavrasSemE(palavras, n, resultado, &quantidade);

    printf("Palavras que nao comecam nem terminam com 'E':\n");
    for (int i = 0; i < quantidade; i++)
    {
        printf("%s\n", resultado[i]);
    }

    printf("\n\nAperte ENTER para continuar");
    getchar();
}

int main()
{
    int opcao = 0;
    printf("%s\n", "Extra08 - Programa = v0.0");
    printf("%s\n", "Autor: Felipe Silva Barros");
    printf("\n");

    do
    {
        printf("\n%s\n", "Opcoes:");
        printf("\n%s", "0 - Terminar");
        printf("\n%s", "1 - extra_01");
        printf("\n%s", "2 - extra_02");
        printf("\n");
        printf("\n%s", "Opcao = ");
        scanf("%d", &opcao);
        getchar();
        printf("\n%s%d\n", "Opcao = ", opcao);

        switch (opcao)
        {
        case 0:
            break;
        case 1:
            exercicio08E1();
            break;
        case 2:
            exercicio08E2();
            break;
        default:
            printf("\nERRO: Opcao invalida.\n");
            break;
        }
    }

    while (opcao != 0);
    printf("\n\nApertar ENTER para terminar.");
    getchar();
    return (0);
}