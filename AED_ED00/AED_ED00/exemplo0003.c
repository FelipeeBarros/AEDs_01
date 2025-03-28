/*
Exemplo0003 - v0.0. - 16 / 02 / 2025
Author: Felipe Silva Barros
*/

#include <stdio.h> 
#include <stdlib.h>

int main(int argc, char *argv[])
{

    int opcao = 0;

    printf("%s\n", "Exemplo0003 - Programa = v0.0");
    printf("%s\n", "Autor: Felipe Silva Barros");
    printf("\n");
    printf("\n%s\n", "Opcoes:");
    printf("\n%s", "Terminar");
    printf("\n");

    printf("\n%s", "Opcao = ");
    scanf("%d", &opcao);
    getchar();
    printf("\n%s%d", "Opcao = ", opcao);
    switch (opcao)
    {
    case 0:
        break;
    default:
        printf("\nERRO: Opcao invalida.\n");
        break;
    }
    printf("\n\nApertar ENTER para terminar.");
    getchar();
    return (0);
}