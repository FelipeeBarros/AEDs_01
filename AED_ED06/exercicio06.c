/*
Exercicio06 - v0.0. - 06 / 04 / 2025
Author: Felipe Silva Barros
*/

#include <stdio.h>
#include <string.h>
#include <ctype.h>
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

void positivosTres(int atual, int proximoImpar, int quantidade, int limite)
{
    if (quantidade >= limite)
    {
        return;
    }
    printf("%d ", atual);
    positivosTres(atual + proximoImpar, proximoImpar + 2, quantidade + 1, limite);
}

double somaInversos(int valor, int atual)
{
    if (valor == 0)
        return 0;
    return 1.0 / atual + somaInversos(valor - 1, atual + 6);
}

void mostrarInvertido(char *str, int index)
{
    if (index < 0)
        return;
    printf("%c\n", str[index]);
    mostrarInvertido(str, index - 1);
}

int contarDigitosPares(char *str, int index)
{
    if (str[index] == '\0')
        return 0;
    if (isdigit(str[index]) && (str[index] - '0') % 2 == 0)
        return 1 + contarDigitosPares(str, index + 1);
    else
        return contarDigitosPares(str, index + 1);
}

int contarMaiusculasEntreC_P(char *str, int index)
{
    if (str[index] == '\0')
        return 0;
    if (str[index] >= 'D' && str[index] <= 'O')
        return 1 + contarMaiusculasEntreC_P(str, index + 1);
    else
        return contarMaiusculasEntreC_P(str, index + 1);
}

int fibonacci(int n)
{
    if (n == 0)
        return 0;
    if (n == 1)
        return 1;
    return fibonacci(n - 1) + fibonacci(n - 2);
}

int somaFibonacciPares(int quantidade, int n, int soma)
{
    if (quantidade == 0)
        return soma;
    int termo = fibonacci(n);
    if (termo % 2 == 0)
        return somaFibonacciPares(quantidade - 1, n + 1, soma + termo);
    else
        return somaFibonacciPares(quantidade, n + 1, soma);
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

    positivosTres(3, 1, 0, n);

    printf("\n%s\n", "\nAperte ENTER para continuar");
    getchar();
}

void exercicio0616(void)
{
    int n = 0;

    printf("%s\n", "Digite a quantidade de termos: ");
    scanf("%d", &n);
    getchar();

    printf("Soma dos inversos: %.6lf\n", somaInversos(n, 3));

    printf("\n%s\n", "\nAperte ENTER para continuar");
    getchar();
}

void exercicio0617(void)
{
    char sequencia[100];
    printf("Digite uma cadeia de caracteres: ");
    scanf("%s", sequencia);
    getchar();

    mostrarInvertido(sequencia, strlen(sequencia) - 1);

    printf("\n%s\n", "\nAperte ENTER para continuar");
    getchar();
}

void exercicio0618(void)
{
    char sequencia[100];
    printf("Digite uma cadeia de caracteres: ");
    scanf("%s", sequencia);
    getchar();

    printf("Quantidade de digitos pares: %d\n", contarDigitosPares(sequencia, 0));

    printf("\n%s\n", "\nAperte ENTER para continuar");
    getchar();
}

void exercicio0619(void)
{
    char sequencia[100];
    printf("Digite uma cadeia de caracteres: ");
    scanf("%s", sequencia);
    getchar();

    printf("Quantidade de maiusculas entre 'C' e 'P': %d\n", contarMaiusculasEntreC_P(sequencia, 0));

    printf("\n%s\n", "\nAperte ENTER para continuar");
    getchar();
}

void exercicio0620(void)
{
    int quantidade = 0;
    printf("Digite a quantidade de termos pares da Fibonacci: ");
    scanf("%d", &quantidade);
    getchar();

    printf("Soma dos pares: %d\n", somaFibonacciPares(quantidade, 0, 0));

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