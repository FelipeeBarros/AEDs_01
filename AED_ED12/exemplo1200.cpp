/*
Exemplo12 - v0.0. - 30 / 05 / 2025
Author: Felipe Silva Barros
*/

#include <iostream> // std::cin, std::cout, std:endl
#include <limits>   // std::numeric_limits
#include <string>   // para cadeias de caracteres

void pause(std::string text)
{
    std::string dummy;
    std::cin.clear();
    std::cout << std::endl
              << text;
    std::cin.ignore();
    std::getline(std::cin, dummy);
    std::cout << std::endl
              << std::endl;
}
#include "mymatrix.hpp"
using namespace std;

void method_00()
{
}

void method_01()
{

    Matrix<int> int_matrix(2, 2, 0);
    int_matrix.set(0, 0, 1);
    int_matrix.set(0, 1, 2);
    int_matrix.set(1, 0, 3);
    int_matrix.set(1, 1, 4);

    cout << "\nMethod_01 - v0.0\n"
         << endl;

    int_matrix.print();

    pause("Apertar ENTER para continuar");
}

void method_02()
{

    Matrix<int> matrix(2, 2, 0);

    cout << endl
         << "Method_02 - v0.0" << endl;

    matrix.read();

    matrix.print();

    pause("Apertar ENTER para continuar");
}

void method_03()
{

    Matrix<int> matrix(2, 2, 0);

    cout << endl
         << "Method_03 - v0.0" << endl;

    matrix.read();

    matrix.print();

    matrix.fprint("MATRIX1.TXT");

    pause("Apertar ENTER para continuar");
}

void method_04()
{

    Matrix<int> matrix(1, 1, 0);

    cout << endl
         << "Method_04 - v0.0" << endl;

    matrix.fread("MATRIX1.TXT");

    matrix.print();

    pause("Apertar ENTER para continuar");
}

void method_05()
{

    Matrix<int> int_matrix1(1, 1, 0);
    Matrix<int> int_matrix2(1, 1, 0);

    cout << endl
         << "Method_05 - v0.0" << endl;

    int_matrix1.fread("MATRIX1.TXT");

    cout << "\nOriginal\n"
         << endl;
    int_matrix1.print();

    int_matrix2 = int_matrix1;

    cout << "\nCopia\n"
         << endl;
    int_matrix2.print();

    pause("Apertar ENTER para continuar");
}

void method_06()
{

    Matrix<int> int_matrix(2, 2, 0);
    int_matrix.set(0, 0, 0);
    int_matrix.set(0, 1, 0);
    int_matrix.set(1, 0, 0);
    int_matrix.set(1, 1, 0);

    cout << endl
         << "Method_06 - v0.0" << endl;

    int_matrix.print();

    cout << "Zeros = " << int_matrix.isZeros() << endl;

    int_matrix.fread("MATRIX1.TXT");

    int_matrix.print();

    cout << "Zeros = " << int_matrix.isZeros() << endl;

    pause("Apertar ENTER para continuar");
}

void method_07()
{

    Matrix<int> int_matrix1(1, 1, 0);
    Matrix<int> int_matrix2(1, 1, 0);

    cout << endl
         << "Method_07 - v0.0" << endl;

    int_matrix1.fread("MATRIX1.TXT");

    cout << "\nMatrix_1\n";
    int_matrix1.print();

    int_matrix2 = int_matrix1;

    cout << "\nMatrix_2\n";
    int_matrix2.print();

    cout << "Diferentes = " << (int_matrix1 != int_matrix2) << endl;

    int_matrix2.set(0, 0, (-1));

    cout << "\nMatrix_1\n";
    int_matrix1.print();

    cout << "\nMatrix_2\n";
    int_matrix2.print();

    cout << "Diferentes = " << (int_matrix1 != int_matrix2) << endl;

    pause("Apertar ENTER para continuar");
}

void method_08()
{

    Matrix<int> int_matrix1(1, 1, 0);
    Matrix<int> int_matrix2(1, 1, 0);
    Matrix<int> int_matrix3(1, 1, 0);

    cout << endl
         << "Method_08 - v0.0" << endl;

    int_matrix1.fread("MATRIX1.TXT");

    cout << "\nMatrix_1\n";
    int_matrix1.print();

    int_matrix2 = int_matrix1;

    cout << "\nMatrix_2\n";
    int_matrix2.print();

    int_matrix3 = int_matrix1 - int_matrix2;

    cout << "\nMatrix_3\n";
    int_matrix3.print();

    pause("Apertar ENTER para continuar");
}

void method_09()
{

    Matrix<int> int_matrix1(2, 2, 0);
    int_matrix1.set(0, 0, 1);
    int_matrix1.set(0, 1, 0);
    int_matrix1.set(1, 0, 0);
    int_matrix1.set(1, 1, 1);
    Matrix<int> int_matrix2(1, 1, 0);
    Matrix<int> int_matrix3(1, 1, 0);

    cout << endl
         << "Method_09 - v0.0" << endl;

    int_matrix2.fread("MATRIX1.TXT");

    cout << "\nMatrix_1\n";
    int_matrix1.print();

    cout << "\nMatrix_2\n";
    int_matrix2.print();

    int_matrix3 = int_matrix1 * int_matrix2;

    cout << "\nMatrix_3\n";
    int_matrix3.print();

    pause("Apertar ENTER para continuar");
}

void method_10()
{

    Matrix<int> int_matrix(3, 3, 0);
    int x = 0;
    int y = 0;

    cout << endl
         << "Method_10 - v0.0" << endl;

    int_matrix.fread("MATRIX1.TXT");

    cout << "\nMatrix\n";
    int_matrix.print();

    for (int x = 0; x < int_matrix.getRows(); x = x + 1)
    {
        for (int y = 0; y < int_matrix.getColumns(); y = y + 1)
        {
            int_matrix.set(x, y, int_matrix.get(x, y) * (-1));
        }
    }

    cout << "\nMatrix\n";
    int_matrix.print();

    pause("Apertar ENTER para continuar");
}

int main(int argc, char **argv)
{
    // definir dado
    int x = 0; // definir variavel com valor inicial
    // repetir até desejar parar
    do
    {

        cout << "Exemplo1200 - Programa = v0.0\n " << endl;
        cout << "Autor: Felipe Silva Barros \n"
             << endl;
        // mostrar opcoes
        cout << "Opcoes " << endl;
        cout << " 0 - parar " << endl;
        cout << " 1 - " << endl;
        cout << " 2 - " << endl;
        cout << " 3 - " << endl;
        cout << " 4 - " << endl;
        cout << " 5 - " << endl;
        cout << " 6 - " << endl;
        cout << " 7 - " << endl;
        cout << " 8 - " << endl;
        cout << " 9 - " << endl;
        cout << "10 - " << endl;
        // ler do teclado
        cout << endl
             << "Entrar com uma opcao: ";
        cin >> x; // escolher acao
        switch (x)
        {
        case 0:
            method_00();
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
            cout << endl
                 << "ERRO: Valor invalido." << endl;
        } // end switch
    } while (x != 0);

    pause("Apertar ENTER para terminar");
    return (0);
} // end main ( )