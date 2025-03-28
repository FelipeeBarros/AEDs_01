/*
Exercicio00 - v0.0. - 16 / 02 / 2025
Author: Felipe Silva Barros
*/

#include <stdio.h>
#include <stdbool.h>
#include <string.h>
#include <iso646.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>

void print_header(const char *message)
{
    printf("%s\n", message);
}

void print_footer(const char *message)
{
    printf("%s\n", message);
    getchar();
}

void method_01(void)
{
    printf("857295_Felipe_Silva_Barros_AED1\n");
}

void method_02(void)
{
    printf("%s\n", "857295_Felipe_Silva_Barros_AED1");

    printf("%s\n", "Apertar ENTER para terminar.");
    getchar();
}

void method_03(void)
{
    bool status = false;
    int contador = 0;
    float valor_1 = 0.00f;
    double valor_2 = 0.00;
    char letra = 'A';

    printf("%s\n", "857295_Felipe_Silva_Barros_AED1");

    printf("status  : %d \n", status);
    printf("contador: %d \n", contador);
    printf("valor_1 : %f \n", valor_1);
    printf("valor_2 : %lf\n", valor_2);
    printf("letra   : %c \n", letra);

    printf("%s\n", "Apertar ENTER para terminar.");
    getchar();
}

void method_04(void)
{
    char x = 'A';
    int y = 5;
    double z = 1.2;

    printf("%s\n", "857295_Felipe_Silva_Barros_AED1");

    printf("\nOperacoes\n");
    y = (int)z;
    printf("z = %lf\t y = %d\n", z, y);
    y = (int)x;
    printf("x = %c \t y = %d\n", x, y);
    y = x;
    printf("x = %c \t y = %d\n", x, y);
    printf("\n");

    x = (char)(32 + y);
    printf("y = %d \t x = %c\n", y, x);
    x = (char)(48 + (int)z);
    printf("z = %lf\t x = %c\n", z, x);
    printf("\n");

    z = z - (int)z;
    printf("z = %lf\n", z);
    z = (double)x;
    printf("z = %lf\t x = %c\n", z, x);
    z = 1.0 * x;
    printf("z = %lf\t x = %c\n", z, x);
    printf("\n");

    z = x / 2;
    printf("z = %lf\n", z);
    z = (double)(x / 2);
    printf("z = %lf\n", z);
    z = (double)x / 2;
    printf("z = %lf\n", z);
    z = x / (double)2;
    printf("z = %lf\n", z);
    z = (double)x / (double)2;
    printf("z = %lf\n", z);
    printf("\n");

    printf("%s\n", "Apertar ENTER para terminar.");
    getchar();
}

void method_05(void)
{
    bool p = true;
    bool q = false;
    bool r = false;
    char a = 'A';
    char b = 'a';
    int x = 5;
    int y = 7;

    printf("%s\n", "857295_Felipe_Silva_Barros_AED1");

    printf("\nComparacoes\n");
    printf("   (%c==%c) = %d\n", a, a, (a == a));
    printf("   (%c!=%c) = %d\n", a, a, (a != a));
    printf("\n");

    r = !(a == a);
    printf(" ! (%c==%c) = %d\n", a, a, r);
    r = !(a != a);
    printf(" ! (%c!=%c) = %d\n", a, a, r);
    r = not(a == a);
    printf("not(%c==%c) = %d\n", a, a, r);
    printf("\n");

    r = (x < y) && (x != 0);
    printf("(%d<%d)  && (%d!=0)= %d\n", x, y, x, r);
    r = (x < y) and (x != 0);
    printf("(%d<%d) and (%d!=0)= %d\n", x, y, x, r);
    r = (x >= y) || (x != 0);
    printf("(%d>=%d) || (%d!=0)= %d\n", x, y, x, r);
    r = (x >= y) or (x != 0);
    printf("(%d<%d)  or (%d!=0)= %d\n", x, y, x, r);
    r = (x <= y) && (x > 0);
    printf("(%d<%d)  && (%d> 0)= %d\n", x, y, x, r);
    r = (x <= y) and (x > 0);
    printf("(%d<%d) and (%d> 0)= %d\n", x, y, x, r);
    printf("\n");

    printf("%s\n", "Apertar ENTER para terminar.");
    getchar();
}

