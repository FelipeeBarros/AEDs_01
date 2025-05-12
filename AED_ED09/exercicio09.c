/*
Exercicio09 - v0.0. - 09 / 05 / 2025
Author: Felipe Silva Barros
*/

#include <stdio.h>
#include <stdbool.h>

void readPositiveDoubleMatrix(int rows, int cols, double matrix[rows][cols])
{
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            do
            {
                printf("Elemento [%d][%d]: ", i, j);
                scanf("%lf", &matrix[i][j]);
                getchar();
                if (matrix[i][j] < 0)
                {
                    printf("Valor invalido! Digite apenas valores positivos ou zero.\n");
                }
            } while (matrix[i][j] < 0);
        }
    }
}

void printDoubleMatrix(int rows, int cols, double matrix[rows][cols])
{
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            printf("%6.2lf ", matrix[i][j]);
        }
        printf("\n");
    }
}

void fprintDoubleMatrix(const char *filename, int rows, int cols, double matrix[rows][cols])
{
    FILE *file = fopen(filename, "w");
    if (file == NULL)
    {
        printf("Erro ao abrir arquivo!\n");
        return;
    }

    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            fprintf(file, "%lf ", matrix[i][j]);
        }
        fprintf(file, "\n");
    }
    fclose(file);
}

void freadDoubleMatrix(const char *filename, int rows, int cols, double matrix[rows][cols])
{
    FILE *file = fopen(filename, "r");
    if (file == NULL)
    {
        printf("Erro ao abrir arquivo!\n");
        return;
    }

    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            fscanf(file, "%lf", &matrix[i][j]);
        }
    }
    fclose(file);
}

void printDiagonalDoubleMatrix(int rows, int cols, double matrix[rows][cols])
{
    if (rows != cols)
    {
        printf("A matriz nao e quadrada!\n");
        return;
    }

    printf("Diagonal principal:\n");
    for (int i = 0; i < rows; i++)
    {
        printf("%6.2lf ", matrix[i][i]);
    }
    printf("\n");
}

void printSDiagonalDoubleMatrix(int rows, int cols, double matrix[rows][cols])
{
    if (rows != cols)
    {
        printf("A matriz nao e quadrada!\n");
        return;
    }

    printf("Diagonal secundaria:\n");
    for (int i = 0; i < rows; i++)
    {
        printf("%6.2lf ", matrix[i][cols - 1 - i]);
    }
    printf("\n");
}

void printLDTriangleDoubleMatrix(int rows, int cols, double matrix[rows][cols])
{
    if (rows != cols)
    {
        printf("A matriz nao e quadrada!\n");
        return;
    }

    printf("Elementos abaixo da diagonal principal:\n");
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < i; j++)
        {
            printf("%6.2lf ", matrix[i][j]);
        }
        printf("\n");
    }
}

void printLUTriangleDoubleMatrix(int rows, int cols, double matrix[rows][cols])
{
    if (rows != cols)
    {
        printf("A matriz nao e quadrada!\n");
        return;
    }

    printf("Elementos acima da diagonal principal:\n");
    for (int i = 0; i < rows; i++)
    {
        for (int j = i + 1; j < cols; j++)
        {
            printf("%6.2lf ", matrix[i][j]);
        }
        printf("\n");
    }
}

void printSLDTriangleDoubleMatrix(int rows, int cols, double matrix[rows][cols])
{
    if (rows != cols)
    {
        printf("A matriz nao e quadrada!\n");
        return;
    }

    printf("Elementos abaixo e na diagonal secundaria:\n");
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            if (i + j >= rows - 1)
            {
                printf("%6.2lf ", matrix[i][j]);
            }
            else
            {
                printf("       ");
            }
        }
        printf("\n");
    }
}

void printSLUTriangleDoubleMatrix(int rows, int cols, double matrix[rows][cols])
{
    if (rows != cols)
    {
        printf("A matriz nao e quadrada!\n");
        return;
    }

    printf("Elementos acima e na diagonal secundaria:\n");
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            if (i + j <= rows - 1)
            {
                printf("%6.2lf ", matrix[i][j]);
            }
            else
            {
                printf("       ");
            }
        }
        printf("\n");
    }
}

bool allZerosLTriangleDoubleMatrix(int rows, int cols, double matrix[rows][cols])
{
    if (rows != cols)
        return false;

    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < i; j++)
        {
            if (matrix[i][j] != 0.0)
            {
                return false;
            }
        }
    }
    return true;
}

bool allZerosUTriangleDoubleMatrix(int rows, int cols, double matrix[rows][cols])
{
    if (rows != cols)
        return false;

    for (int i = 0; i < rows; i++)
    {
        for (int j = i + 1; j < cols; j++)
        {
            if (matrix[i][j] != 0.0)
            {
                return false;
            }
        }
    }
    return true;
}

void exercicio0911(void)
{
    int rows = 0;
    int cols = 0;
    printf("Digite o numero de linhas: ");
    scanf("%d", &rows);
    getchar();

    printf("Digite o numero de colunas: ");
    scanf("%d", &cols);
    getchar();

    if (rows <= 0 || cols <= 0)
    {
        printf("Dimensoes invalidas!\n");
        return;
    }

    double matrix[rows][cols];
    readPositiveDoubleMatrix(rows, cols, matrix);
    printDoubleMatrix(rows, cols, matrix);

    printf("\nAperte ENTER para continuar");
    getchar();
}

