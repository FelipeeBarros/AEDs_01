/*
Exercicio07 - v0.0. - 30 / 04 / 2025
Author: Felipe Silva Barros
*/

#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <math.h>

void multiplosQuatro(int num)
{
    int atual = 0;
    int i = 1;
    for (i = 1; i <= num; i++)
    {
        atual = i * 4;
        printf("%d ", atual);
    }
}

void multiplosQuinze(int num)
{
    int atual = 0;
    int i = num * 2;
    while (i > 0)
    {
        atual = i * 15;
        if (atual % 2 == 0)
        {
            printf("%d ", atual);
        }
        i = i - 1;
    }
}

void sequencia(int num)
{
    int atual = 1;
    int proximo = 3;
    int numero = 0;
    int i = 0;

    printf("1 ");

    for (i = 1; i < num; i++)
    {
        numero = atual * proximo;
        atual = numero;

        printf("%d ", numero);
    }
}

void sequenciaDecrescente(int num)
{
    int atual = 1;
    int proximo = 3;
    int numero = 0;
    int i = 0;

    for (i = num; i > 0; i--)
    {
        numero = num * proximo;
        atual = numero / 3;

        printf("1/%d ", numero);
    }
    printf("1");
}

void gravarSequencia(int n, double x)
{
    FILE *arquivo = fopen("SEQUENCIA.TXT", "w");
    if (arquivo == NULL)
    {
        printf("Erro ao abrir o arquivo.\n");
        return;
    }

    for (int i = 0; i < n; i++)
    {
        double termo = 1.0 / pow(x, 2 * i + 1);
        if (i == 0)
            termo = 1.0;
        fprintf(arquivo, "%.15lf\n", termo);
    }

    fclose(arquivo);
}

double somarTermos(int quantidade)
{
    FILE *arquivo = fopen("SEQUENCIA.TXT", "r");
    if (arquivo == NULL)
    {
        printf("Arquivo SEQUENCIA.TXT não encontrado.\n");
        return 0.0;
    }

    double soma = 0.0;
    double termo;
    int count = 0;

    while (count < quantidade && fscanf(arquivo, "%lf", &termo) == 1)
    {
        soma += termo;
        count++;
    }

    fclose(arquivo);
    return soma;
}

double somarInversos(int quantidade)
{
    double soma = 0.0;
    for (int i = 0; i < quantidade; i++)
    {
        double expoente = 2 * (quantidade - i - 1) + 1;
        soma += 1.0 / pow(3.0, expoente);
    }
    return soma;
}

void gravarFibonacciPares(int quantidade)
{
    FILE *arquivo = fopen("RESULTADO08.TXT", "w");
    if (arquivo == NULL)
    {
        printf("Erro ao abrir o arquivo.\n");
        return;
    }

    int count = 0;
    long a = 1, b = 1, c;

    while (count < quantidade)
    {
        c = a + b;
        a = b;
        b = c;

        if (c % 2 == 0)
        {
            fprintf(arquivo, "%ld\n", c);
            count++;
        }
    }

    fclose(arquivo);
}

int contarMaiusculas(const char *str)
{
    int count = 0;
    while (*str)
    {
        if (isupper(*str))
        {
            count++;
        }
        str++;
    }
    return count;
}

int contarDigitosMaioresQue3(const char *str)
{
    int count = 0;
    while (*str)
    {
        if (isdigit(*str) && (*str - '0') >= 3)
        {
            count++;
        }
        str++;
    }
    return count;
}

void exercicio0711(void)
{
    int n = 0;

    printf("%s\n", "Digite a quantidade de termos: ");
    scanf("%d", &n);
    getchar();

    multiplosQuatro(n);

    printf("\n%s\n", "\nAperte ENTER para continuar");
    getchar();
}

void exercicio0712(void)
{
    int n = 0;

    printf("%s\n", "Digite a quantidade de termos: ");
    scanf("%d", &n);
    getchar();

    multiplosQuinze(n);

    printf("\n%s\n", "\nAperte ENTER para continuar");
    getchar();
}

void exercicio0713(void)
{
    int n = 0;

    printf("%s\n", "Digite a quantidade de termos: ");
    scanf("%d", &n);
    getchar();

    sequencia(n);

    printf("\n%s\n", "\nAperte ENTER para continuar");
    getchar();
}

void exercicio0714(void)
{
    int n = 0;

    printf("%s\n", "Digite a quantidade de termos: ");
    scanf("%d", &n);
    getchar();

    sequenciaDecrescente(n);

    printf("\n%s\n", "\nAperte ENTER para continuar");
    getchar();
}

