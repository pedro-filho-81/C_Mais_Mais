/*
    retorna o quadrado de um inteiro
*/
#include <iostream>
#include <clocale>
#include <cstdlib>

using namespace std;

int quadrado( int );

int main()
{
    setlocale(LC_ALL, "Portuguese");

    int x = 10;

    cout << "O quadrado de 10 é = " << quadrado( x ) << endl;

    system("pause"); // pausa do programa

    return 0;

} // final principal

// função quadrado
int quadrado( int x )
{
    return x * x;
} // final função quadrado
