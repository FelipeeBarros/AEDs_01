/*
Exercicio12 - v0.0. - 30 / 05 / 2025
Author: Felipe Silva Barros
*/

#include <iostream>
#include <fstream>
#include <cstdlib>
#include <ctime>
using namespace std;

const int MAX = 100;

struct Matriz
{
    int dados[MAX][MAX];
    int linhas, colunas;

    void gerarAleatorios(int l, int c, int inf, int sup)
    {
        linhas = l;
        colunas = c;
        ofstream arquivo("DADOS.TXT");
        arquivo << linhas << " " << colunas << endl;
        srand(time(0));
        for (int i = 0; i < linhas; i++)
        {
            for (int j = 0; j < colunas; j++)
            {
                dados[i][j] = inf + rand() % (sup - inf + 1);a
                arquivo << dados[i][j] << " ";
            }
            arquivo << endl;
        }
        arquivo.close();
    }

    void lerArquivo(const char *nome)
    {
        ifstream arquivo(nome);
        if (arquivo.is_open())
        {
            arquivo >> linhas >> colunas;
            for (int i = 0; i < linhas; i++)
                for (int j = 0; j < colunas; j++)
                    arquivo >> dados[i][j];
            arquivo.close();
        }
        else
            cout << "Erro ao abrir o arquivo." << endl;
    }

    void escalar(int escalar)
    {
        for (int i = 0; i < linhas; i++)
            for (int j = 0; j < colunas; j++)
                dados[i][j] *= escalar;
    }

    bool identidade()
    {
        if (linhas != colunas)
            return false;
        for (int i = 0; i < linhas; i++)
            for (int j = 0; j < colunas; j++)
                if ((i == j && dados[i][j] != 1) || (i != j && dados[i][j] != 0))
                    return false;
        return true;
    }

    bool igual(Matriz m)
    {
        if (linhas != m.linhas || colunas != m.colunas)
            return false;
        for (int i = 0; i < linhas; i++)
            for (int j = 0; j < colunas; j++)
                if (dados[i][j] != m.dados[i][j])
                    return false;
        return true;
    }

    Matriz somar(Matriz m)
    {
        Matriz resultado;
        resultado.linhas = linhas;
        resultado.colunas = colunas;
        for (int i = 0; i < linhas; i++)
            for (int j = 0; j < colunas; j++)
                resultado.dados[i][j] = dados[i][j] + m.dados[i][j];
        return resultado;
    }

    void somarLinhas(int l1, int l2, int constante)
    {
        for (int j = 0; j < colunas; j++)
            dados[l1][j] += constante * dados[l2][j];
    }

    void subtrairLinhas(int l1, int l2, int constante)
    {
        for (int j = 0; j < colunas; j++)
            dados[l1][j] -= constante * dados[l2][j];
    }

    int procurarLinha(int valor)
    {
        for (int i = 0; i < linhas; i++)
            for (int j = 0; j < colunas; j++)
                if (dados[i][j] == valor)
                    return i;
        return -1;
    }

    int procurarColuna(int valor)
    {
        for (int j = 0; j < colunas; j++)
            for (int i = 0; i < linhas; i++)
                if (dados[i][j] == valor)
                    return j;
        return -1;
    }

    void transpor()
    {
        Matriz temp;
        temp.linhas = colunas;
        temp.colunas = linhas;
        for (int i = 0; i < linhas; i++)
            for (int j = 0; j < colunas; j++)
                temp.dados[j][i] = dados[i][j];
        *this = temp;
    }

    void exibir()
    {
        for (int i = 0; i < linhas; i++)
        {
            for (int j = 0; j < colunas; j++)
                cout << dados[i][j] << " ";
            cout << endl;
        }
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
    Matriz mat1, mat2, resultado;
    int op;
    do
    {
        cout << "\nMenu de opcoes:\n";
        cout << "1 - Exercicio1211\n";
        cout << "2 - Exercicio1212\n";
        cout << "3 - Exercicio1213\n";
        cout << "4 - Exercicio1214\n";
        cout << "5 - Exercicio1215\n";
        cout << "6 - Exercicio1216\n";
        cout << "7 - Exercicio1217\n";
        cout << "8 - Exercicio1218\n";
        cout << "9 - Exercicio1219\n";
        cout << "10 - Exercicio1220\n";
        cout << "0 - Sair\nOpcao: ";
        cin >> op;

        switch (op)
        {
        case 1:
            int m, n;
            cout << "Linhas e colunas: ";
            cin >> m >> n;
            mat1.gerarAleatorios(m, n, 1, 100);
            break;
        case 2:
            mat1.lerArquivo("DADOS.TXT");
            int esc;
            cout << "Escalar por: ";
            cin >> esc;
            mat1.escalar(esc);
            mat1.exibir();
            break;
        case 3:
            mat1.lerArquivo("DADOS.TXT");
            cout << (mat1.identidade() ? "Identidade" : "Nao identidade") << endl;
            break;
        case 4:
            mat1.lerArquivo("DADOS1.TXT");
            mat2.lerArquivo("DADOS2.TXT");
            cout << (mat1.igual(mat2) ? "Iguais" : "Diferentes") << endl;
            break;
        case 5:
            mat1.lerArquivo("DADOS1.TXT");
            mat2.lerArquivo("DADOS2.TXT");
            resultado = mat1.somar(mat2);
            resultado.exibir();
            break;
        case 6:
            mat1.lerArquivo("DADOS.TXT");
            int l1, l2, c1;
            cout << "Linha1, Linha2, constante: ";
            cin >> l1 >> l2 >> c1;
            mat1.somarLinhas(l1, l2, c1);
            mat1.exibir();
            break;
        case 7:
            mat1.lerArquivo("DADOS.TXT");
            cout << "Linha1, Linha2, constante: ";
            cin >> l1 >> l2 >> c1;
            mat1.subtrairLinhas(l1, l2, c1);
            mat1.exibir();
            break;
        case 8:
            mat1.lerArquivo("DADOS.TXT");
            int procurado;
            cout << "Valor a procurar: ";
            cin >> procurado;
            cout << "Linha: " << mat1.procurarLinha(procurado) << endl;
            break;
        case 9:
            mat1.lerArquivo("DADOS.TXT");
            cout << "Valor a procurar: ";
            cin >> procurado;
            cout << "Coluna: " << mat1.procurarColuna(procurado) << endl;
            break;
        case 10:
            mat1.lerArquivo("DADOS.TXT");
            mat1.transpor();
            mat1.exibir();
            break;
        }

        if (op != 0)
            pausar();

    } while (op != 0);

    return 0;
}