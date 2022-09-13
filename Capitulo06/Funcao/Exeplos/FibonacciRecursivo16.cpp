/*
    Fibonacci recursivo
    13/09/2022
*/
#include <iostream>
#include <clocale>
#include <cstdlib>
#include <iomanip>

using namespace std;

// protótipo
long fibonacci( long );

int main()
{
    setlocale(LC_ALL, "Portuguese");

    for(int contar = 0; contar <= 10; contar++)
    {
        cout << "fibonacci( " << contar << " ) = " << fibonacci(contar) << endl;
    }

    cout << "fibonacci( " << 20 << " ) = " << fibonacci(20) << endl;
    cout << "fibonacci( " << 30 << " ) = " << fibonacci(30) << endl;
    cout << "fibonacci( " << 35 << " ) = " << fibonacci(35) << endl;

    system("pause"); // pausa do programa

    return 0;

} // final principal

// fibonacci recursico
long fibonacci(long valor)
{
    if(valor == 0 || valor == 1)
        return valor;
    else
        return fibonacci(valor - 1) + fibonacci(valor - 2);
} // final fibonacci
