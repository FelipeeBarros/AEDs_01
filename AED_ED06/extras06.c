/*
Extra05 - v0.0. - 28 / 03 / 2025
Author: Felipe Silva Barros
*/

#include <stdio.h>
#define MAX 100

int fatorial(int x, int valores[MAX])
{
    int i = 0;
    int y = 0;
    int soma = 1;

    y = x;

    if (x < 0)
    {
        printf("ERRO! Valor inserido menor que zero!\n");
        return 0;
    }

    while (i < x)
    {
        valores[i] = x - i;
        soma *= valores[i];
        y = y - 1;
        i = i + 1;
    }
    return soma;
}

double fatorialDenominador(int x)
{
    double fat = 1.0;
    for (int i = 2; i <= x; i++)
    {
        fat *= i;
    }
    return fat;
}

double calcularF(int n)
{
    double resultado = 1.0;

    printf("Calculo:\n");

    for (int i = 1; i <= n; i++)
    {
        int num = 2 * i;
        int den = 2 * i + 1;
        double fat = fatorialDenominador(den);
        double termo = 1 + (num / fat);

        printf("(1 + %d/%d!)", num, den);

        if (i < n)
        {
            printf(" * ");
        }

        resultado *= termo;
    }

    printf("\n");
    return resultado;
}

void extra01()
{
    int i = 0;
    int n = 0;
    int soma = 0;
    int valores[MAX];

    printf("%s\n", "Digite um valor para retornar o fatorial: ");
    scanf("%d", &n);
    getchar();

    soma = fatorial(n, valores);

    for (i = 0; i < n; i++)
    {
        printf("%d ", valores[i]);
    }

    printf("\nFatorial = %d\n", soma);

    printf("\n%s\n", "Aperte ENTER para continuar.");
    getchar();
}

void extra02()
{
    int n;

    printf("Digite um valor inteiro para n: ");
    scanf("%d", &n);
    getchar();

    if (n < 1)
    {
        printf("ERRO! Insira um valor maior ou igual a 1.\n");
        return;
    }

    double resultado = calcularF(n);
    printf("\nf(%d) = %.6lf\n", n, resultado);

    printf("\nAperte ENTER para continuar.");
    getchar();
}

int main()
{
    int opcao = 0;
    printf("%s\n", "Extra04 - Programa = v0.0");
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
            extra01();
            break;
        case 2:
            extra02();
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