void method_06(void)
{
    bool p = true;
    bool q = false;
    bool r = false;

    printf("%s\n", "857295_Felipe_Silva_Barros_AED1");

    printf("     p = %d\n", p);
    printf("     q = %d\n", q);
    printf("\n");

    printf("\nNegacao\n");
    r = !p;
    printf(" !   p = %d\n", r);
    r = !q;
    printf(" !   q = %d\n", r);
    r = not p;
    printf("not  p = %d\n", r);
    printf("\n");

    printf("\nConjuncao\n");
    printf("0 && 0 = %d\n", (0 && 0));
    printf("0 && 1 = %d\n", (0 && 1));
    printf("1 && 0 = %d\n", (1 && 0));
    printf("1 && 1 = %d\n", (1 && 1));
    printf("\n");

    printf("\nDisjuncao\n");
    printf("0 || 0 = %d\n", (0 || 0));
    printf("0 || 1 = %d\n", (0 || 1));
    printf("1 || 0 = %d\n", (1 || 0));
    printf("1 || 1 = %d\n", (1 || 1));
    printf("\n");

    printf("\nDisjuncao exclusiva\n");
    printf("0 ^  0 = %d\n", (0 ^ 0));
    printf("0 ^  1 = %d\n", (0 ^ 1));
    printf("1 ^  0 = %d\n", (1 ^ 0));
    printf("1 ^  1 = %d\n", (1 ^ 1));
    printf("\n");

    printf("\nOperacoes logicas\n");
    r = p && q;
    printf("p &&  q = %d\n", r);
    r = p and q;
    printf("p and q = %d\n", r);
    r = p || q;
    printf("p ||  q = %d\n", r);
    r = p or q;
    printf("p or  q = %d\n", r);
    printf("\n");

    r = p ^ q;
    printf("p  ^  q = %d\n", r);
    r = p xor q;
    printf("p xor q = %d\n", r);
    r = p ^ p;
    printf("p  ^  p = %d\n", r);
    r = p xor p;
    printf("p xor p = %d\n", r);
    printf("\n");

    printf("%s\n", "Apertar ENTER para terminar.");
    getchar();
}

void method_07(void)
{
    printf("%s\n", "857295_Felipe_Silva_Barros_AED1");

    int valor = 0;

    printf("Enter a number: ");
    scanf("%d", &valor);
    getchar();

    if (valor < 0)
    {
        printf("%d -> negativo\n", valor);
    }

    if (valor < 100)
    {
        printf("%d menor que 100\n", valor);
    }
    else
    {
        if (valor == 100)
        {
            printf("%d igual a cem\n", valor);
        }
        else
        {
            printf("%d diferente de 100\n", valor);
        }
    }

    printf("%s\n", "Apertar ENTER para terminar.");
    getchar();
}

void method_08(void)
{
    printf("%s\n", "857295_Felipe_Silva_Barros_AED1");
    int opcao = 0;

    printf("%s", "Opcao: ");
    scanf("%d", &opcao);
    getchar();

    switch (opcao)
    {
    case 0:
        printf("%s\n", "Opcao 0 escolhida");
        break;

    case 1:
        printf("%s\n", "Opcao 1 escolhida");
        break;

    case 2:
        printf("%s\n", "Opcao 2 escolhida");
        break;

    default:
        printf("%s\n", "Outra opcao escolhida");
        break;
    }

    printf("%s\n", "Apertar ENTER para terminar.");
    getchar();
}

void method_09(void)
{
    printf("%s\n", "857295_Felipe_Silva_Barros_AED1");
    int opcao = 0;

    do
    {

        printf("%s", "Opcao: ");
        scanf("%d", &opcao);
        getchar();

        switch (opcao)
        {
        case 0:
            printf("%s\n", "Opcao 0 escolhida");
            break;

        case 1:
            printf("%s\n", "Opcao 1 escolhida");
            break;

        case 2:
            printf("%s\n", "Opcao 2 escolhida");
            break;

        default:
            printf("%s\n", "Outra opcao escolhida");
            break;
        }
    } while (opcao != 0);

    printf("%s\n", "Apertar ENTER para terminar.");
    getchar();
}

