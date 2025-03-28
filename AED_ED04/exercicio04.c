/*
Exercicio04 - v0.0. - 23 / 02 / 2025
Author: Felipe Silva Barros
*/

#include <stdio.h>
#include <string.h>
#include <ctype.h>

int contarLetrasMinusculas1(char sequencia[])
{
    int contador = 0;
    for (int i = 0; sequencia[i] != '\0'; i++)
    {
        if (sequencia[i] > 'c' && sequencia[i] < 'p' && islower(sequencia[i]))
        {
            contador++;
        }
    }
    return contador;
}

int contarLetrasMinusculas2(char *str)
{
    int count = 0;
    while (*str)
    {
        if (*str > 'c' && *str < 'p' && islower(*str))
        {
            count++;
        }
        str++;
    }
    return count;
}

void separarLetrasMinusculas(char *str, char *resultado)
{
    int j = 0;
    while (*str)
    {
        if (*str > 'c' && *str < 'p' && islower(*str))
        {
            resultado[j++] = *str;
        }
        str++;
    }
    resultado[j] = '\0';
}

int contarLetras(char *str)
{
    int count = 0;
    while (*str)
    {
        if ((*str > 'c' && *str < 'p') || (*str > 'C' && *str < 'P'))
        {
            count++;
        }
        str++;
    }
    return count;
}

void separarLetras(char *str, char *resultado)
{
    int j = 0;
    while (*str)
    {
        if ((*str > 'c' && *str < 'p') || (*str > 'C' && *str < 'P'))
        {
            resultado[j++] = *str;
        }
        str++;
    }
    resultado[j] = '\0';
}

int contarDigitosPares(char *str)
{
    int count = 0;
    while (*str)
    {
        if (isdigit(*str) && ((*str - '0') % 2 == 0))
        {
            count++;
        }
        str++;
    }
    return count;
}

void separarNaoAlfanumericos(char *str, char *resultado)
{
    int j = 0;
    while (*str)
    {
        if (!isalnum(*str))
        {
            resultado[j++] = *str;
        }
        str++;
    }
    resultado[j] = '\0';
}

void separarAlfanumericos(char *str, char *resultado)
{
    int j = 0;
    while (*str)
    {
        if (isalnum(*str))
        {
            resultado[j++] = *str;
        }
        str++;
    }
    resultado[j] = '\0';
}

int contarAlfanumericos(char *str)
{
    int count = 0;
    while (*str)
    {
        if (isalnum(*str))
        {
            count++;
        }
        str++;
    }
    return count;
}

void exercicio0411(void)
{
    int n = 0;
    int dentro = 0;
    int fora = 0;
    double limiteInferior = 0.0;
    double limiteSuperior = 0.0;
    double valor = 0.0;

    printf("Digite a quantidade de valores: ");
    scanf("%d", &n);

    printf("Digite o limite inferior do intervalo: ");
    scanf("%lf", &limiteInferior);
    printf("Digite o limite superior do intervalo: ");
    scanf("%lf", &limiteSuperior);

    if (limiteInferior > limiteSuperior)
    {
        double temp = limiteInferior;
        limiteInferior = limiteSuperior;
        limiteSuperior = temp;
    }

    for (int i = 0; i < n; i++)
    {
        printf("Digite um valor: ");
        scanf("%lf", &valor);

        if (valor >= limiteInferior && valor <= limiteSuperior)
        {
            dentro++;
        }
        else
        {
            fora++;
        }
    }

    printf("Quantidade de valores dentro do intervalo: %d\n", dentro);
    printf("Quantidade de valores fora do intervalo: %d\n", fora);

    printf("\n%s\n", "\nAperte ENTER para continuar");
    getchar();
}

void exercicio0412(void)
{
    char sequencia[100];
    printf("Digite a sequência de caracteres: ");
    scanf("%s", sequencia);
    printf("Quantidade de letras minúsculas entre 'c' e 'p': %d\n", contarLetrasMinusculas1(sequencia));

    printf("\n%s\n", "\nAperte ENTER para continuar");
    getchar();
}

