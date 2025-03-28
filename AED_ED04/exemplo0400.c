/*
Exemplo0400 - v0.0. - 23 / 03 / 2025
Author: Felipe Silva Barros
*/

#include "io.h"

bool positive(int x)
{
    bool result = false;

    if (x > 0)
    {
        result = true;
    }
    return (result);
}

bool belongsTo(int x, int inferior, int superior)
{
    bool result = false;

    if (inferior < x && x < superior)
    {
        result = true;
    }
    return (result);
}

bool even(int x)
{
    bool result = false;

    if (x % 2 == 0)
    {
        result = true;
    }
    return (result);
}

bool isLowerCase(char x)
{
    bool result = false;

    if ('a' <= x && x <= 'z')
    {
        result = true;
    }
    return (result);
}

bool isDigit(char x)
{
    bool result = false;

    if ('0' <= x && x <= '9')
    {
        result = true;
    }
    return (result);
}

bool isADigit(char x)
{
    return ('0' <= x && x <= '9');
}

chars concatADigit(chars string, char digit)
{
    return (IO_concat(string, IO_toString_c(digit)));
}

void method_01(void)
{
    int quantidade = 0;
    int valor = 0;
    int controle = 0;

    IO_id("Method_01 - v0.0");
    quantidade = IO_readint("Entrar com uma quantidade: ");
    controle = 1;

    while (controle <= quantidade)
    {
        valor = IO_readint(IO_concat(
            IO_concat("", IO_toString_d(controle)),
            ": "));

        printf("\n%s%d", "valor = ", valor);

        controle = controle + 1;
    }

    IO_pause("Apertar ENTER para continuar");
}

void method_02(void)
{
    int quantidade = 0;
    int valor = 0;
    int controle = 0;
    int contador = 0;

    IO_id("Method_02 - v0.0");
    quantidade = IO_readint("Entrar com uma quantidade: ");
    controle = 1;

    while (controle <= quantidade)
    {
        valor = IO_readint(IO_concat(
            IO_concat("", IO_toString_d(controle)),
            ": "));

        if (positive(valor))
        {
            contador = contador + 1;
        }
        controle = controle + 1;
    }

    IO_printf("%s%d\n", "Positivos = ", contador);
    IO_pause("Apertar ENTER para continuar");
}

void method_03(void)
{
    int quantidade = 0;
    int valor = 0;
    int controle = 0;
    int contador = 0;

    IO_id("Method_03 - v0.0");
    quantidade = IO_readint("Entrar com uma quantidade: ");
    controle = 1;

    while (controle <= quantidade)
    {
        valor = IO_readint(IO_concat(
            IO_concat("", IO_toString_d(controle)),
            ": "));

        if (belongsTo(valor, 0, 100))
        {
            contador = contador + 1;
        }
        controle = controle + 1;
    }
    IO_printf("%s%d\n", "Positivos menores que 100 = ", contador);

    IO_pause("Apertar ENTER para continuar");
}

void method_04(void)
{
    int quantidade = 0;
    int valor = 0;
    int controle = 0;
    int contador = 0;

    IO_id("Method_04 - v0.0");
    quantidade = IO_readint("Entrar com uma quantidade: ");
    controle = 1;

    while (controle <= quantidade)
    {
        valor = IO_readint(IO_concat(
            IO_concat("", IO_toString_d(controle)),
            ": "));

        if (belongsTo(valor, 0, 100) && even(valor))
        {
            contador = contador + 1;
        }

        controle = controle + 1;
    }

    IO_printf("%s%d\n", "Positivos menores que 100 e pares = ", contador);
    IO_pause("Apertar ENTER para continuar");
}

void method_05(void)
{
    int quantidade = 0;
    int valor = 0;
    int controle = 0;
    int contador = 0;
    bool ok = false;

    IO_id("Method_05 - v0.0");
    quantidade = IO_readint("Entrar com uma quantidade: ");
    controle = 1;

    while (controle <= quantidade)
    {
        valor = IO_readint(IO_concat(
            IO_concat("", IO_toString_d(controle)),
            ": "));

        ok = belongsTo(valor, 0, 100);
        ok = ok && even(valor);
        if (ok)
        {
            contador = contador + 1;
        }
        controle = controle + 1;
    }

    IO_printf("%s%d\n", "Positivos menores que 100 e pares = ", contador);
    IO_pause("Apertar ENTER para continuar");
}