void method_10(void)
{
    int x = 0;

    printf("%s\n", "857295_Felipe_Silva_Barros_AED1");

    while (x < 5)
    {
        printf("%d\n", x);
        x = x + 1;
    }

    printf("%s\n", "Apertar ENTER para terminar.");
    getchar();
}

void method_11(void)
{
    int x = 5;

    printf("%s\n", "857295_Felipe_Silva_Barros_AED1");

    while (x > 0)
    {
        printf("%d\n", x);
        x = x - 1;
    }

    printf("%s\n", "Apertar ENTER para terminar.");
    getchar();
}

void method_12(void)
{
    int x = 0;

    printf("%s\n", "857295_Felipe_Silva_Barros_AED1");

    for (x = 0; x < 5; x = x + 1)
    {
        printf("%d\n", x);
    }

    printf("%s\n", "Apertar ENTER para terminar.");
    getchar();
}

void method_13(void)
{
    int x = 0;

    printf("%s\n", "857295_Felipe_Silva_Barros_AED1");

    for (x = 5; x > 0; x = x - 1)
    {
        printf("%d\n", x);
    }

    printf("%s\n", "Apertar ENTER para terminar.");
    getchar();
}

void method_14(void)
{
    print_header("857295_Felipe_Silva_Barros_AED1");
    printf("%s\n", "de volta ao main()");

    print_footer("Apertar ENTER para terminar.");
}

void method_15(void)
{
    print_header("857295_Felipe_Silva_Barros_AED1");
    printf("%s\n", "de volta ao main()");

    print_footer("Apertar ENTER para terminar.");
}

int max(int x, int y)
{
    int z = 0;
    if (x > y)
        z = x;
    else
        z = y;
    return (z);
}

int min(int x, int y)
{
    int z = x;
    if (y < x)
        z = y;
    return (z);
}

void method_16(void)
{
    int x = 3;
    int y = 5;
    int z = 7;

    printf("%s\n", "857295_Felipe_Silva_Barros_AED1");

    printf("\nAplicar funcoes\n");
    printf("maior(%d,%d) = %d\n",
           x, y, max(x, y));
    printf("\n");
    printf("maior(%d,%d,%d) = %d\n",
           x, y, z, max(x, max(y, z)));
    printf("\n");
    printf("menor(%d,%d) = %d\n",
           x, y, min(x, y));
    printf("\n");
    printf("menor(%d,%d,%d) = %d\n",
           x, y, z, min(min(x, y), z));
    printf("\n");

    printf("%s\n", "Apertar ENTER para terminar.");
    getchar();
}

double sqr(double x)
{
    return (x * x);
}
double lg(double x)
{
    return (log10(x) / log10(2.0));
}

void method_17(void)
{
    int x = 0;
    double y = 1.5;

    printf("%s\n", "857295_Felipe_Silva_Barros_AED1");

    printf("\nAplicar funcoes\n");
    printf("floor(%lf) = %lf\n",
           y, floor(y));
    printf("\n");
    printf("ceil(%lf)  = %lf\n",
           y, ceil(y));
    printf("\n");
    x = trunc(y);
    printf("trunc(%lf) = %d\n",
           y, x);
    printf("\n");
    x = round(y);
    printf("round(%lf) = %d\n",
           y, x);
    printf("\n");

    y = sin(30.0 * M_PI / 180.0);
    printf("sin(30) = %5.2lf\n", y);
    y = cos(60.0 * M_PI / 180.0);
    printf("cos(60) = %5.2lf\n", y);
    y = atan(1.00) * 180.0 / M_PI;
    printf("atan(1) = %5.2lf\n", y);
    printf("\n");

    y = pow(2.0, 3.0);
    printf("pow(2,3) = %5.0lf\n", y);
    y = lg(y);
    printf("lg(8,2)  = %5.0lf\n", y);
    printf("\n");

    y = sqr(2.0);
    printf("sqr(2)   = %5.0lf\n", y);
    y = sqrt(y);
    printf("sqrt(4)  = %5.0lf\n", y);
    printf("\n");

    printf("%s\n", "Apertar ENTER para terminar.");
    getchar();
}

