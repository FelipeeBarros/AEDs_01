/*
Exercicio08 - v0.0. - 09 / 05 / 2025
Author: Felipe Silva Barros
*/

#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <time.h>
#include <stdlib.h>

void lerPares(int *n, int arranjo[])
{
    *n = 0;
    printf("Digite o tamanho do arranjo: ");
    scanf("%d", n);
    getchar();

    if (*n <= 0)
    {
        printf("Tamanho invalido!\n");
        return;
    }

    printf("Digite %d valores positivos e pares:\n", *n);
    for (int i = 0; i < *n; i++)
    {
        int valor;
        do
        {
            printf("Elemento %d: ", i + 1);
            scanf("%d", &valor);
            getchar();
            if (valor <= 0 || valor % 2 != 0)
            {
                printf("Valor invalido! Deve ser positivo e par.\n");
            }
        } while (valor <= 0 || valor % 2 != 0);
        arranjo[i] = valor;
    }
}

void gravarParesPositivos(int n, int arranjo[], const char *nomeArquivo)
{
    FILE *arquivo = fopen(nomeArquivo, "w");
    if (arquivo == NULL)
    {
        printf("Erro ao abrir arquivo!\n");
        return;
    }

    fprintf(arquivo, "%d\n", n);
    for (int i = 0; i < n; i++)
    {
        if (arranjo[i] > 0 && arranjo[i] % 2 == 0)
        {
            fprintf(arquivo, "%d\n", arranjo[i]);
        }
    }

    fclose(arquivo);
}

int gerarInt(int inferior, int superior)
{
    return inferior + rand() % (superior - inferior + 1);
}

int acharMenorPar(int n, int arranjo[])
{
    int menor = -1;
    for (int i = 0; i < n; i++)
    {
        if (arranjo[i] % 2 == 0)
        {
            if (menor == -1 || arranjo[i] < menor)
            {
                menor = arranjo[i];
            }
        }
    }
    return menor;
}

int acharMaiorImparDivisivelPorTres(int n, int arranjo[])
{
    int maior = -1;
    for (int i = 0; i < n; i++)
    {
        if (arranjo[i] % 2 != 0 && arranjo[i] % 3 == 0)
        {
            if (maior == -1 || arranjo[i] > maior)
            {
                maior = arranjo[i];
            }
        }
    }
    return maior;
}

double acharMedia(int n, int arranjo[])
{
    if (n == 0)
        return 0.0;

    double soma = 0.0;
    for (int i = 0; i < n; i++)
    {
        soma += arranjo[i];
    }
    return soma / n;
}

int estaOrdenadoDecrescente(int n, int arranjo[])
{
    if (n <= 1)
        return 1;

    for (int i = 0; i < n - 1; i++)
    {
        if (arranjo[i] < arranjo[i + 1])
        {
            return 0;
        }
    }
    return 1;
}

int acharValor(int procurado, int inicio, int n, int arranjo[])
{
    for (int i = inicio; i < n; i++)
    {
        if (arranjo[i] == procurado)
        {
            return 1;
        }
    }
    return 0;
}

int acharPosicao(int procurado, int inicio, int n, int arranjo[])
{
    for (int i = inicio; i < n; i++)
    {
        if (arranjo[i] == procurado)
        {
            return i;
        }
    }
    return -1;
}

int acharQuantos(int procurado, int inicio, int n, int arranjo[])
{
    int contador = 0;
    for (int i = inicio; i < n; i++)
    {
        if (arranjo[i] == procurado)
        {
            contador++;
        }
    }
    return contador;
}

void exercicio0811(void)
{
    int n;
    int arranjo[100];

    lerPares(&n, arranjo);

    printf("Arranjo lido: ");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arranjo[i]);
    }

    printf("\n\nAperte ENTER para continuar");
    getchar();
}

void exercicio0812(void)
{
    int n = 5;
    int arranjo[] = {2, -4, 7, 8, 10};
    const char *nomeArquivo = "PARES.TXT";

    gravarParesPositivos(n, arranjo, nomeArquivo);

    printf("Dados gravados em %s\n", nomeArquivo);

    printf("\n\nAperte ENTER para continuar");
    getchar();
}

