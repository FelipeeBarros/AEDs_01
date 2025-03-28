/*
Exercicio02 - v0.0. - 24 / 02 / 2025
Author: Felipe Silva Barros
*/

#include <stdio.h>

void exercicio0211(void)
{
    int num = 0;

    printf("%s", "Digite um numero: ");
    scanf("%d", &num);
    getchar();

    if (num % 2 == 0)
    {
        printf("%s\n", "O numero eh PAR\n");
    }
    else
    {
        printf("%s\n", "O numero eh IMPAR\n");
    }

    printf("%s\n", "Aperte ENTER para continuar");
    getchar();
}

void exercicio0212(void)
{
    int num = 0;

    printf("%s", "Digite um numero: ");
    scanf("%d", &num);
    getchar();

    if (num % 2 == 0 && num > 25)
    {
        {
            printf("%s\n", "O numero eh PAR, MAIOR que 25\n");
        }
    }

    if (num % 2 == 0 && num < -25)
    {
        {
            printf("%s\n", "O numero eh PAR, MENOR que -25\n");
        }
    }

    if (num % 2 != 0 && num > 25)
    {
        {
            printf("%s\n", "O numero eh IMPAR, MAIOR que 25\n");
        }
    }

    if (num % 2 != 0 && num < -25)
    {
        {
            printf("%s\n", "O numero eh IMPAR, MENOR que -25\n");
        }
    }

    printf("%s\n", "Aperte ENTER para continuar");
    getchar();
}

void exercicio0213(void)
{
    int num = 0;

    printf("%s", "Digite um numero: ");
    scanf("%d", &num);
    getchar();

    if (num > 20 && num < 55)
    {
        printf("%s\n", "O numero digitado PERTENCE ao intervalo aberto (20:55)\n");
    }
    else
    {
        printf("%s\n", "O numero digitado NAO PERTENCE ao intervalo aberto (20:55)\n");
    }

    printf("%s\n", "Aperte ENTER para continuar.");
    getchar();
}

void exercicio0214(void)
{
    int num = 0;

    printf("%s", "Digite um numero: ");
    scanf("%d", &num);
    getchar();

    if (num >= 20 && num <= 55)
    {
        printf("%s\n", "O numero digitado PERTENCE ao intervalo fechado [20:55]\n");
    }
    else
    {
        printf("%s\n", "O numero digitado NAO PERTENCE ao intervalo fechado [20:55]\n");
    }

    printf("%s\n", "Aperte ENTER para continuar.");
    getchar();
}

void exercicio0215(void)
{
    int num = 0;
    int primeiro = 0;
    int segundo = 0;

    printf("%s", "Digite um numero: ");
    scanf("%d", &num);
    getchar();

    primeiro = (num >= 10 && num <= 30);
    segundo = (num > 20 && num < 40);

    if (primeiro && segundo)
    {
        printf("%s\n", "O numero digitado PERTENCE aos intervalos [10:30] e (20:40)\n");
    }
    else if (primeiro || segundo)
    {
        printf("%s\n", "O numero digitado PERTENCE a UM dos intervalos\n");
    }
    else
    {
        printf("%s\n", "O numero digitado NAO PERTENCE aos intervalos\n");
    }

    printf("%s\n", "Aperte ENTER para continuar.");
    getchar();
}

void exercicio0216(void)
{
    int num1 = 0;
    int num2 = 0;

    printf("%s", "Digite o primeiro numero: ");
    scanf("%d", &num1);
    getchar();
    printf("%s", "Digite o segundo numero: ");
    scanf("%d", &num2);
    getchar();

    if (num1 % 2 == 0 && num2 % 2 == 0)
    {
        printf("%s\n", "Os numeros sao PARES\n");
    }
    else if (num1 % 2 == 1 && num2 % 2 == 1)
    {
        printf("%s\n", "Os numeros sao IMPARES\n");
    }
    else
    {
        printf("%s\n", "Um eh IMPAR e outro eh PAR\n");
    }

    printf("%s\n", "Aperte ENTER para continuar");
    getchar();
}

void exercicio0217(void)
{
    int num1 = 0;
    int num2 = 0;

    printf("%s", "Digite o primeiro numero: ");
    scanf("%d", &num1);
    getchar();
    printf("%s", "Digite o segundo numero: ");
    scanf("%d", &num2);
    getchar();

    if (num1 > 0 && num2 > 0 && num1 % 2 == 0 && num2 % 2 == 0)
    {
        printf("%s\n", "Os numeros sao PARES POSITIVOS\n");
    }
    else if (num1 > 0 && num2 > 0 && num1 % 2 == 1 && num2 % 2 == 1)
    {
        printf("%s\n", "Os numeros sao IMPARES POSITIVOS\n");
    }
    else if (num1 < 0 && num2 < 0 && num1 % 2 == 0 && num2 % 2 == 0)
    {
        printf("%s\n", "Os numeros sao PARES NEGATIVOS\n");
    }
    else if (num1 < 0 && num2 < 0 && num1 % 2 != 0 && num2 % 2 != 0)
    {
        printf("%s\n", "Os numeros sao IMPARES NEGATIVOS\n");
    }
    else
    {
        printf("%s\n", "Um eh IMPAR e outro eh PAR\n");
    }

    printf("%s\n", "Aperte ENTER para continuar");
    getchar();
}

