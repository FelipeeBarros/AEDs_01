/*
Exemplo0002 - v0.0. - 16 / 02 / 2025
Author: Felipe Silva Barros
*/

#include <stdio.h> 
#include <stdlib.h>

int main(int argc, char *argv[])
{

    int opcao = 0;

    printf("%s\n", "Exemplo0002 - Programa = v0.0");
    printf("%s\n", "Autor: Felipe Silva Barros");
    printf("\n");

    printf("\n%s", "Opcao = ");
    scanf("%d", &opcao);
    getchar();
    printf("\n%s%d", "Opcao = ", opcao);

    printf("\n\nApertar ENTER para terminar.");
    getchar();
    return (0);
}