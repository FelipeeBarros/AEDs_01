/*
Extra10 - v0.0. - 27 / 05 / 2025
Author: Felipe Silva Barros
*/

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include "io.h"

void function_E1(const char *filename)
{
    FILE *file = fopen(filename, "r");
    int N;
    fscanf(file, "%d", &N);

    int *array = (int *)malloc(N * sizeof(int));
    for (int i = 0; i < N; i++)
    {
        fscanf(file, "%d", &array[i]);
    }

    for (int i = 0; i < N - 1; i++)
    {
        for (int j = i + 1; j < N; j++)
        {
            if (array[i] < array[j])
            {
                int temp = array[i];
                array[i] = array[j];
                array[j] = temp;
            }
        }
    }

    printf("Arranjo ordenado:\n");
    for (int i = 0; i < N; i++)
    {
        printf("%d\n", array[i]);
    }

    free(array);
    fclose(file);
}

bool function_E2(const char *filename1, const char *filename2)
{
    FILE *file1 = fopen(filename1, "r");
    FILE *file2 = fopen(filename2, "r");
    int rows1, cols1, rows2, cols2;

    fscanf(file1, "%d %d", &rows1, &cols1);
    fscanf(file2, "%d %d", &rows2, &cols2);

    if (rows1 != cols2 || cols1 != rows2)
    {
        fclose(file1);
        fclose(file2);
        return false;
    }

    fclose(file1);
    fclose(file2);
    return false;
}

int main()
{
    int opcao = 0;
    printf("%s\n", "Extra10 - Programa = v0.0");
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
            function_E1("DADOS.TXT");
            printf("\nAperte ENTER para continuar");
            getchar();
            break;
        case 2:
        {
            bool ehIdentidade = function_E2("MATRIZ1.TXT", "MATRIZ2.TXT");
            printf("O produto %s a matriz identidade.\n", ehIdentidade ? "eh" : "nao eh");
            printf("\nAperte ENTER para continuar");
            getchar();
            break;
        }
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