void exercicio0218(void)
{
    double num1 = 0.0;
    double num2 = 0.0;
    double quarto = 0.0;

    printf("%s", "Digite o primeiro numero: ");
    scanf("%lf", &num1);
    getchar();
    printf("%s", "Digite o segundo numero: ");
    scanf("%lf", &num2);
    getchar();

    quarto = (num2 / 4);

    if (num1 < quarto)
    {
        printf("%s\n", "O primeiro numero eh MENOR que um quarto do segundo");
        printf("%.2lf, %.2lf\n", num1, quarto);
    }
    else if (num1 == quarto)
    {
        printf("%s\n", "O primeiro numero eh IGUAL a um quarto do segundo");
        printf("%.2lf, %.2lf\n", num1, quarto);
    }
    else if (num1 > quarto)
    {
        printf("%s\n", "O primeiro numero eh MAIOR que um quarto do segundo");
        printf("%.2lf, %.2lf\n", num1, quarto);
    }

    printf("\n%s\n", "Aperte ENTER para continuar");
    getchar();
}

void exercicio0219(void)
{
    double num1 = 0.0;
    double num2 = 0.0;
    double num3 = 0.0;

    printf("%s", "Digite o primeiro numero: ");
    scanf("%lf", &num1);
    getchar();
    printf("%s", "Digite o segundo numero: ");
    scanf("%lf", &num2);
    getchar();
    printf("%s", "Digite o terceiro numero: ");
    scanf("%lf", &num3);
    getchar();

    if (num1 != num3)
    {
        if (num1 < num2 && num2 < num3)
        {
            printf("\n%s", "O segundo numero ESTA ENTRE o primeiro e o terceiro\n");
        }
        else
        {
            printf("\n%s", "O segundo numero NAO ESTA ENTRE o primeiro e o terceiro.\n");
        }
    }
    else
    {
        printf("\n%s", "O primeiro e o terceiro numero sao iguais\n");
    }

    printf("\n%s\n", "Aperte ENTER para continuar.");
    getchar();
}

void exercicio0220(void)
{
    double num1 = 0.0;
    double num2 = 0.0;
    double num3 = 0.0;

    printf("%s", "Digite o primeiro numero: ");
    scanf("%lf", &num1);
    getchar();
    printf("%s", "Digite o segundo numero: ");
    scanf("%lf", &num2);
    getchar();
    printf("%s", "Digite o terceiro numero: ");
    scanf("%lf", &num3);
    getchar();

    if (num1 != num2 && num2 != num3)
    {
        if ((num2 < num1 && num2 < num3) || (num2 > num1 && num2 > num3))
        {
            printf("\n%s", "O segundo numero NAO ESTA ENTRE o primeiro e o terceiro.\n");
        }
        else
        {
            printf("\n%s", "O segundo numero ESTA ENTRE o primeiro e o terceiro.\n");
        }
    }
    else
    {
        printf("\n%s", "Existem numero iguais!\n");
    }

    printf("\n%s\n", "Aperte ENTER para continuar.");
    getchar();
}

int main(void)
{
    int opcao = 0;
    printf("%s\n", "Execicio02 - Programa = v0.0");
    printf("%s\n", "Autor: Felipe Silva Barros");
    printf("\n");

    do
    {
        printf("\n%s\n", "Opcoes:");
        printf("\n%s", "0 - Terminar");
        printf("\n%s", "1 - Exercicio0211");
        printf("\n%s", "2 - Exercicio0212");
        printf("\n%s", "3 - Exercicio0213");
        printf("\n%s", "4 - Exercicio0214");
        printf("\n%s", "5 - Exercicio0215");
        printf("\n%s", "6 - Exercicio0216");
        printf("\n%s", "7 - Exercicio0217");
        printf("\n%s", "8 - Exercicio0218");
        printf("\n%s", "9 - Exercicio0219");
        printf("\n%s", "10 - Exercicio0220");
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
            exercicio0211();
            break;
        case 2:
            exercicio0212();
            break;
        case 3:
            exercicio0213();
            break;
        case 4:
            exercicio0214();
            break;
        case 5:
            exercicio0215();
            break;
        case 6:
            exercicio0216();
            break;
        case 7:
            exercicio0217();
            break;
        case 8:
            exercicio0218();
            break;
        case 9:
            exercicio0219();
            break;
        case 10:
            exercicio0220();
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