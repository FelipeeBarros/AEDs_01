/*
Extra03 - v0.0. - 19 / 03 / 2025
Author: Felipe Silva Barros
*/

#include <stdio.h>
#include <string.h>
#include <ctype.h>

void simbolos(char *cadeia)
{
    printf("Simbolos nao alfanumericos: ");
    for (int i = 0; cadeia[i] != '\0'; i++)
    {
        if (!isalnum(cadeia[i]))
        {
            printf("%c", cadeia[i]);
        }
    }
    printf("\n");
}

int apenas_simbolos(char *cadeia)
{
    for (int i = 0; cadeia[i] != '\0'; i++)
    {
        if (isalnum(cadeia[i]))
        {
            return 0;
        }
    }
    return 1;
}

void extra01()
{
    char cadeia[100];

    printf("Digite uma sequencia de caracteres: ");
    fgets(cadeia, sizeof(cadeia), stdin);
    cadeia[strcspn(cadeia, "\n")] = '\0';

    simbolos(cadeia);

    printf("\n%s\n", "Aperte ENTER para continuar.");
    getchar();
}

void extra02()
{
    char cadeia[100];

    printf("Digite uma sequencia para verificar se contem apenas simbolos: ");
    fgets(cadeia, sizeof(cadeia), stdin);
    cadeia[strcspn(cadeia, "\n")] = '\0';

    if (apenas_simbolos(cadeia))
    {
        printf("A sequencia contem apenas simbolos.\n");
    }
    else
    {
        printf("A sequencia contem letras ou numeros.\n");
    }

    printf("\n%s\n", "Aperte ENTER para continuar.");
    getchar();
}

int main()
{
    int opcao = 0;
    printf("%s\n", "Extra03 - Programa = v0.0");
    printf("%s\n", "Autor: Felipe Silva Barros");
    printf("\n");

    do
    {
        printf("\n%s\n", "Opcoes:");
        printf("\n%s", "0 - Terminar");
        printf("\n%s", "1 - extra_01");
        printf("\n%s", "2 - extra_02");
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
            extra01();
            break;
        case 2:
            extra02();
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