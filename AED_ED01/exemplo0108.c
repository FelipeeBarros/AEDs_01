/*
Exemplo0108 - v0.0. - 20 / 02 / 2025
Author: Felipe Silva Barros
*/

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>
#include <math.h>

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

void method_03(void)
{
    char x = 'A';
    printf("\n%s\n", "Method_03 - Programa - v0.0");

    printf("\n%s%c\n", "x = ", x);

    printf("Entrar com um caractere: ");
    scanf("%c", &x);

    getchar();

    printf("%s%c\n", "x = ", x);
    printf("\n\nApertar ENTER para continuar.\n");
    getchar();
}

void method_04(void)
{
    bool x = false;
    int y = 0;

    printf("\n%s\n", "Method_04 - Programa - v0.0");

    printf("\n%s%d\n", "x = ", x);
    printf("Entrar com um valor logico: ");
    scanf("%d", &y);

    getchar();
    x = (y != 0);

    printf("%s%d\n", "x = ", x);

    printf("\n\nApertar ENTER para continuar.\n");
    getchar();
}

void method_05(void)
{
    char x[80] = "abc";
    char *px = &x[0];

    printf("\n%s\n", "Method_05 - Programa - v0.0");

    printf("\n%s%s\n", "x = ", x);

    printf("Entrar com uma cadeia de caracteres: ");
    scanf("%s", x);

    getchar();
    printf("%s%s\n", "x = ", x);

    printf("Entrar com outra cadeia de caracteres: ");
    scanf("%s", px);
    getchar();

    printf("%s%s\n", "x = ", px);

    printf("\n\nApertar ENTER para continuar.\n");
    getchar();
}

void method_06(void)
{
    int x = 0;
    int y = 0;
    int z = 0;
    int *py = &y;

    printf("\n%s\n", "Method_06 - Programa - v0.0");

    printf("%s%d\n", "x = ", x);
    printf("%s%i\n", "y = ", y);

    printf("Entrar com um valor inteiro: ");
    scanf("%d", &x);

    getchar();
    printf("Entrar com outro valor inteiro: ");
    scanf("%i", py);

    getchar();

    z = x * y;

    printf("%s(%i)*(%i) = (%d)\n", "z = ", x, y, z);

    printf("\n\nApertar ENTER para continuar.\n");
    getchar();
}

void method_07(void)
{
    char x[80] = "abc";
    char y[80] = "def";
    char z[80];
    strcpy(z, "");

    printf("\n%s\n", "Method_07 - Programa - v0.0");

    printf("%s%s (%d)\n", "x = ", x, strlen(x));
    printf("%s%s (%d)\n", "y = ", y, strlen(y));

    printf("Entrar com caracteres: ");
    scanf("%s", x);

    getchar();
    printf("Entrar com outros caracteres: ");
    scanf("%s", y);

    getchar();

    strcpy(z, x);
    strcat(z, y);

    printf("%s[%s]*[%s] = [%s]\n", "z = ", x, y, z);

    strcpy(z, strcat(strdup(x), y));

    printf("%s[%s]*[%s] = [%s]\n", "z = ", x, y, z);

    printf("\n\nApertar ENTER para continuar.\n");
    getchar();
}

void method_08(void)
{
    double x = 0.0;
    double y = 0.0;
    double z = 0.0;

    printf("\n%s\n", "Method_08 - Programa - v0.0");

    printf("%s%lf\n", "x = ", x);
    printf("%s%lf\n", "y = ", y);

    printf("Entrar com um valor real: ");
    scanf("%lf", &x);

    getchar();
    printf("Entrar com outro valor real: ");
    scanf("%lf", &y);

    getchar();
    z = pow(x, y);
    printf("%s(%lf) elevado a (%lf) = (%lf)\n", "z = ", x, y, z);

    x = pow(z, 1.0 / y);
    printf("%s(%lf) elevado a (1/%lf) = (%lf)\n", "z = ", z, y, x);

    z = sqrt(x);

    printf("%sraiz(%lf) = (%lf)\n", "z = ", x, z);

    printf("\n\nApertar ENTER para continuar.\n");
    getchar();
}

int main(int argc, char *argv[])
{

    int opcao = 0;

    printf("%s\n", "Exemplo0108 - Programa = v0.0");
    printf("%s\n", "Autor: Felipe Silva Barros");
    printf("\n");

    do
    {

        printf("\n%s\n", "Opcoes:");
        printf("\n%s", "0 - Terminar");
        printf("\n%s", "1 - Method_01");
        printf("\n%s", "2 - Method_02");
        printf("\n%s", "3 - Method_03");
        printf("\n%s", "4 - Method_04");
        printf("\n%s", "5 - Method_05");
        printf("\n%s", "6 - Method_06");
        printf("\n%s", "7 - Method_07");
        printf("\n%s", "8 - Method_08");
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
        case 3:
            method_03();
            break;
        case 4:
            method_04();
            break;
        case 5:
            method_05();
            break;
        case 6:
            method_06();
            break;
        case 7:
            method_07();
            break;
        case 8:
            method_08();
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