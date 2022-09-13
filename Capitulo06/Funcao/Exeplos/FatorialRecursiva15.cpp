/*
    função fatorial recursiva
    13/09/2022
*/
#include <iostream>
#include <clocale>
#include <cstdlib>
#include <iomanip>

using namespace std;

// protótipo
long fatorial( long);

int main()
{
    setlocale(LC_ALL, "Portuguese");

    // calcula o fatorial de 0 a 10
    for( int contar = 0; contar <= 10; contar++)
    {
        cout << setw(2) << contar << "! = " << fatorial(contar) << endl;
    }

    system("pause"); // pausa do programa

    return 0;

} // final principal

// função fatorial
long fatorial(long valor)
{
    if(valor <= 1)
        return 1;
    else
        return valor * fatorial(valor - 1);
} // final função
