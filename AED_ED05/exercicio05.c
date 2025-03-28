/*
Exercicio05 - v0.0. - 24 / 02 / 2025
Author: Felipe Silva Barros
*/

#include <stdio.h>
#include <math.h>
#define MAX 100

void multiplosTres(int x)
{
    int i = 1;
    int multiplo = 0;

    while (i <= x)
    {
        multiplo = (3 * i);
        printf("%d ", multiplo);
        i = i + 1;
    }
}

void multiplosTresCinco(int x)
{
    int i = 1;
    int multiplo = 0;

    while (i <= x)
    {
        multiplo = (15 * i);
        printf("%d ", multiplo);
        i = i + 1;
    }
}

void potenciaQuatro(int x)
{
    int potencia = 1;

    for (int i = 0; i < x; i++)
    {
        potencia *= 4;
    }

    for (int i = 0; i < x; i++)
    {
        printf("%d ", potencia);
        potencia /= 4;
    }
}

void denominadorTres(int x)
{
    int i = 1;
    int multiplo = 0;

    while (i <= x)
    {
        multiplo = (3 * i);
        printf("1/%d ", multiplo);
        i = i + 1;
    }
}

void denominadorPow(int x)
{
    int i = 1;
    int multiplo = 0;

    printf("%s", "1 ");

    while (i <= (x - 1))
    {
        multiplo = (i * 2);
        printf("1/x^%d ", multiplo);
        i = i + 1;
    }
}

void tresNaoQuatro(int x, int valores[MAX])
{
    int i = 0;
    int soma = 3;

    while (i < x)
    {
        if (soma % 3 == 0 && soma % 4 != 0)
        {
            valores[i] = soma;
            i = i + 1;
        }
        soma = soma + 1;
    }
}

void denominadorQuatro(int x, int valores[MAX])
{
    int i = 0;
    int denominador = 4;

    while (i < x)
    {
        if (denominador % 4 == 0 && denominador % 5 != 0)
        {
            valores[i] = denominador;
            i = i + 1;
        }
        denominador = denominador + 4;
    }
}

void somaNaturais(int x, int valores[MAX])
{
    int i = 0;
    int inicial = 5;
    int soma = 1;

    while (i < x)
    {
        valores[i] = inicial;
        inicial = inicial + soma;
        soma = soma + 1;
        i = i + 1;
    }
}

void quadradosNaturais(int x, int valores[MAX])
{
    int i = 0;
    int y = 0;
    int quadrado = 0;

    y = 5;

    while (i < x)
    {
        quadrado = y * y;
        valores[i] = quadrado;
        i = i + 1;
        y = y + 1;
    }
}

void denominadorDecrescente(int x, int valores[MAX])
{
    int i = 1;
    int soma = 3;
    int valor = 0;
    int posicao = 1;

    while (i <= x)
    {
        valores[posicao] = soma;
        valor = valor + 1;
        soma = soma + valor;
        posicao = posicao + 1;
        i = i + 1;
    }
}

void exercicio0511(void)
{
    int n = 0;

    printf("%s\n", "Digite a quantidade de termos: ");
    scanf("%d", &n);
    getchar();

    multiplosTres(n);

    printf("\n%s\n", "\nAperte ENTER para continuar");
    getchar();
}

void exercicio0512(void)
{
    int n = 0;

    printf("%s\n", "Digite a quantidade de termos: ");
    scanf("%d", &n);
    getchar();

    multiplosTresCinco(n);

    printf("\n%s\n", "\nAperte ENTER para continuar");
    getchar();
}

void exercicio0513(void)
{
    int n = 0;

    printf("%s\n", "Digite a quantidade de termos: ");
    scanf("%d", &n);
    getchar();

    potenciaQuatro(n);

    printf("\n%s\n", "\nAperte ENTER para continuar");
    getchar();
}

