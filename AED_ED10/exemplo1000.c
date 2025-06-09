/*
Exemplo10 - v0.0. - 27 / 05 / 2025
Author: Felipe Silva Barros
*/

#include "io.h"

typedef struct s_int_Array
{
    int length;
    ints data;
    int ix;
} int_Array;

typedef int_Array *ref_int_Array;
ref_int_Array new_int_Array(int n)
{

    ref_int_Array tmpArray = (ref_int_Array)malloc(sizeof(int_Array));

    if (tmpArray == NULL)
    {
        IO_printf("\nERRO: Falta espaco.\n");
    }
    else
    {
        tmpArray->length = 0;
        tmpArray->data = NULL;
        tmpArray->ix = -1;
        if (n > 0)
        {
            tmpArray->length = n;
            tmpArray->data = (ints)malloc(n * sizeof(int));
            tmpArray->ix = 0;
        }
    }
    return (tmpArray);
}
void free_int_Array(ref_int_Array tmpArray)
{
    if (tmpArray != NULL)
    {
        if (tmpArray->data != NULL)
        {
            free(tmpArray->data);
        }
        free(tmpArray);
    }
}
void printIntArray(int_Array array)
{
    if (array.data)
    {
        for (array.ix = 0; array.ix < array.length; array.ix = array.ix + 1)
        {

            printf("%2d: %d\n", array.ix, array.data[array.ix]);
        }
    }
}
void method_01()
{

    int_Array array;
    array.length = 5;
    array.data = (ints)malloc(array.length * sizeof(int));
    if (array.data)
    {
        array.data[0] = 1;
        array.data[1] = 2;
        array.data[2] = 3;
        array.data[3] = 4;
        array.data[4] = 5;
    }

    IO_id("Method_01 - v0.0");

    printIntArray(array);

    if (array.data)
    {
        free(array.data);
    }

    IO_pause("Apertar ENTER para continuar");
}

int_Array IO_readintArray()
{

    chars text = IO_new_chars(STR_SIZE);
    static int_Array array;

    do
    {
        array.length = IO_readint("\nlength = ");
    } while (array.length <= 0);
    array.data = IO_new_ints(array.length);
    if (array.data == NULL)
    {
        array.length = 0;
    }
    else
    {
        for (array.ix = 0; array.ix < array.length; array.ix = array.ix + 1)
        {

            strcpy(text, STR_EMPTY);
            array.data[array.ix] = IO_readint(IO_concat(
                IO_concat(text, IO_toString_d(array.ix)), " : "));
        }
    }
    return (array);
}
void method_02()
{

    int_Array array;

    IO_id("Method_02 - v0.0");

    array = IO_readintArray();
    if (array.data)
    {

        IO_printf("\n");
        printIntArray(array);

        free(array.data);
    }

    IO_pause("Apertar ENTER para continuar");
}

void fprintIntArray(chars fileName, int_Array array)
{
    FILE *arquivo = fopen(fileName, "wt");

    fprintf(arquivo, "%d\n", array.length);
    if (array.data)
    {
        for (array.ix = 0; array.ix < array.length; array.ix = array.ix + 1)
        {

            fprintf(arquivo, "%d\n", array.data[array.ix]);
        }
    }

    fclose(arquivo);
}
void method_03()
{

    int_Array array;

    IO_id("Method_03 - v0.0");
    array = IO_readintArray();
    if (array.data)
    {

        IO_printf("\n");
        printIntArray(array);
        fprintIntArray("ARRAY1.TXT", array);

        free(array.data);
    }

    IO_pause("Apertar ENTER para continuar");
}

