/*
    passando valores para a função por valor e por referência
*/
#include <iostream>
#include <clocale>
#include <cstdlib>

using namespace std;

// protôtipos
int quadradoPorValor( int ); // passage por valor
int quadradoPorReferencia( int & ); // passage por referência

int main()
{
    setlocale(LC_ALL, "Portuguese");

    // variáveis
    int x = 2; // para a função por valor
    int y = 5; // para a função por referência

    // exibir
    cout << "X antes da passage por valor = "
            << x << endl;
    cout << "X depois da passage por valor = "
            << quadradoPorValor( x ) << endl;

    cout << endl; // pula linha

    cout<< "Y antes da passagem por referência = "
            << y << endl;
    cout << "Y depois da passage por referência = "
            << quadradoPorReferencia( y ) << endl;

    cout << endl; // pula linha

    system("pause"); // pausa do programa

    return 0;

} // final principal

// função por valor
int quadradoPorValor( int valor)
{
    return valor * valor;
} // fi valor

// função por reference
int quadradoPorReferencia( int &valor)
{
    return valor *= valor;
}
