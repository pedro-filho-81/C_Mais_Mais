/*
    calcula a média e a mediana de um vector
    Pedro Filho, 23/10/2021
*/

#include <iostream>
#include <locale>
#include <vector>
#include <cstdlib>

using namespace std;

// função principal
int main()
{
    // localização geográfica
    setlocale( LC_ALL, "portuguese");

    // limpa a tela
    system("cls");

    // create vector number
    vector<int> number;

    // variable
    int sum = 0;

    // data input
    cout << "Digite vários inteiro para o vector: ";

    // loop to add value to the vector
    for( int value; cin >> value; )
    {
        number.push_back( value ); // put value into vector
        sum += value; // sum value
    } // end for

    cout << "number = ";

    // loop to show vector elements
    for( int value : number )
        cout << value << " "; // show elements

//    sort( number );

    // mostra o vetor organizado
    cout << "number organizado = ";

    // loop to show vector elements
    for( int value : number )
        cout << value << " "; // show elements

    // display answer
    cout << "\nSoma = " << sum
            << "\nMédia = " << sum / number.size()
            << "\nMediana = " << number[ number.size() / 2 ] << endl;

    cout << endl; // next line

    system("pause"); // pausa do programa

    return 0; // programa terminado com sucesso

} // fim main