int freadArraySize(chars fileName)
{
    int n = 0;
    FILE *arquivo = fopen(fileName, "rt");
    if (arquivo)
    {

        fscanf(arquivo, "%d", &n);
        if (n <= 0)
        {
            IO_printf("\nERRO: Valor invalido.\n");
            n = 0;
        }
        fclose(arquivo);
    }

    return (n);
}
int_Array fIO_readintArray(chars fileName)
{
    int x = 0;
    int y = 0;
    FILE *arquivo = fopen(fileName, "rt");
    static int_Array array;

    if (arquivo)
    {

        fscanf(arquivo, "%d", &array.length);

        if (array.length <= 0)
        {
            IO_printf("\nERRO: Valor invalido.\n");
            array.length = 0;
        }
        else
        {

            array.data = IO_new_ints(array.length);
            if (array.data)
            {

                array.ix = 0;
                while (!feof(arquivo) &&
                       array.ix < array.length)
                {

                    fscanf(arquivo, "%d", &(array.data[array.ix]));

                    array.ix = array.ix + 1;
                }
            }
        }
    }

    return (array);
}
void method_04()
{

    int_Array array;

    IO_id("Method_04 - v0.0");

    array = fIO_readintArray("ARRAY1.TXT");
    if (array.data)
    {

        IO_printf("\n");
        printIntArray(array);

        free(array.data);
    }

    IO_pause("Apertar ENTER para continuar");
}

ref_int_Array copyIntArray(int_Array array)
{
    int x = 0;
    int y = 0;
    ref_int_Array copy;
    if (array.length <= 0)
    {
        IO_printf("\nERRO: Valor invalido.\n");
        array.length = 0;
    }
    else
    {

        copy = new_int_Array(array.length);

        if (copy)
        {
            copy->length = array.length;
            copy->data = IO_new_ints(copy->length);

            if (copy->data == NULL || array.data == NULL)
            {
                printf("\nERRO: Falta espaco ou dados.");
            }
            else
            {

                for (array.ix = 0; array.ix < array.length; array.ix = array.ix + 1)
                {

                    copy->data[array.ix] = array.data[array.ix];
                }
            }
        }
    }

    return (copy);
}
void method_05()
{
    int_Array array;
    ref_int_Array other;

    IO_id("Method_05 - v0.0");

    array = fIO_readintArray("ARRAY1.TXT");

    other = copyIntArray(array);
    if (array.data)
    {

        IO_printf("\nOriginal\n");
        printIntArray(array);

        IO_printf("\nCopia\n");
        printIntArray(*other);

        free(array.data);
        free(other->data);
        free(other);
    }

    IO_pause("Apertar ENTER para continuar");
}

typedef struct s_int_Matrix
{
    int rows;
    int columns;
    ints *data;
    int ix, iy;
} int_Matrix;

typedef int_Matrix *ref_int_Matrix;

ref_int_Matrix new_int_Matrix(int rows, int columns)
{

    ref_int_Matrix tmpMatrix = (ref_int_Matrix)malloc(sizeof(int_Matrix));

    if (tmpMatrix != NULL)
    {
        tmpMatrix->rows = 0;
        tmpMatrix->columns = 0;
        tmpMatrix->data = NULL;

        if (rows > 0 && columns > 0)
        {
            tmpMatrix->rows = rows;
            tmpMatrix->columns = columns;
            tmpMatrix->data = malloc(rows * sizeof(ints));
            if (tmpMatrix->data)
            {
                for (tmpMatrix->ix = 0;
                     tmpMatrix->ix < tmpMatrix->rows;
                     tmpMatrix->ix = tmpMatrix->ix + 1)
                {
                    tmpMatrix->data[tmpMatrix->ix] = (ints)malloc(columns * sizeof(int));
                }
            }
        }
        tmpMatrix->ix = 0;
        tmpMatrix->iy = 0;
    }
    return (tmpMatrix);
}

void free_int_Matrix(ref_int_Matrix matrix)
{

    if (matrix != NULL)
    {
        if (matrix->data != NULL)
        {
            for (matrix->ix = 0;
                 matrix->ix < matrix->rows;
                 matrix->ix = matrix->ix + 1)
            {
                free(matrix->data[matrix->ix]);
            }
            free(matrix->data);
        }
        free(matrix);
    }
}
void printIntMatrix(ref_int_Matrix matrix)
{

    if (matrix != NULL && matrix->data != NULL)
    {

        for (matrix->ix = 0; matrix->ix < matrix->rows; matrix->ix = matrix->ix + 1)
        {
            for (matrix->iy = 0; matrix->iy < matrix->columns; matrix->iy = matrix->iy + 1)
            {

                printf("%3d\t", matrix->data[matrix->ix][matrix->iy]);
            }
            printf("\n");
        }
    }
}
void method_06()
{

    ref_int_Matrix matrix = new_int_Matrix(3, 3);
    if (matrix != NULL && matrix->data != NULL)
    {
        matrix->data[0][0] = 1;
        matrix->data[0][1] = 2;
        matrix->data[0][2] = 3;
        matrix->data[1][0] = 3;
        matrix->data[1][1] = 4;
        matrix->data[1][2] = 5;
        matrix->data[2][0] = 6;
        matrix->data[2][1] = 7;
        matrix->data[2][2] = 8;
    }

    IO_id("Method_06 - v0.0");

    printIntMatrix(matrix);

    free_int_Matrix(matrix);

    IO_pause("Apertar ENTER para continuar");
}

