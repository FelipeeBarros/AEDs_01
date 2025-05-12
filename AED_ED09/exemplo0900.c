/*
Exemplo09 - v0.0. - 09 / 05 / 2025
Author: Felipe Silva Barros
*/

#include "io.h"

void printIntMatrix(int rows, int columns, int matrix[][columns])
{
    int x = 0;
    int y = 0;
    for (x = 0; x < rows; x = x + 1)
    {
        for (y = 0; y < columns; y = y + 1)
        {
            IO_printf("%3d\t", matrix[x][y]);
        }
        IO_printf("\n");
    }
}

void method_01()
{
    int matrix[][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}};
    IO_id("Method_01 - v0.0");
    printIntMatrix(3, 3, matrix);
    IO_pause("Apertar ENTER para continuar");
}

void readIntMatrix(int rows, int columns, int matrix[][columns])
{
    int x = 0;
    int y = 0;
    int z = 0;
    chars text = IO_new_chars(STR_SIZE);
    for (x = 0; x < rows; x = x + 1)
    {
        for (y = 0; y < columns; y = y + 1)
        {
            strcpy(text, STR_EMPTY);
            z = IO_readint(IO_concat(
                IO_concat(IO_concat(text, IO_toString_d(x)), ", "),
                IO_concat(IO_concat(text, IO_toString_d(y)), " : ")));
            matrix[x][y] = z;
        }
    }
}
void method_02()
{
    int n = 2;
    int matrix[n][n];
    IO_id("Method_02 - v0.0");
    readIntMatrix(n, n, matrix);
    IO_printf("\n");
    printIntMatrix(n, n, matrix);
    IO_pause("Apertar ENTER para continuar");
}

void fprintIntMatrix(chars fileName, int rows, int columns, int matrix[][columns])
{
    FILE *arquivo = fopen(fileName, "wt");
    int x = 0;
    int y = 0;
    IO_fprintf(arquivo, "%d\n", rows);
    IO_fprintf(arquivo, "%d\n", columns);
    for (x = 0; x < rows; x = x + 1)
    {
        for (y = 0; y < columns; y = y + 1)
        {
            IO_fprintf(arquivo, "%d\n", matrix[x][y]);
        }
    }
    fclose(arquivo);
}

void method_03()
{
    int rows = 0;
    int columns = 0;
    IO_id("Method_03 - v0.0");
    rows = IO_readint("\nrows = ");
    columns = IO_readint("\ncolumns = ");
    IO_printf("\n");
    if (rows <= 0 || columns <= 0)
    {
        IO_println("\nERRO: Valor invalido.");
    }
    else
    {
        int matrix[rows][columns];
        readIntMatrix(rows, columns, matrix);
        IO_printf("\n");
        printIntMatrix(rows, columns, matrix);
        IO_printf("\n");
        fprintIntMatrix("MATRIX1.TXT", rows, columns, matrix);
    }
    IO_pause("Apertar ENTER para continuar");
}

int freadMatrixRows(chars fileName)
{
    int n = 0;
    FILE *arquivo = fopen(fileName, "rt");
    ints array = NULL;
    IO_fscanf(arquivo, "%d", &n);
    if (n <= 0)
    {
        IO_println("ERRO: Valor invalido.");
        n = 0;
    }
    return (n);
}

