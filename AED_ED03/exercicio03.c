/*
Exercicio03 - v0.0. - 19 / 02 / 2025
Author: Felipe Silva Barros
*/

#include <stdio.h>
#include <string.h>

void exercicio0311(void)
{
    char palavra[100];
    printf("%s\n", "Digite uma palavra: ");
    scanf("%s", palavra);
    getchar();

    for (int i = 0; palavra[i] != '\0'; i++)
    {
        if (palavra[i] >= 'A' && palavra[i] <= 'Z' && palavra[i] > 'K')
        {
            printf("%c ", palavra[i]);
        }
    }

    printf("\n%s\n", "\nAperte ENTER para continuar");
    getchar();
}

void exercicio0312(void)
{
    char palavra[100];
    printf("%s\n", "Digite uma palavra: ");
    scanf("%s", palavra);
    getchar();

    for (int i = 0; palavra[i] != '\0'; i++)
    {
        if (palavra[i] >= 'a' && palavra[i] <= 'z' && palavra[i] < 'k')
        {
            printf("%c ", palavra[i]);
        }
    }

    printf("\n%s\n", "\nAperte ENTER para continuar");
    getchar();
}

void exercicio0313(void)
{
    char palavra[100];
    int contagem = 0;
    printf("%s\n", "Digite uma palavra: ");
    scanf("%s", palavra);
    getchar();

    int tamanho = strlen(palavra);

    for (int i = tamanho - 1; i != 0; i--)
    {
        if (palavra[i] >= 'a' && palavra[i] <= 'z' && palavra[i] > 'k')
        {
            printf("%c ", palavra[i]);
            contagem = contagem + 1;
        }
    }

    printf("\n%d", contagem);

    printf("\n%s\n", "\nAperte ENTER para continuar");
    getchar();
}

void exercicio0314(void)
{
    char palavra[100];
    int contagem = 0;
    printf("%s\n", "Digite uma palavra: ");
    scanf("%s", palavra);
    getchar();

    for (int i = 0; palavra[i] != '\0'; i++)
    {
        if (palavra[i] >= 'a' && palavra[i] <= 'z' || palavra[i] >= 'A' && palavra[i] <= 'Z')
        {
            contagem = contagem + 1;
        }
    }

    printf("\n%d", contagem);

    printf("\n%s\n", "\nAperte ENTER para continuar");
    getchar();
}

void exercicio0315(void)
{
    char palavra[100];
    int contagem = 0;
    printf("%s\n", "Digite uma palavra: ");
    scanf("%s", palavra);
    getchar();

    int tamanho = strlen(palavra);

    for (int i = tamanho - 1; i != 0; i--)
    {
        if (palavra[i] >= '0' && palavra[i] <= '9')
        {
            if ((palavra[i] - '0') % 2 == 0)
            {
                printf("\n%c", palavra[i]);
                contagem = contagem + 1;
            }
        }
    }

    printf("\n%d", contagem);

    printf("\n%s\n", "\nAperte ENTER para continuar");
    getchar();
}

void exercicio0316(void)
{
    char palavra[100];
    int contagem = 0;
    printf("%s\n", "Digite uma palavra: ");
    scanf("%s", palavra);
    getchar();

    for (int i = 0; palavra[i] != '\0'; i++)
    {
        char c = palavra[i];
        if (!((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z')) &&
            !(c >= '1' && c <= '9' && (c - '0') % 2 != 0))
        {
            printf("\n%c", c);
            contagem = contagem + 1;
        }
    }

    printf("\n%d", contagem);

    printf("\n%s\n", "\nAperte ENTER para continuar");
    getchar();
}

void exercicio0317(void)
{
    int a = 0;
    int b = 0;
    int n = 0;
    int x = 0;
    int contagem = 0;

    printf("%s\n", "Digite o limite minimo: ");
    scanf("%d", &a);
    printf("%s\n", "Digite o limite maximo: ");
    scanf("%d", &b);
    printf("%s\n", "Digite a quantidade de valores a serem testados: ");
    scanf("%d", &n);

    printf("%s\n", "Digite os valores: ");

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &x);
        getchar();
        if (x >= a && x <= b && x % 3 == 0)
        {
            printf("Multiplo de tres (%d)\n", x);
            contagem = contagem + 1;
        }
    }

    printf("\nContagem: %d", contagem);

    printf("\n%s\n", "\nAperte ENTER para continuar");
    getchar();
}

