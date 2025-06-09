/*
Exercicio11 - v0.0. - 30 / 05 / 2025
Author: Felipe Silva Barros
*/

#include <iostream>
#include <fstream>
using namespace std;

const int MAX = 1000;

struct Arranjo
{
    int dados[MAX];
    int tamanho;

    void lerQuantidadeEGerarValores(int inferior, int superior)
    {
        cout << "Digite a quantidade de elementos: ";
        cin >> tamanho;

        for (int i = 0; i < tamanho; i++)
        {
            dados[i] = inferior + rand() % (superior - inferior + 1);
        }

        ofstream arquivo("DADOS.TXT");
        arquivo << tamanho << endl;
        for (int i = 0; i < tamanho; i++)
        {
            arquivo << dados[i] << endl;
        }
        arquivo.close();
    }

    void lerArquivo(const char *nomeArquivo)
    {
        ifstream arquivo(nomeArquivo);
        arquivo >> tamanho;
        for (int i = 0; i < tamanho; i++)
        {
            arquivo >> dados[i];
        }
        arquivo.close();
    }

    int maiorImpar()
    {
        int maior = -1;
        for (int i = 0; i < tamanho; i++)
        {
            if (dados[i] % 2 != 0 && (maior == -1 || dados[i] > maior))
            {
                maior = dados[i];
            }
        }
        return maior;
    }

    int maiorImparMultiplo3()
    {
        int maior = -1;
        for (int i = 0; i < tamanho; i++)
        {
            if (dados[i] % 2 != 0 && dados[i] % 3 == 0 && (maior == -1 || dados[i] > maior))
            {
                maior = dados[i];
            }
        }
        return maior;
    }

    int somaIntervalo(int inicio, int fim)
    {
        int soma = 0;
        for (int i = inicio; i <= fim; i++)
        {
            soma += dados[i];
        }
        return soma;
    }

    float mediaIntervalo(int inicio, int fim)
    {
        int soma = 0;
        for (int i = inicio; i <= fim; i++)
        {
            soma += dados[i];
        }
        return (float)soma / (fim - inicio + 1);
    }

    bool todosMaioresQue100()
    {
        for (int i = 0; i < tamanho; i++)
        {
            if (dados[i] <= 100)
                return false;
        }
        return true;
    }

    bool estaDecrescente()
    {
        bool ordenado = true;
        for (int i = 0; i < tamanho - 1; i++)
        {
            if (dados[i] < dados[i + 1])
                ordenado = false;
        }
        return ordenado;
    }

    bool contemValorNoIntervalo(int valor, int inicio, int fim)
    {
        bool encontrado = false;
        for (int i = inicio; i <= fim; i++)
        {
            if (dados[i] == valor)
                encontrado = true;
        }
        return encontrado;
    }

    void escalar(int constante, int inicio, int fim)
    {
        for (int i = inicio; i <= fim; i++)
        {
            dados[i] *= constante;
        }
    }

    void ordenarDecrescente()
    {
        for (int i = 0; i < tamanho - 1; i++)
        {
            for (int j = i + 1; j < tamanho; j++)
            {
                if (dados[i] < dados[j])
                {
                    int temp = dados[i];
                    dados[i] = dados[j];
                    dados[j] = temp;
                }
            }
        }
    }
};

void pausar();

int main()
{
    Arranjo arr, outro, resultado;
    int escolha;

    cout << "Exercicio1100 - Programa = v0.0";
    cout << "Autor: Felipe Silva Barros";
    cout << "\n";

    do
    {
        cout << "\nMENU\n";
        cout << "1 - Exercicio1111\n";
        cout << "2 - Exercicio1112\n";
        cout << "3 - Exercicio1113\n";
        cout << "4 - Exercicio1114\n";
        cout << "5 - Exercicio1115\n";
        cout << "6 - Exercicio1116\n";
        cout << "7 - Exercicio1117\n";
        cout << "8 - Exercicio1118\n";
        cout << "9 - Exercicio1119\n";
        cout << "10 - Exercicio1120\n";
        cout << "0 - Sair\nEscolha: ";
        cin >> escolha;

        if (escolha >= 2 && escolha <= 10)
            arr.lerArquivo("DADOS.TXT");

        switch (escolha)
        {
        case 1:
            arr.lerQuantidadeEGerarValores(1, 999);
            pausar();
            break;
        case 2:
            cout << "Maior impar: " << arr.maiorImpar() << endl;
            pausar();
            break;
        case 3:
            cout << "Maior impar multiplo de 3: " << arr.maiorImparMultiplo3() << endl;
            pausar();
            break;
        case 4:
        {
            int i, f;
            cout << "Inicio e fim: ";
            cin >> i >> f;
            cout << "Soma: " << arr.somaIntervalo(i, f) << endl;
            pausar();
            break;
        }
        case 5:
        {
            int i, f;
            cout << "Inicio e fim: ";
            cin >> i >> f;
            cout << "Media: " << arr.mediaIntervalo(i, f) << endl;
            pausar();
            break;
        }
        case 6:
            cout << (arr.todosMaioresQue100() ? "Todos > 100" : "Nem todos > 100") << endl;
            pausar();
            break;
        case 7:
            cout << (arr.estaDecrescente() ? "Esta decrescente" : "Nao esta decrescente") << endl;
            pausar();
            break;
        case 8:
        {
            int v, i, f;
            cout << "Valor, inicio, fim: ";
            cin >> v >> i >> f;
            cout << (arr.contemValorNoIntervalo(v, i, f) ? "Existe" : "Nao existe") << endl;
            pausar();
            break;
        }
        case 9:
        {
            int c, i, f;
            cout << "Constante, inicio, fim: ";
            cin >> c >> i >> f;
            arr.escalar(c, i, f);
            pausar();
            break;
        }
        case 10:
            arr.ordenarDecrescente();
            pausar();
            break;
        }

    } while (escolha != 0);

    return 0;
}

void pausar()
{
    std::cout << "\nAperte ENTER para continuar";
    std::cin.ignore(); // limpa qualquer entrada anterior
    std::cin.get();    // espera o ENTER
}