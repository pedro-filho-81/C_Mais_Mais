/*
    adicionando valores ao vetor com push_back()
    22/10/2021
*/

#include <iostream>
#include <locale>
#include <vector>

using namespace std;

// função principal
int main()
{
    // localização geográfica
    setlocale( LC_ALL, "portuguese");

    // limpa a tela
    system("cls");

    // cria um vetor do tipo double sem elementos
    vector<double> vetor;

    // header
    cout << "ADICIONA VALORES COM PUSH_BACK" << endl;

    cout << "Digite qualquer número ( um caractere = sair ): " << endl;

    // loop para adicionar valores ao vetor
    for( valor = 0; cin >> valor;)
    {
        // adiciona um elemento no final do vetor
        vetor.push_back(valor);
    } // endl for

    // loop para percorrer os valores do vetor
    for( double valor : vetor )
        // imprime os valores do vetor
        cout << valor << " ";

    cout << endl; // next line

    system("pause"); // pausa do programa

    return 0; // programa terminado com sucesso

} // fim main