void method_18(void)
{
    char s1[] = "abc";
    char s2[10];
    strcpy(s2, "def");
    char *s3 = "ghi";

    printf("%s\n", "857295_Felipe_Silva_Barros_AED1");

    printf("\nAplicar funcoes\n");

    printf("s1 = [%s] (%d)\n", s1, strlen(s1));
    printf("s2 = [%s] (%d)\n", s2, strlen(s2));
    printf("s3 = [%s] (%d)\n", s3, strlen(s3));
    printf("\n");

    s3 = &s1[0];
    printf("s1 = [%s] (%d)\n", s3, strlen(s3));
    s3 = &s2[0];
    printf("s2 = [%s] (%d)\n", s3, strlen(s3));
    printf("\n");

    strcat(s2, s1);
    printf("s1 = [%s] (%d)\n", s1, strlen(s1));
    printf("s2 = [%s] (%d)\n", s2, strlen(s2));
    printf("\n");

    s3 = s1;
    printf("s1 = [%s] (%d) (%p)\n",
           s1, strlen(s1), &s1[0]);
    printf("s3 = [%s] (%d) (%p)\n",
           s3, strlen(s3), s3);
    printf("\n");

    s3 = calloc(strlen(s1) + 1, sizeof(char));
    strcpy(s3, s1);

    printf("s1 = [%s] (%d) (%p)\n",
           s1, strlen(s1), &s1[0]);
    printf("s3 = [%s] (%d) (%p)\n",
           s3, strlen(s3), s3);
    printf("\n");

    s3 = strdup(s1);
    printf("s1 = [%s] (%d) (%p)\n",
           s1, strlen(s1), &s1[0]);
    printf("s3 = [%s] (%d) (%p)\n",
           s3, strlen(s3), s3);
    printf("\n");

    if (strcmp(s1, s3) == 0)
        printf("%s igual a %s\n", s1, s3);
    if (strcmp(s1, s3) != 0)
        printf("%s igual a %s\n", s1, s3);
    if (strcmp(s1, s2) < 0)
        printf("%s antecede a %s\n", s1, s2);
    if (strcmp(s2, s1) > 0)
        printf("%s sucede a %s\n", s2, s1);
    printf("\n");

    for (int x = 0; x < strlen(s1); ++x)
        printf("%c ", s1[x]);
    printf("\n");

    for (int x = 0; x < strlen(s1); x++)
        printf("%c ", *(s1 + x));
    printf("\n");

    s3 = &s1[0];
    while (*s3)
    {
        printf("%c ", *s3);
        s3++;
    }
    printf("\n");

    for (int x = strlen(s1) - 1; x >= 0; --x)
        printf("%c ", s1[x]);
    printf("\n");
    printf("\n");

    printf("%s\n", "Apertar ENTER para terminar.");
    getchar();
}

void print_array(int n, int *v)
{
    for (int x = 0; x < n; x = x + 1)
    {
        printf("%d ", v[x]);
    }
    printf("\n");
}

void scan_array(int n, int *v)
{
    for (int x = 0; x < n; x = x + 1)
    {
        scanf("%d", &v[x]);
        getchar();
    }
    printf("\n");
}

void method_19(void)
{
    int a[] = {1, 2, 3};
    int b[3];

    b[0] = 4;
    b[1] = 5;
    b[2] = 6;

    int *c = malloc(3 * sizeof(int));

    if (c)
        for (int x = 0; x < 3; x = x + 1)
        {
            c[x] = (x + 1) * 10;
        }

    printf("%s\n", "857295_Felipe_Silva_Barros_AED1");

    printf("\nOperacoes com arranjos\n");
    printf("a:\n");
    print_array(3, a);
    printf("\n");

    printf("b:\n");
    print_array(3, b);
    printf("\n");

    printf("c:\n");
    print_array(3, c);
    printf("\n");

    printf("Entrar dados:\n");
    scan_array(3, c);
    printf("c:\n");
    printf("\nDados lidos (c):\n");
    print_array(3, c);
    printf("\n");

    printf("%s\n", "Apertar ENTER para terminar.");
    getchar();
}

