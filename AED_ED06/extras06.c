/*
Extra06 - v0.0. - 06 / 04 / 2025
Author: Felipe Silva Barros
*/

#include <stdio.h>
#include <math.h>

double funcaoE1(int x, int n, int expoente) {
    if (n == 0)
        return 0;
    return pow(x, expoente) + funcaoE1(x, n - 1, expoente + 2);
}

double fatorial(double n) {
    if (n <= 1)
        return 1.0;
    return n * fatorial(n - 1);
}

double funcaoE2(int termo, int numerador, int denominador) {
    if (termo == 0)
        return 0.0;
    return (double)numerador / fatorial((double)denominador) + funcaoE2(termo - 1, numerador + 2, denominador * 2);
}

void extra01()
{
    int x = 0;
    int n = 0;

    printf("Digite o valor de x: ");
    scanf("%d", &x);
    getchar();

    printf("Digite a quantidade de termos: ");
    scanf("%d", &n);
    getchar();
    
    printf("Resultado: %.2lf\n", 1 + funcaoE1(x, n, 3));

    printf("\n%s\n", "Aperte ENTER para continuar.");
    getchar();
}

void extra02()
{
    int n = 0;

    printf("Digite a quantidade de termos: ");
    scanf("%d", &n);
    getchar();

    printf("Resultado: %.10lf\n", 1.0 + funcaoE2(n, 3, 2));

    printf("\nAperte ENTER para continuar.");
    getchar();
}

int main()
{
    int opcao = 0;
    printf("%s\n", "Extra06 - Programa = v0.0");
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