/*
Exemplo0110 - v0.0. - 20 / 02 / 2025
Author: Felipe Silva Barros
*/

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>
#include <math.h>
#include "io.h"

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

void method_09(void)
{
    int x = 0;
    double y = 3.5;
    char z = 'A';
    bool w = false;
    char s[80] = "";

    printf("\n%s\n", "Method_09 - Programa - v0.0");
    printf("01. %s%d\n", "x = ", x);
    printf("02. %s%lf\n", "y = ", y);
    printf("03. %s%c\n", "z = ", z);

    x = (int)z;
    printf("04. %s%d -> %c\n", "x = ", x, z);
    x = (int)y;
    printf("05. %s%d -> %lf\n", "x = ", x, y);
    x = 97;
    z = (char)x;
    printf("06. %s%c -> %d\n", "z = ", z, x);
    x = (int)'0';
    z = (char)x;
    printf("07. %s%c -> %d\n", "z = ", z, x);
    x = w;
    printf("08. %s%d -> %d\n", "x = ", x, w);
    w = true;
    x = w;
    printf("09. %s%d -> %d\n", "x = ", x, w);
    x = (w == false);
    printf("10. %s%d -> %d\n", "x = ", x, w);
    x = !(w == false);
    printf("11. %s%d -> %d\n", "x = ", x, w);
    x = (w != false);
    printf("12. %s%d -> %d\n", "x = ", x, w);
    w = (x == 0);
    printf("13. %s%d == %d = %d\n", "w = ", x, 0, w);
    w = (x != 0);
    printf("14. %s%d != %d = %d\n", "w = ", x, 0, w);
    w = (x < y);
    printf("15. %s%d < %lf = %d\n", "w = ", x, y, w);
    w = (x <= y);
    printf("16. %s%d <= %lf = %d\n", "w = ", x, y, w);
    w = (y > x);
    printf("17. %s%lf > %d = %d\n", "w = ", y, x, w);
    w = (y >= x);
    printf("18. %s%lf >= %d = %d\n", "w = ", y, x, w);
    x = 4;
    w = (x % 2 == 0);
    printf("19. %s (%d%%2) ? %d\n", "e' par ", x, w);
    x = 4;
    w = (x % 2 != 0);
    printf("20. %s (%d%%2) ? %d\n", "e' impar ", x, w);
    z = '5';
    w = ('0' <= z && z <= '9');
    printf("21. %s (%c) ? %d\n", "e' digito", z, w);
    z = 'x';
    w = ('a' <= z && z <= 'z');
    printf("22. %s (%c) ? %d\n", "e' minuscula ", z, w);
    z = 'X';
    w = (!('a' <= z && z <= 'z'));
    printf("23. %s (%c) ? %d\n", "nao e' minuscula ", z, w);
    z = 'x';
    w = ('A' <= z && z <= 'Z');
    printf("24. %s (%c) ? %d\n", "e' maiuscula ", z, w);
    z = 'X';
    w = ((z < 'A') || ('Z' < z));
    printf("25. %s (%c) ? %d\n", "nao e' maiuscula ", z, w);
    z = '0';
    w = ('0' == z || '1' == z);
    printf("26. %s (%c) ? %d\n", "e' 0 ou 1 ", z, w);
    strcpy(s, "zero");
    printf("27. palavra = %s\n", s);
    w = (strcmp("zero", s) == 0);

    printf("28. palavra == %s ? %d\n", s, w);
    strcpy(s, "um e dois");
    printf("29. palavras = %s\n", s);
    w = (strcmp("zero", s) != 0);

    printf("30. palavra == %s ? %d\n", s, w);

    printf("\n\nApertar ENTER para continuar.");
    getchar();
}

void method_10(void)
{
    int x = 5;
    double y = 3.5;
    char z = 'A';
    bool w = TRUE;
    chars a = IO_new_chars(STR_SIZE);
    chars b = IO_new_chars(STR_SIZE);
    chars c = IO_new_chars(STR_SIZE);

    IO_id("Method 10 - Programa - v0.0");
    strcpy(a, "abc");
    strcpy(b, "def");
    IO_printf("\na = %s b = %s\n", a, b);
    c = IO_concat(a, b);
    IO_printf("\nc = [%s]+[%s] = [%s]\n", a, b, c);
    strcpy(a, "c = ");
    strcpy(c, STR_EMPTY);
    IO_printf("%s\n", IO_concat(a, IO_toString_c(z)));
    IO_println(IO_concat("x = ", IO_toString_d(x)));
    IO_println(IO_concat("w = ", IO_toString_b(w)));
    strcpy(b, STR_EMPTY);
    IO_print("y = ");
    IO_print(IO_concat(b, IO_toString_f(y)));
    IO_print("\n");
    z = IO_readchar("char = ");
    IO_println(IO_concat(a, IO_toString_c(z)));
    y = IO_readdouble("double = ");
    IO_println(IO_concat(a, IO_toString_f(y)));
    x = IO_readint("int = ");
    IO_println(IO_concat(a, IO_toString_d(x)));
    w = IO_readbool("bool = ");
    IO_println(IO_concat(a, IO_toString_b(w)));
    b = IO_readstring("chars = ");
    IO_println(IO_concat(a, b));
    b = IO_readln("line = ");
    IO_println(IO_concat(a, b));

    IO_pause("Apertar ENTER para terminar");
}

int main(int argc, char *argv[])
{

    int opcao = 0;

    printf("%s\n", "Exemplo0110 - Programa = v0.0");
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
        printf("\n%s", "9 - Method_09");
        printf("\n%s", "10 - Method_10");
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
        case 9:
            method_09();
            break;
        case 10:
            method_10();
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