void print_matrix(int m, int n, int v[][n])
{
    for (int x = 0; x < m; x = x + 1)
    {
        for (int y = 0; y < n; y = y + 1)
        {
            printf("%d ", v[x][y]);
        }
        printf("\n");
    }
}

void scan_matrix(int m, int n, int v[][n])
{
    for (int x = 0; x < m; x = x + 1)
    {
        for (int y = 0; y < n; y = y + 1)
        {
            scanf("%d", &v[x][y]);
            getchar();
        }
        printf("\n");
    }
    printf("\n");
}

void method_20(void)
{
    int a[][3] = {{1, 2, 3},
                  {4, 5, 6}};
    int b[2][3];

    b[0][0] = 6;
    b[0][1] = 5;
    b[0][2] = 4;
    b[1][0] = 3;
    b[1][1] = 2;
    b[1][2] = 1;

    printf("%s\n", "857295_Felipe_Silva_Barros_AED1");

    printf("\nOperacoes com matrizes\n");
    printf("a:\n");
    print_matrix(2, 3, a);
    printf("\n");

    printf("b:\n");
    print_matrix(2, 3, b);
    printf("\n");

    printf("Entrar dados:\n");
    scan_matrix(2, 3, a);
    printf("a:\n");
    print_matrix(2, 3, a);
    printf("\n");

    printf("%s\n", "Apertar ENTER para terminar.");
    getchar();
}

void method_21(void)
{
    srand(time(NULL));
    FILE *a = fopen("DATA.TXT", "w");
    int n = 5;
    int b = 0;

    printf("%s\n", "857295_Felipe_Silva_Barros_AED1");

    fprintf(a, "%d\n", n);
    for (int x = 0; x < n; x = x + 1)
    {
        fprintf(a, "%d\n", rand() % 100);
    }
    fclose(a);

    a = fopen("DATA.TXT", "r");
    fscanf(a, "%d", &n);
    printf("\nDados em arquivo:\n");
    for (int x = 0; x < n; x = x + 1)
    {
        fscanf(a, "%d", &b);
        printf("%d\n", b);
    }
    fclose(a);

    printf("\n");

    printf("%s\n", "Apertar ENTER para terminar.");
    getchar();
}

void method_22(void)
{
    FILE *a = fopen("DATA.TXT", "r");
    int n = 0;
    int *b = NULL;

    printf("%s\n", "857295_Felipe_Silva_Barros_AED1");

    a = fopen("DATA.TXT", "r");
    fscanf(a, "%d", &n);
    b = malloc(n * sizeof(int));
    for (int x = 0; x < n; x = x + 1)
    {
        fscanf(a, "%d", &b[x]);
    }
    fclose(a);

    printf("\nDados em arquivo:\n");
    for (int x = 0; x < n; x = x + 1)
    {
        printf("%2d\n", b[x]);
    }
    printf("\n");

    printf("%s\n", "Apertar ENTER para terminar.");
    getchar();
}

typedef struct
{
    int n;
    int *data;
} Array;

void method_23(void)
{
    FILE *a = fopen("DATA.TXT", "r");
    if (!a)
    {
        printf("Erro ao abrir o arquivo.\n");
        return;
    }
    Array b;

    printf("%s\n", "857295_Felipe_Silva_Barros_AED1");

    fscanf(a, "%d", &b.n);
    b.data = malloc(b.n * sizeof(int));
    if (!b.data)
    {
        printf("Erro de alocacao de memoria.\n");
        fclose(a);
        return;
    }
    for (int x = 0; x < b.n; x++)
    {
        fscanf(a, "%d", &b.data[x]);
    }
    fclose(a);

    printf("\nDados guardados:\n");
    for (int x = 0; x < b.n; x++)
    {
        printf("%2d\n", b.data[x]);
    }
    printf("\n");

    free(b.data);
    printf("%s\n", "Apertar ENTER para terminar.");
    getchar();
}