void method_06(void)
{
    chars palavra = IO_new_chars(STR_SIZE);
    int tamanho = 0;
    int posicao = 0;
    char simbolo = '_';
    int contador = 0;

    IO_id("Method_06 - v0.0");
    palavra = IO_readstring("Entrar com uma palavra: ");
    tamanho = strlen(palavra);

    for (posicao = 0; posicao < tamanho; posicao = posicao + 1)
    {
        simbolo = palavra[posicao];

        if (isLowerCase(simbolo))
        {
            contador = contador + 1;
        }
    }

    IO_printf("%s%d\n", "Minusculas = ", contador);
    IO_pause("Apertar ENTER para continuar");
}

void method_07(void)
{
    chars palavra = IO_new_chars(STR_SIZE);
    int tamanho = 0;
    int posicao = 0;
    char simbolo = '_';
    int contador = 0;

    IO_id("Method_07 - v0.0");
    palavra = IO_readstring("Entrar com uma palavra: ");
    tamanho = strlen(palavra);

    for (posicao = 0; posicao < tamanho; posicao = posicao + 1)
    {
        simbolo = palavra[posicao];

        if (isLowerCase(simbolo))
        {
            IO_printf("%c ", simbolo);
            contador = contador + 1;
        }
    }

    IO_printf("\n%s%d\n", "Minusculas = ", contador);
    IO_pause("Apertar ENTER para continuar");
}

void method_08(void)
{
    chars palavra = IO_new_chars(STR_SIZE);
    int tamanho = 0;
    int posicao = 0;
    char simbolo = '_';
    int contador = 0;
    chars minusculas = IO_new_chars(STR_SIZE);
    strcpy(minusculas, STR_EMPTY);

    IO_id("Method_08 - v0.0");
    palavra = IO_readstring("Entrar com uma palavra: ");
    tamanho = strlen(palavra);

    for (posicao = 0; posicao < tamanho; posicao = posicao + 1)
    {
        simbolo = palavra[posicao];

        if (isLowerCase(simbolo))
        {
            minusculas = IO_concat(minusculas, IO_toString_c(simbolo));
            contador = contador + 1;
        }
    }

    IO_printf("\n%s%d [%s]\n", "Minusculas = ", contador, minusculas);
    IO_pause("Apertar ENTER para continuar");
}

void method_09(void)
{
    chars palavra = IO_new_chars(STR_SIZE);
    int tamanho = 0;
    int posicao = 0;
    char simbolo = '_';
    int contador = 0;

    IO_id("Method_09 - v0.0");
    palavra = IO_readstring("Entrar com caracteres: ");
    tamanho = strlen(palavra);

    for (posicao = 0; posicao < tamanho; posicao = posicao + 1)
    {
        simbolo = palavra[posicao];
        if (isDigit(simbolo))
        {
            IO_printf("%c ", simbolo);
            contador = contador + 1;
        }
    }

    IO_printf("\n%s%d\n", "Algarismos = ", contador);
    IO_pause("Apertar ENTER para continuar");
}

void method_10(void)
{
    chars palavra = IO_new_chars(STR_SIZE);
    int tamanho = 0;
    int posicao = 0;
    char simbolo = '_';
    chars digitos = IO_new_chars(STR_SIZE);
    strcpy(digitos, STR_EMPTY);

    IO_id("Method_10 - v0.0");
    palavra = IO_readstring("Entrar com uma palavra: ");
    tamanho = strlen(palavra);

    for (posicao = 0; posicao < tamanho; posicao = posicao + 1)
    {
        simbolo = palavra[posicao];
        if (isADigit(simbolo))
        {
            digitos = concatADigit(digitos, simbolo);
        }
    }

    IO_printf("\n%s%d [%s]\n", "Algarismos = ", strlen(digitos), digitos);
    IO_pause("Apertar ENTER para continuar");
}

int main()
{
    int x = 0;

    do
    {
        printf("%s\n", "Exemplo0400 - Programa = v0.0");
        printf("%s\n", "Autor: Felipe Silva Barros");
        printf("\n");

        IO_println("Opcoes");
        IO_println("0 - Parar");
        IO_println("1 - Exemplo0401");
        IO_println("2 - Exemplo0402");
        IO_println("3 - Exemplo0403");
        IO_println("4 - Exemplo0404");
        IO_println("5 - Exemplo0405");
        IO_println("6 - Exemplo0406");
        IO_println("7 - Exemplo0407");
        IO_println("8 - Exemplo0408");
        IO_println("9 - Exemplo0409");
        IO_println("10 - Exemplo0410");
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