/*
Extra04 - v0.0. - 23 / 03 / 2025
Author: Felipe Silva Barros
*/

#include <stdio.h>
#include <ctype.h>
#include <string.h>

void extra01()
{
    char str[100];
    int totalSimbolos = 0;

    printf("Digite uma cadeia de caracteres: ");
    fgets(str, sizeof(str), stdin);
    
    int count = 0;
    for (int i = 0; str[i] != '\0'; i++)
    {
        if (isalnum(str[i]) || str[i] == ' ')
        {
            count++;
        }
    }
    
    if (count > 3)
    {
        totalSimbolos += count;
    }

    printf("Quantidade de simbolos alfanumericos (incluindo espacos): %d\n", count);
    printf("Total de todas as palavras com mais de tres simbolos: %d\n", totalSimbolos);

    printf("\n%s\n", "Aperte ENTER para continuar.");
    getchar();
}

void extra02()
{
    char str1[100], str2[100];
    printf("Digite a primeira cadeia de caracteres: ");
    fgets(str1, sizeof(str1), stdin);
    printf("Digite a segunda cadeia de caracteres: ");
    fgets(str2, sizeof(str2), stdin);

    int count1 = 0, count2 = 0;
    
    for (int i = 0; str1[i] != '\0'; i++)
    {
        if (isdigit(str1[i]))
        {
            count1++;
        }
    }
    for (int i = 0; str2[i] != '\0'; i++)
    {
        if (isdigit(str2[i]))
        {
            count2++;
        }
    }
    
    printf("Quantidade de digitos na primeira cadeia: %d\n", count1);
    printf("Quantidade de digitos na segunda cadeia: %d\n", count2);
    
    if (count1 > count2)
    {
        printf("A primeira cadeia possui mais digitos.\n");
    }
    else if (count2 > count1)
    {
        printf("A segunda cadeia possui mais digitos.\n");
    }
    else
    {
        printf("Ambas as c          adeias possuem a mesma quantidade de digitos.\n");
    }

    printf("\n%s\n", "Aperte ENTER para continuar.");
    getchar();
}

int main()
{
    int opcao = 0;
    printf("%s\n", "Extra04 - Programa = v0.0");
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