void method_24(void)
{
    FILE *a = fopen("DATA.TXT", "r");
    Array b;

    printf("%s\n", "857295_Felipe_Silva_Barros_AED1");

    a = fopen("DATA.TXT", "r");
    fscanf(a, "%d", &b.n);
    b.data = malloc(b.n * sizeof(int));
    for (int x = 0; x < b.n; x = x + 1)
    {
        fscanf(a, "%d", &b.data[x]);
    }
    fclose(a);

    printf("\nDados guardados:\n");
    for (int x = 0; x < b.n; x = x + 1)
    {
        printf("%2d\n", b.data[x]);
    }
    printf("\n");

    printf("%s\n", "Apertar ENTER para terminar.");
    getchar();
}

void method_25(void)
{
    FILE *a = fopen("DATA.TXT", "r");
    Array *b = NULL;

    printf("%s\n", "857295_Felipe_Silva_Barros_AED1");

    a = fopen("DATA.TXT", "r");
    b = malloc(1 * sizeof(Array));
    if (b != NULL)
    {
        fscanf(a, "%d", &(*b).n);
        (*b).data = malloc((*b).n * sizeof(int));
        for (int x = 0; x < (*b).n; x = x + 1)
        {
            fscanf(a, "%d", &(*b).data[x]);
        }

        printf("\nDados guardados:\n");
        for (int x = 0; x < (*b).n; x = x + 1)
        {
            printf("%2d\n", (*b).data[x]);
        }
    }
    fclose(a);
    printf("\n");

    printf("%s\n", "Apertar ENTER para terminar.");
    getchar();
}

void method_26(void)
{
    FILE *a = fopen("DATA.TXT", "r");
    Array *b = NULL;

    printf("%s\n", "857295_Felipe_Silva_Barros_AED1");

    a = fopen("DATA.TXT", "r");
    b = malloc(1 * sizeof(Array));
    if (b != NULL)
    {
        fscanf(a, "%d", &b->n);
        b->data = malloc(b->n * sizeof(int));
        for (int x = 0; x < b->n; x = x + 1)
        {
            fscanf(a, "%d", &b->data[x]);
        }

        printf("\nDados guardados:\n");
        for (int x = 0; x < b->n; x = x + 1)
        {
            printf("%2d\n", b->data[x]);
        }
    }
    fclose(a);
    printf("\n");

    printf("%s\n", "Apertar ENTER para terminar.");
    getchar();
}

void method_27(void)
{
    typedef struct s_matrix
    {
        int rows;
        int columns;
        int **data;
    } Matrix;

    Matrix *a = NULL;

    printf("%s\n", "857295_Felipe_Silva_Barros_AED1");

    a = malloc(1 * sizeof(Matrix));
    if (a == NULL)
    {
        printf("Erro = %d\n", errno);
        perror("Error");
    }
    else
    {
        a->rows = 2;
        a->columns = 3;
        a->data = malloc(a->rows * sizeof(int *));
        if (a->data != NULL)
        {
            for (int x = 0; x < 2; x = x + 1)
            {
                a->data[x] = malloc(a->columns * sizeof(int));
                if (a->data[x])
                {
                    printf("\nDados para a linha %d matriz:\n", x);
                    for (int y = 0; y < a->columns; y = y + 1)
                    {
                        scanf("%d", &a->data[x][y]);
                    }
                }
            }

            printf("\nDados guardados:\n");
            for (int x = 0; x < a->rows; x = x + 1)
            {
                for (int y = 0; y < a->columns; y = y + 1)
                {
                    printf("%2d\t", a->data[x][y]);
                }
                printf("\n");
            }
        }
    }
    printf("\n");

    printf("%s\n", "Apertar ENTER para terminar.");
    getchar();
}

enum Semana1
{
    Domingo1,
    Segunda1,
    Terca1,
    Quarta1,
    Quinta1,
    Sexta1,
    Sabado1
};

