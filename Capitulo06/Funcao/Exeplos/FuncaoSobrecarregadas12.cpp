/*
    função sobrecarregada, usa o mesmo nome com tipo diferente
*/
#include <iostream>
#include <clocale>
#include <cstdlib>

using namespace std;

int quadrado( int x)
{
    return x * x;
}

double quadrado( double x )
{
    return x * x;
}

int main()
{
    setlocale(LC_ALL, "Portuguese");

    cout << "O quadrado de 7 = " << quadrado( 7 ) << endl;
    cout << "\nO quadrado de 7,5 = " << quadrado(7.5) << endl;

    system("pause"); // pausa do programa

    return 0;

} // final principal
