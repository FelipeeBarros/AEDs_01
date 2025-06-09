/*
Extra12 - v0.0. - 30 / 05 / 2025
Author: Felipe Silva Barros
*/

#include <iostream>
#include <fstream>
#include <cstdlib>
#include <ctime>

#define MAX 100

using namespace std;

class Matrix
{
private:
    int data[MAX][MAX];
    int rows, cols;

public:
    Matrix()
    {
        rows = 0;
        cols = 0;
    }

    void loadFromFile(string filename)
    {
        ifstream fin(filename.c_str());
        fin >> rows >> cols;
        for (int i = 0; i < rows; i++)
            for (int j = 0; j < cols; j++)
                fin >> data[i][j];
        fin.close();
    }

    void show()
    {
        for (int i = 0; i < rows; i++)
        {
            for (int j = 0; j < cols; j++)
                cout << data[i][j] << " ";
            cout << endl;
        }
    }

    Matrix multiply(Matrix m2)
    {
        Matrix result;
        if (cols != m2.rows)
        {
            cout << "Multiplicacao invalida.\n";
            return result;
        }
        result.rows = rows;
        result.cols = m2.cols;
        for (int i = 0; i < rows; i++)
        {
            for (int j = 0; j < m2.cols; j++)
            {
                result.data[i][j] = 0;
                for (int k = 0; k < cols; k++)
                {
                    result.data[i][j] += data[i][k] * m2.data[k][j];
                }
            }
        }
        return result;
    }

    int sumMainDiagonal()
    {
        if (rows != cols)
            return -1;
        int sum = 0;
        for (int i = 0; i < rows; i++)
            sum += data[i][i];
        return sum;
    }
};

void pausar()
{
    cout << "\nPressione ENTER para continuar.";
    cin.ignore();
    cin.get();
}

int main()
{
    Matrix m1, m2, res;
    int escolha;

    cout << "Extras12 - Programa = v0.0\n";
    cout << "Autor: Felipe Silva Barros\n";

    do
    {
        cout << "\nMENU\n";
        cout << "1 - Extra_01\n";
        cout << "2 - Extra_02\n";
        cout << "0 - Sair\nEscolha: ";
        cin >> escolha;

        switch (escolha)
        {
        case 1:
            m1.loadFromFile("DADOS1.TXT");
            m2.loadFromFile("DADOS2.TXT");
            cout << "M1 * M2:\n";
            res = m1.multiply(m2);
            res.show();
            pausar();
            break;

        case 2:
            m1.loadFromFile("DADOS1.TXT");
            cout << "Soma da diagonal principal de M1: ";
            int diagSum;
            diagSum = m1.sumMainDiagonal();
            if (diagSum == -1)
                cout << "Nao e matriz quadrada.\n";
            else
                cout << diagSum << endl;
            pausar();
            break;

        case 0:
            pausar();
            break;

        default:
            cout << "Opcao invalida.\n";
            break;
        }
    } while (escolha != 0);

    return 0;
}