int freadMatrixColumns(chars fileName)
{
    int n = 0;
    FILE *arquivo = fopen(fileName, "rt");
    IO_fscanf(arquivo, "%d", &n);
    IO_fscanf(arquivo, "%d", &n);
    if (n <= 0)
    {
        IO_println("ERRO: Valor invalido.");
        n = 0;
    }
    return (n);
}
void freadIntMatrix(chars fileName, int rows, int columns, int matrix[][columns])
{
    int x = 0;
    int y = 0;
    int z = 0;
    FILE *arquivo = fopen(fileName, "rt");
    IO_fscanf(arquivo, "%d", &x);
    IO_fscanf(arquivo, "%d", &y);
    if (rows <= 0 || rows > x ||
        columns <= 0 || columns > y)
    {
        IO_println("ERRO: Valor invalido.");
    }
    else
    {
        x = 0;
        while (!feof(arquivo) && x < rows)
        {
            y = 0;
            while (!feof(arquivo) && y < columns)
            {
                IO_fscanf(arquivo, "%d", &z);
                matrix[x][y] = z;

                y = y + 1;
            }

            x = x + 1;
        }
    }
    fclose(arquivo);
}
void method_04()
{
    int rows = 0;
    int columns = 0;
    IO_id("Method_04 - v0.0");
    rows = freadMatrixRows("MATRIX1.TXT");
    columns = freadMatrixColumns("MATRIX1.TXT");
    if (rows <= 0 || columns <= 0)
    {
        IO_println("\nERRO: Valor invalido.");
    }
    else
    {
        int matrix[rows][columns];
        freadIntMatrix("MATRIX1.TXT", rows, columns, matrix);
        IO_printf("\n");
        printIntMatrix(rows, columns, matrix);
    }
    IO_pause("Apertar ENTER para continuar");
}

void copyIntMatrix(int rows, int columns,
                   int matrix2[][columns], int matrix1[][columns])
{
    int x = 0;
    int y = 0;
    if (rows <= 0 || columns <= 0)
    {
        IO_println("ERRO: Valor invalido.");
    }
    else
    {
        for (x = 0; x < rows; x = x + 1)
        {
            for (y = 0; y < columns; y = y + 1)
            {
                matrix2[x][y] = matrix1[x][y];
            }
        }
    }
}

void method_05()
{
    int rows = 0;
    int columns = 0;
    IO_id("Method_05 - v0.0");
    rows = freadMatrixRows("MATRIX1.TXT");
    columns = freadMatrixColumns("MATRIX1.TXT");
    if (rows <= 0 || columns <= 0)
    {
        IO_println("\nERRO: Valor invalido.");
    }
    else
    {
        int matrix[rows][columns];
        int other[rows][columns];
        freadIntMatrix("MATRIX1.TXT", rows, columns, matrix);
        copyIntMatrix(rows, columns, other, matrix);
        IO_printf("\nOriginal\n");
        printIntMatrix(rows, columns, matrix);
        IO_printf("\nCopia\n");
        printIntMatrix(rows, columns, other);
    }
    IO_pause("Apertar ENTER para continuar");
}

void transposeIntMatrix(int rows, int columns,
                        int matrix2[][rows], int matrix1[][columns])
{
    int x = 0;
    int y = 0;
    for (x = 0; x < rows; x = x + 1)
    {
        for (y = 0; y < columns; y = y + 1)
        {
            matrix2[y][x] = matrix1[x][y];
        }
    }
}

void method_06()
{
    int matrix1[][2] = {{1, 0},
                        {0, 1}};
    int matrix2[][2] = {{0, 0},
                        {0, 0}};
    int matrix3[][3] = {{1, 2, 3},
                        {4, 5, 6}};
    int matrix4[][3] = {{1, 2, 3},
                        {4, 5, 6},
                        {7, 8, 9}};
    IO_id("Method_06 - v0.0");
    IO_println("\nMatrix1 ");
    printIntMatrix(2, 2, matrix1);
    transposeIntMatrix(2, 2, matrix2, matrix1);
    IO_println("\nMatrix2");
    printIntMatrix(2, 2, matrix2);
    IO_println("\nMatrix3");
    printIntMatrix(2, 3, matrix3);
    transposeIntMatrix(2, 3, matrix4, matrix3);
    IO_println("\nMatrix4");
    printIntMatrix(3, 2, matrix4);
    IO_pause("Apertar ENTER para continuar");
}

