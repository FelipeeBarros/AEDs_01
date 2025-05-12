/*
Extra09 - v0.0. - 09 / 05 / 2025
Author: Felipe Silva Barros
*/

#include <stdio.h>
#include <stdbool.h>

void generateSpecialMatrixE1(int rows, int cols, int matrix[rows][cols])
{
    int counter = 1;
    for(int i = 0; i < rows; i++) {
        for(int j = 0; j < cols; j++) {
            matrix[i][j] = counter++;
        }
    }
}

void generateSpecialMatrixE2(int rows, int cols, int matrix[rows][cols])
{
    int counter = rows * cols;
    for(int i = 0; i < rows; i++) {
        for(int j = 0; j < cols; j++) {
            matrix[i][j] = counter--;
        }
    }
}

void exercicio09E1(void)
{
    int rows = 0;
    int cols = 0;
    printf("Digite o numero de linhas: ");
    scanf("%d", &rows);
    getchar();
    
    printf("Digite o numero de colunas: ");
    scanf("%d", &cols);
    getchar();
    
    if(rows <= 0 || cols <= 0) {
        printf("Dimensoes invalidas!\n");
        return;
    }
    
    int matrix[rows][cols];
    generateSpecialMatrixE1(rows, cols, matrix);
    
    printf("Matriz gerada:\n");
    for(int i = 0; i < rows; i++) {
        for(int j = 0; j < cols; j++) {
            printf("%4d ", matrix[i][j]);
        }
        printf("\n");
    }
    
    FILE* file = fopen("MATRIX_E1.TXT", "w");
    if(file != NULL) {
        for(int i = 0; i < rows; i++) {
            for(int j = 0; j < cols; j++) {
                fprintf(file, "%d ", matrix[i][j]);
            }
            fprintf(file, "\n");
        }
        fclose(file);
        printf("Matriz gravada em MATRIX_E1.TXT\n");
    }
    
    printf("\nAperte ENTER para continuar");
    getchar();
}

void exercicio09E2(void)
{
    int rows = 0;
    int cols = 0;
    printf("Digite o numero de linhas: ");
    scanf("%d", &rows);
    getchar();
    
    printf("Digite o numero de colunas: ");
    scanf("%d", &cols);
    getchar();
    
    if(rows <= 0 || cols <= 0) {
        printf("Dimensoes invalidas!\n");
        return;
    }
    
    int matrix[rows][cols];
    generateSpecialMatrixE2(rows, cols, matrix);
    
    printf("Matriz gerada:\n");
    for(int i = 0; i < rows; i++) {
        for(int j = 0; j < cols; j++) {
            printf("%4d ", matrix[i][j]);
        }
        printf("\n");
    }
    
    FILE* file = fopen("MATRIX_E2.TXT", "w");
    if(file != NULL) {
        for(int i = 0; i < rows; i++) {
            for(int j = 0; j < cols; j++) {
                fprintf(file, "%d ", matrix[i][j]);
            }
            fprintf(file, "\n");
        }
        fclose(file);
        printf("Matriz gravada em MATRIX_E2.TXT\n");
    }
    
    printf("\nAperte ENTER para continuar");
    getchar();
}

int main()
{
    int opcao = 0;
    printf("%s\n", "Extra09 - Programa = v0.0");
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
            exercicio09E1();
            break;
        case 2:
            exercicio09E2();
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