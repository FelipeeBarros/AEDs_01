/*
Exercicio06 - v0.0. - 06 / 04 / 2025
Author: Felipe Silva Barros
*/

#include <stdio.h>
#define MAX 100

void multiplosTres(int atual, int quantidade, int limite)
{
    if (quantidade >= limite)
    {
        return;
    }
    printf("%d ", atual);
    multiplosTres(atual + 3, quantidade + 1, limite);
}

void decrescenteTres(int atual, int quantidade, int limite)
{
    if (quantidade >= limite)
    {
        return;
    }
    printf("%d ", atual);
    decrescenteTres(atual - 3, quantidade + 1, limite);
}

void denomionadorTres(int inicial, int atual, int quantidade, int limite)
{
    if (quantidade >= limite)
    {
        return;
    }
    if (inicial == 1)
    {
        printf("1/%d ", inicial);
    }
    printf("1/%d ", atual);
    denomionadorTres(inicial + 1, atual + 3, quantidade + 1, limite);
}

void denominadorDecrescente(int atual, int quantidade, int limite)
{
    if (quantidade >= limite)
    {
        atual = atual + 1;
        printf("1/%d ", atual);
        return;
    }
    printf("1/%d ", atual);
    denominadorDecrescente(atual - 3, quantidade + 1, limite);
}

void exercicio0611(void)
{
    int n = 0;

    printf("%s\n", "Digite a quantidade de termos: ");
    scanf("%d", &n);
    getchar();

    multiplosTres(3, 0, n);

    printf("\n%s\n", "\nAperte ENTER para continuar");
    getchar();
}

void exercicio0612(void)
{
    int n = 0;
    int atual = 0;

    printf("%s\n", "Digite a quantidade de termos: ");
    scanf("%d", &n);
    getchar();

    atual = n * 3;

    decrescenteTres(atual, 0, n);

    printf("\n%s\n", "\nAperte ENTER para continuar");
    getchar();
}

void exercicio0613(void)
{
    int n = 0;

    printf("%s\n", "Digite a quantidade de termos: ");
    scanf("%d", &n);
    getchar();

    denomionadorTres(1, 3, 1, n);

    printf("\n%s\n", "\nAperte ENTER para continuar");
    getchar();
}

void exercicio0614(void)
{
    int n = 0;
    int atual = 0;

    printf("%s\n", "Digite a quantidade de termos: ");
    scanf("%d", &n);
    getchar();

    atual = (n - 1) * 3;

    denominadorDecrescente(atual, 1, n);

    printf("\n%s\n", "\nAperte ENTER para continuar");
    getchar();
}

void exercicio0615(void)
{
    int n = 0;

    printf("%s\n", "Digite a quantidade de termos: ");
    scanf("%d", &n);
    getchar();

    printf("\n%s\n", "\nAperte ENTER para continuar");
    getchar();
}

void exercicio0616(void)
{
    int n = 0;
    int valores[MAX];

    printf("%s\n", "Digite a quantidade de termos: ");
    scanf("%d", &n);
    getchar();

    for (int i = 0; i < n; i++)
    {
        printf("%d ", valores[i]);
    }

    printf("\n%s\n", "\nAperte ENTER para continuar");
    getchar();
}

void exercicio0617(void)
{
    int n = 0;
    int i = 0;
    int valores[MAX];

    printf("%s\n", "Digite a quantidade de termos: ");
    scanf("%d", &n);
    getchar();

    for (i = 0; i < n; i++)
    {
        printf("1/%d ", valores[i]);
    }
    printf("\n%s\n", "\nAperte ENTER para continuar");
    getchar();
}

void exercicio0618(void)
{
    int n = 0;
    int i = 0;
    int valores[MAX];

    printf("%s\n", "Digite a quantidade de termos: ");
    scanf("%d", &n);
    getchar();

    for (i = 0; i < n; i++)
    {
        printf("%d ", valores[i]);
    }

    printf("\n%s\n", "\nAperte ENTER para continuar");
    getchar();
}

void exercicio0619(void)
{
    int n = 0;
    int i = 0;
    int valores[MAX];

    printf("%s\n", "Digite a quantidade de termos: ");
    scanf("%d", &n);
    getchar();

    for (i = 0; i < n; i++)
    {
        printf("%d ", valores[i]);
    }

    printf("\n%s\n", "\nAperte ENTER para continuar");
    getchar();
}

void exercicio0620(void)
{
    int n = 0;
    int i = 0;
    int valores[MAX];

    printf("%s\n", "Digite a quantidade de termos: ");
    scanf("%d", &n);
    getchar();

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
    printf("%s\n", "Execicio06 - Programa = v0.0");
    printf("%s\n", "Autor: Felipe Silva Barros");
    printf("\n");

    do
    {
        printf("\n%s\n", "Opcoes:");
        printf("\n%s", "0 - Terminar");
        printf("\n%s", "1 - Exercicio0611");
        printf("\n%s", "2 - Exercicio0612");
        printf("\n%s", "3 - Exercicio0613");
        printf("\n%s", "4 - Exercicio0614");
        printf("\n%s", "5 - Exercicio0615");
        printf("\n%s", "6 - Exercicio0616");
        printf("\n%s", "7 - Exercicio0617");
        printf("\n%s", "8 - Exercicio0618");
        printf("\n%s", "9 - Exercicio0619");
        printf("\n%s", "10 - Exercicio0620");
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
            exercicio0611();
            break;
        case 2:
            exercicio0612();
            break;
        case 3:
            exercicio0613();
            break;
        case 4:
            exercicio0614();
            break;
        case 5:
            exercicio0615();
            break;
        case 6:
            exercicio0616();
            break;
        case 7:
            exercicio0617();
            break;
        case 8:
            exercicio0618();
            break;
        case 9:
            exercicio0619();
            break;
        case 10:
            exercicio0620();
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