bool isIdentity(int rows, int columns, int matrix[][columns])
{
    bool result = false;
    int x = 0;
    int y = 0;
    if (rows <= 0 || columns <= 0 ||
        rows != columns)
    {
        IO_printf("\nERRO: Valor invalido.\n");
    }
    else
    {
        x = 0;
        result = true;
        while (x < rows && result)
        {
            y = 0;
            while (y < columns && result)
            {
                if (x == y)
                {
                    result = result && (matrix[x][y] == 1);
                }
                else
                {
                    result = result && (matrix[x][y] == 0);
                }

                y = y + 1;
            }

            x = x + 1;
        }
    }
    return (result);
}

void method_07()
{
    int matrix1[][2] = {{0, 0},
                        {0, 0}};
    int matrix2[][3] = {{1, 2, 3},
                        {4, 5, 6}};
    int matrix3[][2] = {{1, 0},
                        {0, 1}};
    IO_id("Method_07 - v0.0");
    IO_println("\nMatrix1");
    printIntMatrix(2, 2, matrix1);
    IO_printf("isIdentity (matrix1) = %d", isIdentity(2, 2, matrix1));
    IO_println("\nMatrix2");
    printIntMatrix(2, 3, matrix2);
    IO_printf("isIdentity (matrix2) = %d", isIdentity(2, 3, matrix2));
    IO_println("\nMatrix3");
    printIntMatrix(2, 2, matrix3);
    IO_printf("isIdentity (matrix3) = %d", isIdentity(2, 2, matrix3));
    IO_pause("Apertar ENTER para continuar");
}

bool isEqual(int rows, int columns,
             int matrix1[][columns], int matrix2[][columns])
{
    bool result = true;
    int x = 0;
    int y = 0;
    x = 0;
    while (x < rows && result)
    {
        y = 0;
        while (y < columns && result)
        {
            result = result &&
                     (matrix1[x][y] == matrix2[x][y]);

            y = y + 1;
        }
        x = x + 1;
    }
    return (result);
}

void method_08()
{
    int matrix1[][2] = {{0, 0},
                        {0, 0}};
    int matrix2[][2] = {{1, 2},
                        {3, 4}};
    int matrix3[][2] = {{1, 0},
                        {0, 1}};
    IO_id("Method_08 - v0.0");
        IO_println("\nMatrix1");
    printIntMatrix(2, 2, matrix1);
    IO_println("\nMatrix2");
    printIntMatrix(2, 2, matrix2);
    IO_printf("isEqual (matrix1, matrix2) = %d",
              isEqual(2, 2, matrix1, matrix2));
    copyIntMatrix(2, 2, matrix1, matrix3);
    copyIntMatrix(2, 2, matrix2, matrix3);
    IO_println("\nMatrix1");
    printIntMatrix(2, 2, matrix1);
    IO_println("\nMatrix2");
    printIntMatrix(2, 2, matrix2);
    IO_printf("isEqual (matrix1, matrix2) = %d",
              isEqual(2, 2, matrix1, matrix2));
    IO_pause("Apertar ENTER para continuar");
}

void addIntMatrix(int rows, int columns,
                  int matrix3[][columns],
                  int matrix1[][columns], int k, int matrix2[][columns])
{
    int x = 0;
    int y = 0;
    for (x = 0; x < rows; x = x + 1)
    {
        for (y = 0; y < columns; y = y + 1)
        {

            matrix3[x][y] = matrix1[x][y] + k * matrix2[x][y];
        }
    }
}

void method_09()
{
    int matrix1[][2] = {{1, 2},
                        {3, 4}};
    int matrix2[][2] = {{1, 0},
                        {0, 1}};
    int matrix3[][2] = {{0, 0},
                        {0, 0}};
    IO_id("Method_09 - v0.0");
    IO_println("\nMatrix1");
    printIntMatrix(2, 2, matrix1);
    IO_println("\nMatrix2");
    printIntMatrix(2, 2, matrix2);
    addIntMatrix(2, 2, matrix3, matrix1, (-2), matrix2);
    IO_println("\nMatrix3");
    printIntMatrix(2, 2, matrix3);
    IO_pause("Apertar ENTER para continuar");
}

