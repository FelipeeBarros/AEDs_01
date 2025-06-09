/*
Exercicio10 - v0.0. - 27 / 05 / 2025
Author: Felipe Silva Barros
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <stdbool.h>
#include "io.h"

void method_01()
{
    int inferior, superior, N;
    printf("Limite inferior: ");
    scanf("%d", &inferior);
    printf("Limite superior: ");
    scanf("%d", &superior);
    printf("Quantidade: ");
    scanf("%d", &N);

    srand(time(NULL));
    FILE *file = fopen("DADOS.TXT", "w");
    fprintf(file, "%d\n", N);

    for (int i = 0; i < N; i++)
    {
        int valor = inferior + rand() % (superior - inferior + 1);
        fprintf(file, "%d\n", valor);
    }
    fclose(file);
}

void method_02(void);
void method_03(void);
void method_04(void);
void method_05(void);
void method_06(void);
void method_07(void);
void method_08(void);
void method_09(void);
void method_10(void);

bool function_02(int valor, const char *filename)
{
    FILE *file = fopen(filename, "r");
    int N;
    fscanf(file, "%d", &N);

    for (int i = 0; i < N; i++)
    {
        int elemento;
        fscanf(file, "%d", &elemento);
        if (elemento == valor)
        {
            fclose(file);
            return true;
        }
    }
    fclose(file);
    return false;
}

bool function_03(const char *filename1, const char *filename2)
{
    FILE *file1 = fopen(filename1, "r");
    FILE *file2 = fopen(filename2, "r");
    int N1, N2;

    fscanf(file1, "%d", &N1);
    fscanf(file2, "%d", &N2);

    if (N1 != N2)
    {
        fclose(file1);
        fclose(file2);
        return false;
    }

    for (int i = 0; i < N1; i++)
    {
        int val1, val2;
        fscanf(file1, "%d", &val1);
        fscanf(file2, "%d", &val2);
        if (val1 != val2)
        {
            fclose(file1);
            fclose(file2);
            return false;
        }
    }

    fclose(file1);
    fclose(file2);
    return true;
}

void function_04(const char *filename1, const char *filename2, int constante)
{
    FILE *file1 = fopen(filename1, "r");
    FILE *file2 = fopen(filename2, "r");
    int N1, N2;

    fscanf(file1, "%d", &N1);
    fscanf(file2, "%d", &N2);

    if (N1 != N2)
    {
        printf("Tamanhos diferentes\n");
        fclose(file1);
        fclose(file2);
        return;
    }

    printf("Resultado:\n");
    for (int i = 0; i < N1; i++)
    {
        int val1, val2;
        fscanf(file1, "%d", &val1);
        fscanf(file2, "%d", &val2);
        printf("%d\n", val1 + constante * val2);
    }

    fclose(file1);
    fclose(file2);
}

bool function_05(const char *filename)
{
    FILE *file = fopen(filename, "r");
    int N;
    fscanf(file, "%d", &N);

    int anterior, atual;
    fscanf(file, "%d", &anterior);

    for (int i = 1; i < N; i++)
    {
        fscanf(file, "%d", &atual);
        if (atual > anterior)
        {
            fclose(file);
            return false;
        }
        anterior = atual;
    }

    fclose(file);
    return true;
}

void function_06()
{
    const char *filename = "MATRIZ.TXT";
    printf("\nLendo matriz de %s...\n", filename);
    
    FILE *file = fopen(filename, "r");
    if (!file) {
        printf("ERRO: Nao consegui abrir o arquivo!\n");
        return;
    }

    int rows, cols;
    if (fscanf(file, "%d %d", &rows, &cols) != 2 || rows <= 0 || cols <= 0) {
        printf("ERRO: Formato invalido ou dimensoes incorretas!\n");
        fclose(file);
        return;
    }

    printf("\nMatriz Transposta (%dx%d):\n", cols, rows);
    
    int **mat = (int**)malloc(rows * sizeof(int*));
    for (int i = 0; i < rows; i++) {
        mat[i] = (int*)malloc(cols * sizeof(int));
    }

    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            if (fscanf(file, "%d", &mat[i][j]) != 1) {
                printf("ERRO: Dados insuficientes!\n");
                
                for (int k = 0; k <= i; k++) free(mat[k]);
                free(mat);
                fclose(file);
                return;
            }
            if (i == 0) printf("%d", mat[i][j]);
            else printf(" %d", mat[i][j]);
        }
        if (i == rows-1) printf("\n");
    }

    for (int i = 0; i < rows; i++) free(mat[i]);
    free(mat);
    fclose(file);
}

bool function_07(const char *filename)
{
    FILE *file = fopen(filename, "r");
    int rows, cols;
    fscanf(file, "%d %d", &rows, &cols);

    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            int val;
            fscanf(file, "%d", &val);
            if (val != 0)
            {
                fclose(file);
                return false;
            }
        }
    }

    fclose(file);
    return true;
}

bool function_08(const char *filename1, const char *filename2)
{
    FILE *file1 = fopen(filename1, "r");
    FILE *file2 = fopen(filename2, "r");
    int rows1, cols1, rows2, cols2;

    fscanf(file1, "%d %d", &rows1, &cols1);
    fscanf(file2, "%d %d", &rows2, &cols2);

    if (rows1 != rows2 || cols1 != cols2)
    {
        fclose(file1);
        fclose(file2);
        return false;
    }

    for (int i = 0; i < rows1; i++)
    {
        for (int j = 0; j < cols1; j++)
        {
            int val1, val2;
            fscanf(file1, "%d", &val1);
            fscanf(file2, "%d", &val2);
            if (val1 != val2)
            {
                fclose(file1);
                fclose(file2);
                return false;
            }
        }
    }

    fclose(file1);
    fclose(file2);
    return true;
}

void function_09(const char *filename1, const char *filename2, int constante)
{
    FILE *file1 = fopen(filename1, "r");
    FILE *file2 = fopen(filename2, "r");
    int rows1, cols1, rows2, cols2;

    fscanf(file1, "%d %d", &rows1, &cols1);
    fscanf(file2, "%d %d", &rows2, &cols2);

    if (rows1 != rows2 || cols1 != cols2)
    {
        printf("Dimensoes incompativeis\n");
        fclose(file1);
        fclose(file2);
        return;
    }

    printf("Resultado (%dx%d):\n", rows1, cols1);
    for (int i = 0; i < rows1; i++)
    {
        for (int j = 0; j < cols1; j++)
        {
            int val1, val2;
            fscanf(file1, "%d", &val1);
            fscanf(file2, "%d", &val2);
            printf("%d ", val1 + constante * val2);
        }
        printf("\n");
    }

    fclose(file1);
    fclose(file2);
}

void function_10(const char *filename1, const char *filename2)
{
    FILE *file1 = fopen(filename1, "r");
    FILE *file2 = fopen(filename2, "r");
    int rows1, cols1, rows2, cols2;

    fscanf(file1, "%d %d", &rows1, &cols1);
    fscanf(file2, "%d %d", &rows2, &cols2);

    if (cols1 != rows2)
    {
        printf("Dimensoes incompativeis\n");
        fclose(file1);
        fclose(file2);
        return;
    }

    printf("Produto (%dx%d):\n", rows1, cols2);
    for (int i = 0; i < rows1; i++)
    {
        for (int j = 0; j < cols2; j++)
        {
            int sum = 0;
            for (int k = 0; k < cols1; k++)
            {
                int val1, val2;
                fscanf(file1, "%d", &val1);
                fscanf(file2, "%d", &val2);
                sum += val1 * val2;
            }
            printf("%d ", sum);
        }
        printf("\n");
    }

    fclose(file1);
    fclose(file2);
}

int main()
{
    int x = 0;

    do
    {
        printf("%s\n", "Exercicio1000 - Programa = v0.0");
        printf("%s\n", "Autor: Felipe Silva Barros");
        printf("\n");

        IO_println("Opcoes");
        IO_println("0 - Parar");
        IO_println("1 - Exercicio1001");
        IO_println("2 - Exercicio1002");
        IO_println("3 - Exercicio1003");
        IO_println("4 - Exercicio1004");
        IO_println("5 - Exercicio1005");
        IO_println("6 - Exercicio1006");
        IO_println("7 - Exercicio1007");
        IO_println("8 - Exercicio1008");
        IO_println("9 - Exercicio1009");
        IO_println("10 - Exercicio1010");
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
        {
            int valor;
            printf("Digite o valor a procurar: ");
            scanf("%d", &valor);
            bool encontrado = function_02(valor, "DADOS.TXT");
            printf("Valor %d %s encontrado.\n", valor, encontrado ? "foi" : "nao foi");
            printf("\nAperte ENTER para continuar");
            getchar();
            break;
        }
        case 3:
        {
            bool saoIguais = function_03("DADOS1.TXT", "DADOS2.TXT");
            printf("Os arranjos %s iguais.\n", saoIguais ? "sao" : "nao sao");
            printf("\nAperte ENTER para continuar");
            getchar();
            break;
        }
        case 4:
        {
            int constante;
            printf("Digite a constante para multiplicar: ");
            scanf("%d", &constante);
            function_04("DADOS1.TXT", "DADOS2.TXT", constante);
            printf("\nAperte ENTER para continuar");
            getchar();
            break;
        }
        case 5:
        {
            bool ehDecrescente = function_05("DADOS.TXT");
            printf("O arranjo %s decrescente.\n", ehDecrescente ? "eh" : "nao eh");
            printf("\nAperte ENTER para continuar");
            getchar();
            break;
        }
        case 6:
            function_06("MATRIZ.TXT");
            printf("\nAperte ENTER para continuar");
            getchar();
            break;
        case 7:
        {
            bool ehNula = function_07("MATRIZ.TXT");
            printf("A matriz %s nula.\n", ehNula ? "eh" : "nao eh");
            printf("\nAperte ENTER para continuar");
            getchar();
            break;
        }
        case 8:
        {
            bool saoIguais = function_08("MATRIZ1.TXT", "MATRIZ2.TXT");
            printf("As matrizes %s iguais.\n", saoIguais ? "sao" : "nao sao");
            printf("\nAperte ENTER para continuar");
            getchar();
            break;
        }
        case 9:
        {
            int constante;
            printf("Digite a constante para multiplicar: ");
            scanf("%d", &constante);
            function_09("MATRIZ1.TXT", "MATRIZ2.TXT", constante);
            printf("\nAperte ENTER para continuar");
            getchar();
            break;
        }
        case 10:
            function_10("MATRIZ1.TXT", "MATRIZ2.TXT");
            printf("\nAperte ENTER para continuar");
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