void exercicio0318(void)
{
    int a = 0;
    int b = 0;
    int n = 0;
    int x = 0;
    int contagem = 0;

    printf("%s\n", "Digite o limite minimo: ");
    scanf("%d", &a);
    printf("%s\n", "Digite o limite maximo: ");
    scanf("%d", &b);
    printf("%s\n", "Digite a quantidade de valores a serem testados: ");
    scanf("%d", &n);

    printf("%s\n", "Digite os valores: ");

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &x);
        getchar();
        if (x >= a && x <= b && x % 4 == 0 && !(x % 3 == 0))
        {
            printf("Multiplo de quatro, nao multiplo de tres (%d)\n", x);
            contagem = contagem + 1;
        }
    }

    printf("\nContagem: %d", contagem);

    printf("\n%s\n", "\nAperte ENTER para continuar");
    getchar();
}

void exercicio0319(void)
{
    float a = 0.0;
    float b = 0.0;
    float x = 0.0;
    int n = 0;
    int contagem = 0;

    do
    {
        printf("%s\n", "Digite o limite minimo: ");
        scanf("%f", &a);
        printf("%s\n", "Digite o limite maximo: ");
        scanf("%f", &b);
    } while (a >= b);

    printf("%s\n", "Digite a quantidade de valores a serem testados: ");
    scanf("%d", &n);

    printf("Valores dentro do intervalo com parte inteira par e menor que 5:\n");

    for (int i = 0; i < n; i++)
    {
        scanf("%f", &x);
        getchar();
        int parte_inteira = (int)x;
        if (x > a && x < b)
        {
            if (parte_inteira % 2 == 0 && parte_inteira < 5)
            {
                printf("Pertencentes aos intervalos, pares < 5 (%.2f)\n", x);
                contagem++;
            }
        }
    }

    printf("\nContagem: %d", contagem);

    printf("\n%s\n", "\nAperte ENTER para continuar");
    getchar();
}

void exercicio0320(void)
{
    float a = 0.0;
    float b = 0.0;
    float x = 0.0;
    int n = 0;
    int contagem = 0;

    do
    {
        printf("Digite dois valores reais (0 < a < b < 1): \n");
        scanf("%f %f", &a, &b);
    } while (a <= 0 || b >= 1 || a >= b);

    printf("%s\n", "Digite a quantidade de valores a serem testados: ");
    scanf("%d", &n);

    printf("Valores com parte fracionaria dentro do intervalo (%.2f, %.2f):\n", a, b);

    for (int i = 0; i < n; i++)
    {
        scanf("%f", &x);
        getchar();
        int parte_inteira = (int)x;                  
        float parte_fracionaria = x - parte_inteira; 

        if (parte_fracionaria > a && parte_fracionaria < b)
        {
            printf("Parte fracionaria dentro dos intervalos estabelecidos (%.2f)\n", x);
            contagem++;
        }
    }

    printf("\nContagem: %d", contagem);

    printf("\n%s\n", "\nAperte ENTER para continuar");
    getchar();
}

int main(void)
{
    int opcao = 0;
    printf("%s\n", "Execicio03 - Programa = v0.0");
    printf("%s\n", "Autor: Felipe Silva Barros");
    printf("\n");

    do
    {
        printf("\n%s\n", "Opcoes:");
        printf("\n%s", "0 - Terminar");
        printf("\n%s", "1 - Exercicio0311");
        printf("\n%s", "2 - Exercicio0312");
        printf("\n%s", "3 - Exercicio0313");
        printf("\n%s", "4 - Exercicio0314");
        printf("\n%s", "5 - Exercicio0315");
        printf("\n%s", "6 - Exercicio0316");
        printf("\n%s", "7 - Exercicio0317");
        printf("\n%s", "8 - Exercicio0318");
        printf("\n%s", "9 - Exercicio0319");
        printf("\n%s", "10 - Exercicio0320");
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
            exercicio0311();
            break;
        case 2:
            exercicio0312();
            break;
        case 3:
            exercicio0313();
            break;
        case 4:
            exercicio0314();
            break;
        case 5:
            exercicio0315();
            break;
        case 6:
            exercicio0316();
            break;
        case 7:
            exercicio0317();
            break;
        case 8:
            exercicio0318();
            break;
        case 9:
            exercicio0319();
            break;
        case 10:
            exercicio0320();
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