ref_int_Matrix IO_readintMatrix()
{
    int rows = 0;
    int columns = 0;
    chars text = IO_new_chars(STR_SIZE);

    do
    {
        rows = IO_readint("\nrows = ");
    } while (rows <= 0);
    do
    {
        columns = IO_readint("\ncolumns = ");
    } while (columns <= 0);
    ref_int_Matrix matrix = new_int_Matrix(rows, columns);

    if (matrix != NULL)
    {
        if (matrix->data == NULL)
        {

            matrix->rows = 0;
            matrix->columns = 0;
            matrix->ix = 0;
            matrix->iy = 0;
        }
        else
        {

            for (matrix->ix = 0; matrix->ix < matrix->rows; matrix->ix = matrix->ix + 1)
            {
                for (matrix->iy = 0; matrix->iy < matrix->columns; matrix->iy = matrix->iy + 1)
                {

                    strcpy(text, STR_EMPTY);
                    matrix->data[matrix->ix][matrix->iy] = IO_readint(IO_concat(
                        IO_concat(IO_concat(text, IO_toString_d(matrix->ix)), ", "),
                        IO_concat(IO_concat(text, IO_toString_d(matrix->iy)), " : ")));
                }
                printf("\n");
            }
        }
    }

    return (matrix);
}
void method_07()
{

    ref_int_Matrix matrix = NULL;

    IO_id("Method_07 - v0.0");

    matrix = IO_readintMatrix();

    IO_printf("\n");
    printIntMatrix(matrix);

    free_int_Matrix(matrix);

    IO_pause("Apertar ENTER para continuar");
}

void fprintIntMatrix(chars fileName, ref_int_Matrix matrix)
{
    FILE *arquivo = fopen(fileName, "wt");
    if (matrix == NULL)
    {
        printf("\nERRO: Nao ha' dados.");
    }
    else
    {

        fprintf(arquivo, "%d\n", matrix->rows);
        fprintf(arquivo, "%d\n", matrix->columns);
        if (matrix->data != NULL)
        {

            for (matrix->ix = 0; matrix->ix < matrix->rows; matrix->ix = matrix->ix + 1)
            {
                for (matrix->iy = 0; matrix->iy < matrix->columns; matrix->iy = matrix->iy + 1)
                {

                    fprintf(arquivo, "%d\n", matrix->data[matrix->ix][matrix->iy]);
                }
            }
        }

        fclose(arquivo);
    }
}
void method_08()
{

    ref_int_Matrix matrix = NULL;

    IO_id("Method_08 - v0.0");

    matrix = IO_readintMatrix();

    fprintIntMatrix("MATRIX1.TXT", matrix);

    free_int_Matrix(matrix);

    IO_pause("Apertar ENTER para continuar");
}

