/*
    passando valores para a fun��o por valor e por refer�ncia
*/
#include <iostream>
#include <clocale>
#include <cstdlib>

using namespace std;

// prot�tipos
int quadradoPorValor( int ); // passage por valor
int quadradoPorReferencia( int & ); // passage por refer�ncia

int main()
{
    setlocale(LC_ALL, "Portuguese");

    // vari�veis
    int x = 2; // para a fun��o por valor
    int y = 5; // para a fun��o por refer�ncia

    // exibir
    cout << "X antes da passage por valor = "
            << x << endl;
    cout << "X depois da passage por valor = "
            << quadradoPorValor( x ) << endl;

    cout << endl; // pula linha

    cout<< "Y antes da passagem por refer�ncia = "
            << y << endl;
    cout << "Y depois da passage por refer�ncia = "
            << quadradoPorReferencia( y ) << endl;

    cout << endl; // pula linha

    system("pause"); // pausa do programa

    return 0;

} // final principal

// fun��o por valor
int quadradoPorValor( int valor)
{
    return valor * valor;
} // fi valor

// fun��o por reference
int quadradoPorReferencia( int &valor)
{
    return valor *= valor;
}