void method_28(void)
{
    char Semana_str[7][8];

    strcpy(Semana_str[Domingo1], "Domingo");
    strcpy(Semana_str[Segunda1], "Segunda");
    strcpy(Semana_str[Terca1], "Terca  ");
    strcpy(Semana_str[Quarta1], "Quarta ");
    strcpy(Semana_str[Quinta1], "Quinta ");
    strcpy(Semana_str[Sexta1], "Sexta  ");
    strcpy(Semana_str[Sabado1], "Sabado ");

    printf("%s\n", "857295_Felipe_Silva_Barros_AED1");

    printf("\nMostrar dias da semana:\n");
    for (enum Semana1 dia = Domingo1; dia <= Sabado1; dia = dia + 1)
    {
        printf("%d: %s\n", dia, Semana_str[dia]);
    }
    printf("\n");

    printf("%s\n", "Apertar ENTER para terminar.");
    getchar();
}

typedef enum Semana2
{
    Domingo2,
    Segunda2,
    Terca2,
    Quarta2,
    Quinta2,
    Sexta2,
    Sabado2
} Dias_da_Semana;

void method_29(void)
{
    char Semana_str[][8] = {"Domingo",
                            "Segunda",
                            "Terca  ",
                            "Quarta ",
                            "Quinta ",
                            "Sexta  ",
                            "Sabado "};

    printf("%s\n", "857295_Felipe_Silva_Barros_AED1");

    printf("\nMostrar dias da semana:\n");
    for (Dias_da_Semana dia = Domingo2; dia <= Sabado2; dia = dia + 1)
    {
        printf("%d: %s\n", dia, Semana_str[dia]);
    }
    printf("\n");

    printf("%s\n", "Apertar ENTER para terminar.");
    getchar();
}

/**
void method_30(int argc, char *argv[])
{
    printf("%s\n", "857295_Felipe_Silva_Barros_AED1");

    printf("\nQuantidade de argumentos: %d\n", argc);
    printf("\nArgumentos:\n");
    for (int x = 0; x < argc; x++)
    {
        printf("%d: %s\n", x, argv[x]);
    }
    printf("\n");

    printf("%s\n", "Apertar ENTER para terminar.");
    getchar();
}
*/

int main(void)
{
    int opcao = 0;
    printf("%s\n", "Execicio00 - Programa = v0.0");
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
        printf("\n%s", "11 - Method_11");
        printf("\n%s", "12 - Method_12");
        printf("\n%s", "13 - Method_13");
        printf("\n%s", "14 - Method_14");
        printf("\n%s", "15 - Method_15");
        printf("\n%s", "16 - Method_16");
        printf("\n%s", "17 - Method_17");
        printf("\n%s", "18 - Method_18");
        printf("\n%s", "19 - Method_19");
        printf("\n%s", "20 - Method_20");
        printf("\n%s", "21 - Method_21");
        printf("\n%s", "22 - Method_22");
        printf("\n%s", "23 - Method_23");
        printf("\n%s", "24 - Method_24");
        printf("\n%s", "25 - Method_25");
        printf("\n%s", "26 - Method_26");
        printf("\n%s", "27 - Method_27");
        printf("\n%s", "28 - Method_28");
        printf("\n%s", "29 - Method_29");
        printf("\n%s", "30 - Method_30");
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
        case 11:
            method_11();
            break;
        case 12:
            method_12();
            break;
        case 13:
            method_13();
            break;
        case 14:
            method_14();
            break;
        case 15:
            method_15();
            break;
        case 16:
            method_16();
            break;
        case 17:
            method_17();
            break;
        case 18:
            method_18();
            break;
        case 19:
            method_19();
            break;
        case 20:
            method_20();
            break;
        case 21:
            method_21();
            break;
        case 22:
            method_22();
            break;
        case 23:
            method_23();
            break;
        case 24:
            method_24();
            break;
        case 25:
            method_25();
            break;
        case 26:
            method_26();
            break;
        case 27:
            method_27();
            break;
        case 28:
            method_28();
            break;
        case 29:
            method_29();
            break;
        /**case 30:
            method_30();
            break;*/
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