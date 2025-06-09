/*
Extra11 - v0.0. - 30 / 05 / 2025
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

    void lerArquivo(const char *nomeArquivo)
    {
        ifstream arquivo(nomeArquivo);
        if (arquivo.is_open())
        {
            arquivo >> tamanho;
            for (int i = 0; i < tamanho; i++)
            {
                arquivo >> dados[i];
            }
            arquivo.close();
        }
        else
        {
            cout << "Erro ao abrir o arquivo: " << nomeArquivo << endl;
        }
    }

    bool diferenteDe(Arranjo outro)
    {
        if (tamanho != outro.tamanho)
            return true;
        for (int i = 0; i < tamanho; i++)
        {
            if (dados[i] != outro.dados[i])
                return true;
        }
        return false;
    }

    void diferencaCom(Arranjo outro, Arranjo &resultado)
    {
        resultado.tamanho = tamanho;
        for (int i = 0; i < tamanho; i++)
        {
            resultado.dados[i] = dados[i] - outro.dados[i];
        }
    }
};

void pausar();

int main()
{
    Arranjo arr, outro, resultado;
    int escolha;

    cout << "Extras11 - Programa = v0.0";
    cout << "Autor: Felipe Silva Barros";
    cout << "\n";

    do
    {
        cout << "\nMENU\n";
        cout << "1 - extra_01\n";
        cout << "2 - extra_02\n";
        cout << "0 - Sair\nEscolha: ";
        cin >> escolha;

        if (escolha >= 2 && escolha <= 10)
            arr.lerArquivo("DADOS.TXT");

        switch (escolha)
        {
        case 1:
            outro.lerArquivo("DADOS.TXT");
            cout << (arr.diferenteDe(outro) ? "Diferentes" : "Iguais") << endl;
            pausar();
            break;
        case 2:
            outro.lerArquivo("DADOS.TXT");
            arr.diferencaCom(outro, resultado);
            for (int i = 0; i < resultado.tamanho; i++)
                cout << resultado.dados[i] << " ";
            cout << endl;
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