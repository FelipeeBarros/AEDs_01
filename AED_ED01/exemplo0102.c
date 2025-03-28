/*
Exemplo0102 - v0.0. - 20 / 02 / 2025
Author: Felipe Silva Barros
*/

#include <stdio.h>
#include <stdlib.h>

void method_01(void)
{
    int x = 0;

    printf("\n%s\n", "Method_01 - Programa = v0.0");

    printf("\n%s%d\n", "x = ", x);
    printf("&%s%p\n", "x = ", &x);

    printf("Entrar com um valor inteiro: ");
    scanf("%d", &x);
    getchar();
    printf("%s%i\n", "x = ", x);

    printf("\n\nApertar ENTER para continuar.");
    getchar();
}

void method_02(void)
{
    double x = 0.0;
    printf("\n%s\n", "Method_02 - Programa - v0.0");

    printf("\n%s%lf\n", "x = ", x);

    printf("Entrar com um valor real: ");
    scanf("%lf", &x);

    getchar();

    printf("%s%lf\n", "x = ", x);
    printf("\n\nApertar ENTER para continuar.\n");
    getchar(); 
}

int main(int argc, char *argv[])
{

    int opcao = 0;

    printf("%s\n", "Exemplo0102 - Programa = v0.0");
    printf("%s\n", "Autor: Felipe Silva Barros");
    printf("\n");

    do
    {

        printf("\n%s\n", "Opcoes:");
        printf("\n%s", "0 - Terminar");
        printf("\n%s", "1 - Method_01");
        printf("\n%s", "2 - Method_02");
        printf("\n");

        printf("\n%s", "Opcao = ");
        scanf("%d", &opcao);
        getchar();
        printf("\n%s%d", "Opcao = ", opcao);

        switch (opcao)
        {
        case 0:
            break;
        case 1:
            method_01();
            break;
        case 2:
            method_02();
            break;
        default:
            printf("\nERRO: Opcao invalida.\n");
            break;
        }
    } while (opcao != 0);

    printf("\n\nApertar ENTER para terminar.");
    getchar();
    return (0);
}