void exercicio0813(void)
{
    int inferior, superior, N;
    printf("Digite o limite inferior: ");
    scanf("%d", &inferior);
    getchar();

    printf("Digite o limite superior: ");
    scanf("%d", &superior);
    getchar();

    printf("Digite a quantidade de valores: ");
    scanf("%d", &N);
    getchar();

    srand(time(NULL));
    int arranjo[N];
    for (int i = 0; i < N; i++)
    {
        arranjo[i] = gerarInt(inferior, superior);
    }

    FILE *arquivo = fopen("DADOS.TXT", "w");
    if (arquivo == NULL)
    {
        printf("Erro ao criar arquivo!\n");
        return;
    }

    fprintf(arquivo, "%d\n", N);
    for (int i = 0; i < N; i++)
    {
        fprintf(arquivo, "%d\n", arranjo[i]);
    }
    fclose(arquivo);

    printf("%d valores gerados e gravados em DADOS.TXT\n", N);

    printf("\n\nAperte ENTER para continuar");
    getchar();
}

void exercicio0814(void)
{
    FILE *arquivo = fopen("DADOS.TXT", "r");
    if (arquivo == NULL)
    {
        printf("Arquivo DADOS.TXT nao encontrado!\n");
        return;
    }

    int n;
    fscanf(arquivo, "%d", &n);
    int arranjo[n];
    for (int i = 0; i < n; i++)
    {
        fscanf(arquivo, "%d", &arranjo[i]);
    }
    fclose(arquivo);

    int menor = acharMenorPar(n, arranjo);
    if (menor == -1)
    {
        printf("Nenhum valor par encontrado.\n");
    }
    else
    {
        printf("Menor valor par: %d\n", menor);
    }

    printf("\n\nAperte ENTER para continuar");
    getchar();
}

void exercicio0815(void)
{
    FILE *arquivo = fopen("DADOS.TXT", "r");
    if (arquivo == NULL)
    {
        printf("Arquivo DADOS.TXT nao encontrado!\n");
        return;
    }

    int n;
    fscanf(arquivo, "%d", &n);
    int arranjo[n];
    for (int i = 0; i < n; i++)
    {
        fscanf(arquivo, "%d", &arranjo[i]);
    }
    fclose(arquivo);

    int maior = acharMaiorImparDivisivelPorTres(n, arranjo);
    if (maior == -1)
    {
        printf("Nenhum valor impar divisivel por 3 encontrado.\n");
    }
    else
    {
        printf("Maior valor impar divisivel por 3: %d\n", maior);
    }

    printf("\n\nAperte ENTER para continuar");
    getchar();
}

void exercicio0816(void)
{
    FILE *arquivo = fopen("DADOS.TXT", "r");
    if (arquivo == NULL)
    {
        printf("Arquivo DADOS.TXT nao encontrado!\n");
        return;
    }

    int n;
    fscanf(arquivo, "%d", &n);
    int arranjo[n];
    for (int i = 0; i < n; i++)
    {
        fscanf(arquivo, "%d", &arranjo[i]);
    }
    fclose(arquivo);

    if (n == 0)
    {
        printf("Nenhum dado para calcular media.\n");
        return;
    }

    double media = acharMedia(n, arranjo);
    printf("Media: %.2f\n", media);

    FILE *menores = fopen("MENORES.TXT", "w");
    FILE *maiores = fopen("MAIORES.TXT", "w");
    if (menores == NULL || maiores == NULL)
    {
        printf("Erro ao criar arquivos!\n");
        return;
    }

    for (int i = 0; i < n; i++)
    {
        if (arranjo[i] <= media)
        {
            fprintf(menores, "%d\n", arranjo[i]);
        }
        else
        {
            fprintf(maiores, "%d\n", arranjo[i]);
        }
    }
    fclose(menores);
    fclose(maiores);

    printf("Valores separados em MENORES.TXT e MAIORES.TXT\n");

    printf("\n\nAperte ENTER para continuar");
    getchar();
}

void exercicio0817(void)
{
    int n;
    printf("Digite o tamanho do arranjo: ");
    scanf("%d", &n);
    getchar();

    int arranjo[n];
    printf("Digite %d elementos:\n", n);
    for (int i = 0; i < n; i++)
    {
        printf("Elemento %d: ", i + 1);
        scanf("%d", &arranjo[i]);
        getchar();
    }

    if (estaOrdenadoDecrescente(n, arranjo))
    {
        printf("O arranjo esta ordenado em ordem decrescente.\n");
    }
    else
    {
        printf("O arranjo NAO esta ordenado em ordem decrescente.\n");
    }

    printf("\n\nAperte ENTER para continuar");
    getchar();
}