void exercicio0413(void)
{
    char str[100];
    printf("Digite uma sequencia de caracteres: ");
    scanf("%s", str);
    printf("Quantidade de letras minusculas entre 'c' e 'p': %d\n", contarLetrasMinusculas2(str));

    printf("\n%s\n", "\nAperte ENTER para continuar");
    getchar();
}

void exercicio0414(void)
{
    char str[100], resultado[100];
    printf("Digite uma sequencia de caracteres: ");
    scanf("%s", str);
    separarLetrasMinusculas(str, resultado);
    printf("Letras minusculas entre 'c' e 'p': %s\n", resultado);

    printf("\n%s\n", "\nAperte ENTER para continuar");
    getchar();
}

void exercicio0415(void)
{
    char str[100];
    printf("Digite uma sequencia de caracteres: ");
    scanf("%s", str);
    printf("Quantidade de letras entre 'c' e 'p' ou 'C' e 'P': %d\n", contarLetras(str));

    printf("\n%s\n", "\nAperte ENTER para continuar");
    getchar();
}

void exercicio0416(void)
{
    char str[100], resultado[100];
    printf("Digite uma sequencia de caracteres: ");
    scanf("%s", str);
    separarLetras(str, resultado);
    printf("Letras entre 'c' e 'p' ou 'C' e 'P': %s\n", resultado);

    printf("\n%s\n", "\nAperte ENTER para continuar");
    getchar();
}

void exercicio0417(void)
{
    char str[100];
    printf("Digite uma sequencia de caracteres: ");
    scanf("%s", str);
    printf("Quantidade de digitos pares: %d\n", contarDigitosPares(str));

    printf("\n%s\n", "\nAperte ENTER para continuar");
    getchar();
}

void exercicio0418(void)
{
    char str[100], resultado[100];
    printf("Digite uma sequencia de caracteres: ");
    scanf("%s", str);
    separarNaoAlfanumericos(str, resultado);
    printf("Simbolos não alfanumericos: %s\n", resultado);

    printf("\n%s\n", "\nAperte ENTER para continuar");
    getchar();
}

void exercicio0419(void)
{
    char str[100], resultado[100];
    printf("Digite uma sequencia de caracteres: ");
    scanf("%s", str);
    separarAlfanumericos(str, resultado);
    printf("Simbolos alfanumericos: %s\n", resultado);

    printf("\n%s\n", "\nAperte ENTER para continuar");
    getchar();
}

void exercicio0420(void)
{
    int n, total = 0;
    printf("Digite a quantidade de sequencias: ");
    scanf("%d", &n);
    getchar();
    for (int i = 0; i < n; i++)
    {
        char str[100];
        printf("Digite a sequencia %d: ", i + 1);
        scanf("%s", str);
        int qtd = contarAlfanumericos(str);
        total += qtd;
        printf("Quantidade de simbolos alfanumericos: %d\n", qtd);
    }
    printf("Total acumulado: %d\n", total);

    printf("\n%s\n", "\nAperte ENTER para continuar");
    getchar();
}

int main(void)
{
    int opcao = 0;
    printf("%s\n", "Execicio04 - Programa = v0.0");
    printf("%s\n", "Autor: Felipe Silva Barros");
    printf("\n");

    do
    {
        printf("\n%s\n", "Opcoes:");
        printf("\n%s", "0 - Terminar");
        printf("\n%s", "1 - Exercicio0411");
        printf("\n%s", "2 - Exercicio0412");
        printf("\n%s", "3 - Exercicio0413");
        printf("\n%s", "4 - Exercicio0414");
        printf("\n%s", "5 - Exercicio0415");
        printf("\n%s", "6 - Exercicio0416");
        printf("\n%s", "7 - Exercicio0417");
        printf("\n%s", "8 - Exercicio0418");
        printf("\n%s", "9 - Exercicio0419");
        printf("\n%s", "10 - Exercicio0420");
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
            exercicio0411();
            break;
        case 2:
            exercicio0412();
            break;
        case 3:
            exercicio0413();
            break;
        case 4:
            exercicio0414();
            break;
        case 5:
            exercicio0415();
            break;
        case 6:
            exercicio0416();
            break;
        case 7:
            exercicio0417();
            break;
        case 8:
            exercicio0418();
            break;
        case 9:
            exercicio0419();
            break;
        case 10:
            exercicio0420();
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