void exercicio0715(void)
{
    int n = 0;
    double x = 0.0;

    printf("%s\n", "Digite a quantidade de termos: ");
    scanf("%d", &n);
    getchar();

    printf("%s\n", "Digite o valor real: ");
    scanf("%lf", &x);
    getchar();

    gravarSequencia(n, x);

    printf("\n%s\n", "\nAperte ENTER para continuar");
    getchar();
}

void exercicio0716(void)
{
    int quantidade = 0;

    printf("%s\n", "Digite a quantidade de termos a somar: ");
    scanf("%d", &quantidade);
    getchar();

    double resultado = somarTermos(quantidade);

    FILE *arquivo = fopen("RESULTADO06.TXT", "w");
    if (arquivo == NULL)
    {
        printf("Erro ao abrir o arquivo.\n");
        return;
    }
    fprintf(arquivo, "Quantidade: %d\nResultado: %.15lf\n", quantidade, resultado);
    fclose(arquivo);

    printf("\n%s\n", "\nAperte ENTER para continuar");
    getchar();
}

void exercicio0717(void)
{
    int quantidade = 0;

    printf("%s\n", "Digite a quantidade de termos a somar: ");
    scanf("%d", &quantidade);
    getchar();

    double resultado = somarInversos(quantidade);

    FILE *arquivo = fopen("RESULTADO07.TXT", "w");
    if (arquivo == NULL)
    {
        printf("Erro ao abrir o arquivo.\n");
        return;
    }
    fprintf(arquivo, "Quantidade: %d\nResultado: %.15lf\n", quantidade, resultado);
    fclose(arquivo);

    printf("\n%s\n", "\nAperte ENTER para continuar");
    getchar();
}

void exercicio0718(void)
{
    int quantidade = 0;

    printf("%s\n", "Digite a quantidade de termos pares de Fibonacci: ");
    scanf("%d", &quantidade);
    getchar();

    gravarFibonacciPares(quantidade);

    printf("\n%s\n", "\nAperte ENTER para continuar");
    getchar();
}

void exercicio0719(void)
{
    char str[100];

    printf("%s\n", "Digite uma cadeia de caracteres: ");
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = '\0';

    int maiusculas = contarMaiusculas(str);

    FILE *arquivo = fopen("RESULTADO09.TXT", "w");
    if (arquivo == NULL)
    {
        printf("Erro ao abrir o arquivo.\n");
        return;
    }
    fprintf(arquivo, "Cadeia: %s\nMaiusculas: %d\n", str, maiusculas);
    fclose(arquivo);

    printf("\n%s\n", "\nAperte ENTER para continuar");
    getchar();
}

void exercicio0720(void)
{
    char str[100];

    printf("%s\n", "Digite uma cadeia de caracteres: ");
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = '\0';

    int digitos = contarDigitosMaioresQue3(str);

    FILE *arquivo = fopen("RESULTADO10.TXT", "w");
    if (arquivo == NULL)
    {
        printf("Erro ao abrir o arquivo.\n");
        return;
    }
    fprintf(arquivo, "Cadeia: %s\nDigitos >=3: %d\n", str, digitos);
    fclose(arquivo);

    printf("\n%s\n", "\nAperte ENTER para continuar");
    getchar();
}

int main(void)
{
    int opcao = 0;
    printf("%s\n", "Execicio07 - Programa = v0.0");
    printf("%s\n", "Autor: Felipe Silva Barros");
    printf("\n");

    do
    {
        printf("\n%s\n", "Opcoes:");
        printf("\n%s", "0 - Terminar");
        printf("\n%s", "1 - Exercicio0711");
        printf("\n%s", "2 - Exercicio0712");
        printf("\n%s", "3 - Exercicio0713");
        printf("\n%s", "4 - Exercicio0714");
        printf("\n%s", "5 - Exercicio0715");
        printf("\n%s", "6 - Exercicio0716");
        printf("\n%s", "7 - Exercicio0717");
        printf("\n%s", "8 - Exercicio0718");
        printf("\n%s", "9 - Exercicio0719");
        printf("\n%s", "10 - Exercicio0720");
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
            exercicio0711();
            break;
        case 2:
            exercicio0712();
            break;
        case 3:
            exercicio0713();
            break;
        case 4:
            exercicio0714();
            break;
        case 5:
            exercicio0715();
            break;
        case 6:
            exercicio0716();
            break;
        case 7:
            exercicio0717();
            break;
        case 8:
            exercicio0718();
            break;
        case 9:
            exercicio0719();
            break;
        case 10:
            exercicio0720();
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