void mulIntMatrix(int rows3, int columns3,
                  int matrix3[][columns3],
                  int rows1, int columns1,
                  int matrix1[][columns1],
                  int rows2, int columns2,
                  int matrix2[][columns2])
{
    int x = 0;
    int y = 0;
    int z = 0;
    int soma = 0;
    if (rows1 <= 0 || columns1 <= 0 ||
        rows2 <= 0 || columns2 <= 0 ||
        rows3 <= 0 || columns3 <= 0 ||
        columns1 != rows2 ||
        rows1 != rows3 ||
        columns2 != columns3)
    {
        IO_printf("\nERRO: Valor invalido.\n");
    }
    else
    {
        for (x = 0; x < rows3; x = x + 1)
        {
            for (y = 0; y < columns3; y = y + 1)
            {
                soma = 0;
                for (z = 0; z < columns1; z = z + 1)
                {
                    soma = soma + matrix1[x][z] * matrix2[z][y];
                }
                matrix3[x][y] = soma;
            }
        }
    }
}

void method_10()
{
    IO_id("Method_10 - v0.0");
    int matrix1[][2] = {{1, 2},
                        {3, 4}};
    int matrix2[][2] = {{1, 0},
                        {0, 1}};
    int matrix3[][2] = {{0, 0},
                        {0, 0}};
    IO_id("EXEMPLO0910 - Method_09 - v0.0");
    IO_println("\nMatrix1");
    printIntMatrix(2, 2, matrix1);
    IO_println("\nMatrix2");
    printIntMatrix(2, 2, matrix2);
    mulIntMatrix(2, 2, matrix3, 2, 2, matrix1, 2, 2, matrix2);
    IO_println("\nMatrix3 = Matrix1 * Matrix2");
    printIntMatrix(2, 2, matrix3);
    IO_println("\nMatrix2");
    printIntMatrix(2, 2, matrix2);
    IO_println("\nMatrix1");
    printIntMatrix(2, 2, matrix1);
    mulIntMatrix(2, 2, matrix3, 2, 2, matrix2, 2, 2, matrix1);
    IO_println("\nMatrix3 = Matrix2 * Matrix1");
    printIntMatrix(2, 2, matrix3);
    IO_pause("Apertar ENTER para continuar");
}

int main()
{
    int x = 0;

    do
    {
        printf("%s\n", "Exemplo0900 - Programa = v0.0");
        printf("%s\n", "Autor: Felipe Silva Barros");
        printf("\n");

        IO_println("Opcoes");
        IO_println("0 - Parar");
        IO_println("1 - Exemplo0901");
        IO_println("2 - Exemplo0902");
        IO_println("3 - Exemplo0903");
        IO_println("4 - Exemplo0904");
        IO_println("5 - Exemplo0905");
        IO_println("6 - Exemplo0906");
        IO_println("7 - Exemplo0907");
        IO_println("8 - Exemplo0908");
        IO_println("9 - Exemplo0909");
        IO_println("10 - Exemplo910");
        x = IO_readint("\nEntrar com uma opcao: ");

        switch (x)
        {
        case 0:
            break;
        case 1:
            method_01();
            break;
        case 2:
            method_02();
            break;
        case 3:
            method_03();
            break;
        case 4:
            method_04();
            break;
        case 5:
            method_05();
            break;
        case 6:
            method_06();
            break;
        case 7:
            method_07();
            break;
        case 8:
            method_08();
            break;
        case 9:
            method_09();
            break;
        case 10:
            method_10();
            break;
        default:
            printf("\nERRO: Opcao invalida.\n");
            break;
        }
    } while (x != 0);

    IO_pause("Apertar ENTER para terminar");
    return (0);
}