void exercicio0818(void)
{
    FILE *arquivo = fopen("DADOS.TXT", "r");
    if (arquivo == NULL)
    {
        printf("Arquivo DADOS.TXT nao encontrado!\n");
        return;
    }

    int n;
    fscanf(arquivo, "%d", &n);
    int arranjo[n];
    for (int i = 0; i < n; i++)
    {
        fscanf(arquivo, "%d", &arranjo[i]);
    }
    fclose(arquivo);

    int procurado;
    printf("Digite o valor a procurar: ");
    scanf("%d", &procurado);
    getchar();

    int inicio;
    printf("Digite a posicao inicial: ");
    scanf("%d", &inicio);
    getchar();

    if (acharValor(procurado, inicio, n, arranjo))
    {
        printf("Valor encontrado!\n");
    }
    else
    {
        printf("Valor nao encontrado.\n");
    }

    printf("\n\nAperte ENTER para continuar");
    getchar();
}

void exercicio0819(void)
{
    FILE *arquivo = fopen("DADOS.TXT", "r");
    if (arquivo == NULL)
    {
        printf("Arquivo DADOS.TXT nao encontrado!\n");
        return;
    }

    int n;
    fscanf(arquivo, "%d", &n);
    int arranjo[n];
    for (int i = 0; i < n; i++)
    {
        fscanf(arquivo, "%d", &arranjo[i]);
    }
    fclose(arquivo);

    int procurado;
    printf("Digite o valor a procurar: ");
    scanf("%d", &procurado);
    getchar();

    int inicio;
    printf("Digite a posicao inicial: ");
    scanf("%d", &inicio);
    getchar();

    int posicao = acharPosicao(procurado, inicio, n, arranjo);
    if (posicao == -1)
    {
        printf("Valor nao encontrado.\n");
    }
    else
    {
        printf("Valor encontrado na posicao %d\n", posicao);
    }

    printf("\n\nAperte ENTER para continuar");
    getchar();
}

void exercicio0820(void)
{
    FILE *arquivo = fopen("DADOS.TXT", "r");
    if (arquivo == NULL)
    {
        printf("Arquivo DADOS.TXT nao encontrado!\n");
        return;
    }

    int n;
    fscanf(arquivo, "%d", &n);
    int arranjo[n];
    for (int i = 0; i < n; i++)
    {
        fscanf(arquivo, "%d", &arranjo[i]);
    }
    fclose(arquivo);

    int procurado;
    printf("Digite o valor a procurar: ");
    scanf("%d", &procurado);
    getchar();

    int inicio;
    printf("Digite a posicao inicial: ");
    scanf("%d", &inicio);
    getchar();

    int quantidade = acharQuantos(procurado, inicio, n, arranjo);
    printf("O valor aparece %d vezes\n", quantidade);

    printf("\n\nAperte ENTER para continuar");
    getchar();
}

int main(void)
{
    int opcao = 0;
    printf("%s\n", "Execicio08 - Programa = v0.0");
    printf("%s\n", "Autor: Felipe Silva Barros");
    printf("\n");

    do
    {
        printf("\n%s\n", "Opcoes:");
        printf("\n%s", "0 - Terminar");
        printf("\n%s", "1 - Exercicio0811");
        printf("\n%s", "2 - Exercicio0812");
        printf("\n%s", "3 - Exercicio0813");
        printf("\n%s", "4 - Exercicio0814");
        printf("\n%s", "5 - Exercicio0815");
        printf("\n%s", "6 - Exercicio0816");
        printf("\n%s", "7 - Exercicio0817");
        printf("\n%s", "8 - Exercicio0818");
        printf("\n%s", "9 - Exercicio0819");
        printf("\n%s", "10 - Exercicio0820");
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
            exercicio0811();
            break;
        case 2:
            exercicio0812();
            break;
        case 3:
            exercicio0813();
            break;
        case 4:
            exercicio0814();
            break;
        case 5:
            exercicio0815();
            break;
        case 6:
            exercicio0816();
            break;
        case 7:
            exercicio0817();
            break;
        case 8:
            exercicio0818();
            break;
        case 9:
            exercicio0819();
            break;
        case 10:
            exercicio0820();
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