void exercicio0514(void)
{
    int n = 0;

    printf("%s\n", "Digite a quantidade de termos: ");
    scanf("%d", &n);
    getchar();

    denominadorTres(n);

    printf("\n%s\n", "\nAperte ENTER para continuar");
    getchar();
}

void exercicio0515(void)
{
    int n = 0;

    printf("%s\n", "Digite a quantidade de termos: ");
    scanf("%d", &n);
    getchar();

    denominadorPow(n);

    printf("\n%s\n", "\nAperte ENTER para continuar");
    getchar();
}

void exercicio0516(void)
{
    int n = 0;
    int valores[MAX];

    printf("%s\n", "Digite a quantidade de termos: ");
    scanf("%d", &n);
    getchar();

    tresNaoQuatro(n, valores);

    for (int i = 0; i < n; i++)
    {
        printf("%d ", valores[i]);
    }

    printf("\n%s\n", "\nAperte ENTER para continuar");
    getchar();
}

void exercicio0517(void)
{
    int n = 0;
    int i = 0;
    int valores[MAX];

    printf("%s\n", "Digite a quantidade de termos: ");
    scanf("%d", &n);
    getchar();

    denominadorQuatro(n, valores);

    for (i = 0; i < n; i++)
    {
        printf("1/%d ", valores[i]);
    }
    printf("\n%s\n", "\nAperte ENTER para continuar");
    getchar();
}

void exercicio0518(void)
{
    int n = 0;
    int i = 0;
    int valores[MAX];

    printf("%s\n", "Digite a quantidade de termos: ");
    scanf("%d", &n);
    getchar();

    somaNaturais(n, valores);

    for (i = 0; i < n; i++)
    {
        printf("%d ", valores[i]);
    }

    printf("\n%s\n", "\nAperte ENTER para continuar");
    getchar();
}

void exercicio0519(void)
{
    int n = 0;
    int i = 0;
    int valores[MAX];

    printf("%s\n", "Digite a quantidade de termos: ");
    scanf("%d", &n);
    getchar();

    quadradosNaturais(n, valores);

    for (i = 0; i < n; i++)
    {
        printf("%d ", valores[i]);
    }

    printf("\n%s\n", "\nAperte ENTER para continuar");
    getchar();
}

void exercicio0520(void)
{
    int n = 0;
    int i = 0;
    int valores[MAX];

    printf("%s\n", "Digite a quantidade de termos: ");
    scanf("%d", &n);
    getchar();

    denominadorDecrescente(n, valores);

    for (i = n; i > 0; i--)
    {
        printf("1/%d ", valores[i]);
    }

    printf("\n%s\n", "\nAperte ENTER para continuar");
    getchar();
}

int main(void)
{
    int opcao = 0;
    printf("%s\n", "Execicio05 - Programa = v0.0");
    printf("%s\n", "Autor: Felipe Silva Barros");
    printf("\n");

    do
    {
        printf("\n%s\n", "Opcoes:");
        printf("\n%s", "0 - Terminar");
        printf("\n%s", "1 - Exercicio0511");
        printf("\n%s", "2 - Exercicio0512");
        printf("\n%s", "3 - Exercicio0513");
        printf("\n%s", "4 - Exercicio0514");
        printf("\n%s", "5 - Exercicio0515");
        printf("\n%s", "6 - Exercicio0516");
        printf("\n%s", "7 - Exercicio0517");
        printf("\n%s", "8 - Exercicio0518");
        printf("\n%s", "9 - Exercicio0519");
        printf("\n%s", "10 - Exercicio0520");
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
            exercicio0511();
            break;
        case 2:
            exercicio0512();
            break;
        case 3:
            exercicio0513();
            break;
        case 4:
            exercicio0514();
            break;
        case 5:
            exercicio0515();
            break;
        case 6:
            exercicio0516();
            break;
        case 7:
            exercicio0517();
            break;
        case 8:
            exercicio0518();
            break;
        case 9:
            exercicio0519();
            break;
        case 10:
            exercicio0520();
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