ref_int_Matrix freadintMatrix(chars fileName)
{

    ref_int_Matrix matrix = NULL;
    int rows = 0;
    int columns = 0;
    FILE *arquivo = fopen(fileName, "rt");

    fscanf(arquivo, "%d", &rows);
    fscanf(arquivo, "%d", &columns);
    if (rows <= 0 || columns <= 0)
    {
        IO_printf("\nERRO: Valor invalido.\n");
    }
    else
    {
        matrix = new_int_Matrix(rows, columns);

        if (matrix != NULL && matrix->data == NULL)
        {

            matrix->rows = 0;
            matrix->columns = 0;
            matrix->ix = 0;
            matrix->iy = 0;
        }
        else
        {

            if (matrix != NULL)
            {

                matrix->ix = 0;
                while (!feof(arquivo) && matrix->ix < matrix->rows)
                {
                    matrix->iy = 0;
                    while (!feof(arquivo) && matrix->iy < matrix->columns)
                    {

                        fscanf(arquivo, "%d", &(matrix->data[matrix->ix][matrix->iy]));

                        matrix->iy = matrix->iy + 1;
                    }

                    matrix->ix = matrix->ix + 1;
                }
                matrix->ix = 0;
                matrix->iy = 0;
            }
        }
    }

    return (matrix);
}

void method_09()
{

    IO_id("Method_09 - v0.0");

    ref_int_Matrix matrix = freadintMatrix("MATRIX1.TXT");

    IO_printf("\n");
    printIntMatrix(matrix);

    free_int_Matrix(matrix);

    IO_pause("Apertar ENTER para continuar");
}

ref_int_Matrix copyIntMatrix(ref_int_Matrix matrix)
{
    ref_int_Matrix copy = NULL;
    if (matrix == NULL || matrix->data == NULL)
    {
        IO_printf("\nERRO: Faltam dados.\n");
    }
    else
    {
        if (matrix->rows <= 0 || matrix->columns <= 0)
        {
            IO_printf("\nERRO: Valor invalido.\n");
        }
        else
        {

            copy = new_int_Matrix(matrix->rows, matrix->columns);

            if (copy == NULL || copy->data == NULL)
            {
                printf("\nERRO: Falta espaco.");
            }
            else
            {
                for (copy->ix = 0; copy->ix < copy->rows; copy->ix = copy->ix + 1)
                {
                    for (copy->iy = 0; copy->iy < copy->columns; copy->iy = copy->iy + 1)
                    {

                        copy->data[copy->ix][copy->iy] = matrix->data[copy->ix][copy->iy];
                    }
                }
            }
        }
    }

    return (copy);
}

void method_10()
{

    ref_int_Matrix matrix = NULL;
    ref_int_Matrix other = NULL;

    IO_id("Method_10 - v0.0");

    matrix = freadintMatrix("MATRIX1.TXT");

    other = copyIntMatrix(matrix);

    IO_printf("\nOriginal\n");
    printIntMatrix(matrix);

    IO_printf("\nCopia\n");
    printIntMatrix(other);

    free_int_Matrix(matrix);
    free_int_Matrix(other);

    IO_pause("Apertar ENTER para continuar");
}

int main()
{
    int x = 0;

    do
    {
        printf("%s\n", "Exemplo1000 - Programa = v0.0");
        printf("%s\n", "Autor: Felipe Silva Barros");
        printf("\n");

        IO_println("Opcoes");
        IO_println("0 - Parar");
        IO_println("1 - Exemplo1001");
        IO_println("2 - Exemplo1002");
        IO_println("3 - Exemplo1003");
        IO_println("4 - Exemplo1004");
        IO_println("5 - Exemplo1005");
        IO_println("6 - Exemplo1006");
        IO_println("7 - Exemplo1007");
        IO_println("8 - Exemplo1008");
        IO_println("9 - Exemplo1009");
        IO_println("10 - Exemplo1010");
        x = IO_readint("\nEntrar com uma opcao: ");

        switch (x)
        {
        case 0:
            break;
        case 1:
            method_01();
            printf("\nAperte ENTER para continuar");
            getchar();
            break;
        case 2:

            method_02();
            getchar();
            break;

        case 3:

            method_03();
            getchar();
            break;

        case 4:
            method_04();
            getchar();
            break;

        case 5:
            method_05();
            getchar();
            break;

        case 6:
            method_06();
            getchar();
            break;
        case 7:
            method_07();
            getchar();
            break;

        case 8:
            method_08();
            getchar();
            break;

        case 9:
            method_09();
            getchar();
            break;

        case 10:
            method_10();
            getchar();
            break;
        default:
            printf("\nERRO: Opcao invalida.\n");
            break;
        }
    } while (x != 0);

    IO_pause("Apertar ENTER para terminar");
    return (0);
}
