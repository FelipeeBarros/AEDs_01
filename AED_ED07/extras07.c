/*
Extra07 - v0.0. - 30 / 04 / 2025
Author: Felipe Silva Barros
*/

#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <math.h>

void gravarDivisoresImpares(int numero)
{
    FILE *arquivo = fopen("DIVISORES_IMPARES.TXT", "w");
    if (arquivo == NULL)
    {
        printf("Erro ao abrir o arquivo.\n");
        return;
    }

    fprintf(arquivo, "Divisores impares de %d (em ordem decrescente):\n", numero);

    for (int i = numero; i >= 1; i--)
    {
        if (numero % i == 0 && i % 2 != 0)
        {
            fprintf(arquivo, "%d\n", i);
        }
    }

    fclose(arquivo);
}

int contarPalavrasComC(FILE *arquivo)
{
    int count = 0;
    char palavra[100];

    while (fscanf(arquivo, "%99s", palavra) == 1)
    {
        if ((palavra[0] == 'C' || palavra[0] == 'c') && strlen(palavra) <= 12)
        {
            count++;
        }
    }

    return count;
}

void exercicio07E1(void)
{
    int numero = 0;

    printf("%s\n", "Digite um numero inteiro: ");
    scanf("%d", &numero);
    getchar();

    gravarDivisoresImpares(numero);

    printf("\n%s\n", "\nAperte ENTER para continuar");
    getchar();
}

void exercicio07E2(void)
{
    FILE *arquivo = fopen("PALAVRAS.TXT", "r");
    if (arquivo == NULL)
    {
        printf("Erro ao abrir o arquivo PALAVRAS.TXT.\n");
        return;
    }

    int count = contarPalavrasComC(arquivo);
    fclose(arquivo);

    FILE *resultado = fopen("RESULTADO_E2.TXT", "w");
    if (resultado == NULL)
    {
        printf("Erro ao criar arquivo de resultado.\n");
        return;
    }
    fprintf(resultado, "Palavras que comecam com 'C' e tem ate 12 caracteres: %d\n", count);
    fclose(resultado);

    printf("\n%s\n", "\nAperte ENTER para continuar");
    getchar();
}

int main()
{
    int opcao = 0;
    printf("%s\n", "Extra07 - Programa = v0.0");
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
            exercicio07E1();
            break;
        case 2:
            exercicio07E2();
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