void exercicio0912(void)
{
    int rows = 3;
    int cols = 3;
    double matrix[rows][cols];

    readPositiveDoubleMatrix(rows, cols, matrix);
    fprintDoubleMatrix("MATRIX_01.TXT", rows, cols, matrix);

    double loadedMatrix[rows][cols];
    freadDoubleMatrix("MATRIX_01.TXT", rows, cols, loadedMatrix);
    printDoubleMatrix(rows, cols, loadedMatrix);

    printf("\nAperte ENTER para continuar");
    getchar();
}

void exercicio0913(void)
{
    int rows = 3;
    int cols = 3;
    double matrix[rows][cols];

    readPositiveDoubleMatrix(rows, cols, matrix);
    printDiagonalDoubleMatrix(rows, cols, matrix);

    printf("\nAperte ENTER para continuar");
    getchar();
}

void exercicio0914(void)
{
    int rows = 3;
    int cols = 3;
    double matrix[rows][cols];

    readPositiveDoubleMatrix(rows, cols, matrix);
    printSDiagonalDoubleMatrix(rows, cols, matrix);

    printf("\nAperte ENTER para continuar");
    getchar();
}

void exercicio0915(void)
{
    int rows = 3;
    int cols = 3;
    double matrix[rows][cols];

    readPositiveDoubleMatrix(rows, cols, matrix);
    printLDTriangleDoubleMatrix(rows, cols, matrix);

    printf("\nAperte ENTER para continuar");
    getchar();
}

void exercicio0916(void)
{
    int rows = 3;
    int cols = 3;
    double matrix[rows][cols];

    readPositiveDoubleMatrix(rows, cols, matrix);
    printLUTriangleDoubleMatrix(rows, cols, matrix);

    printf("\nAperte ENTER para continuar");
    getchar();
}

void exercicio0917(void)
{
    int rows = 3;
    int cols = 3;
    double matrix[rows][cols];

    readPositiveDoubleMatrix(rows, cols, matrix);
    printSLDTriangleDoubleMatrix(rows, cols, matrix);

    printf("\nAperte ENTER para continuar");
    getchar();
}

void exercicio0918(void)
{
    int rows = 3;
    int cols = 3;
    double matrix[rows][cols];

    readPositiveDoubleMatrix(rows, cols, matrix);
    printSLUTriangleDoubleMatrix(rows, cols, matrix);

    printf("\nAperte ENTER para continuar");
    getchar();
}

void exercicio0919(void)
{
    int rows = 3;
    int cols = 3;
    double matrix[rows][cols];

    readPositiveDoubleMatrix(rows, cols, matrix);
    bool result = allZerosLTriangleDoubleMatrix(rows, cols, matrix);

    if (result)
    {
        printf("Todos os elementos abaixo da diagonal principal sao zeros.\n");
    }
    else
    {
        printf("Existem elementos nao zeros abaixo da diagonal principal.\n");
    }

    printf("\nAperte ENTER para continuar");
    getchar();
}

void exercicio0920(void)
{
    int rows = 3;
    int cols = 3;
    double matrix[rows][cols];

    readPositiveDoubleMatrix(rows, cols, matrix);
    bool result = allZerosUTriangleDoubleMatrix(rows, cols, matrix);

    if (result)
    {
        printf("Todos os elementos acima da diagonal principal sao zeros.\n");
    }
    else
    {
        printf("Existem elementos nao zeros acima da diagonal principal.\n");
    }

    printf("\nAperte ENTER para continuar");
    getchar();
}

int main(void)
{
    int opcao = 0;
    printf("%s\n", "Execicio09 - Programa = v0.0");
    printf("%s\n", "Autor: Felipe Silva Barros");
    printf("\n");

    do
    {
        printf("\n%s\n", "Opcoes:");
        printf("\n%s", "0 - Terminar");
        printf("\n%s", "1 - Exercicio0911");
        printf("\n%s", "2 - Exercicio0912");
        printf("\n%s", "3 - Exercicio0913");
        printf("\n%s", "4 - Exercicio0914");
        printf("\n%s", "5 - Exercicio0915");
        printf("\n%s", "6 - Exercicio0916");
        printf("\n%s", "7 - Exercicio0917");
        printf("\n%s", "8 - Exercicio0918");
        printf("\n%s", "9 - Exercicio0919");
        printf("\n%s", "10 - Exercicio0920");
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
            exercicio0911();
            break;
        case 2:
            exercicio0912();
            break;
        case 3:
            exercicio0913();
            break;
        case 4:
            exercicio0914();
            break;
        case 5:
            exercicio0915();
            break;
        case 6:
            exercicio0916();
            break;
        case 7:
            exercicio0917();
            break;
        case 8:
            exercicio0918();
            break;
        case 9:
            exercicio0919();
            break;
        case 10:
            exercicio0920();
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