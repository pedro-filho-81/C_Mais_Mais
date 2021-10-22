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

    // cria um vetor do tipo inteiro sem elementos
    vector<double> vetor;

    cout << "Entrada de dados do vetor:" << endl;

    // loop paa adicionar valores ao vetor
    for( double valor = 0; cin >> valor;)
    {
        vetor.push_back(valor);
    } // endl for

    // loop para percorrer os valores do vetor
    for( double valor : vetor )
        // imprime os valores do vetor
        cout << valor << " ";

    system("pause"); // pausa do programa

    return 0; // programa terminado com sucesso

} // fim main
