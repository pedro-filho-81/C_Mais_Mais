/*
    fatotial interativo
*/
#include <iostream>
#include <clocale>
#include <cstdlib>
#include <iomanip>

using namespace std;

long fatorial(long); // protótipo fatorial

int main()
{
    setlocale(LC_ALL, "Portuguese");

    for(int contar = 0; contar <= 10; contar++)
    {
        cout << setw(2) << "Fatorial de ( " << contar << " ) = " << fatorial(contar) << endl;
    }
    system("pause"); // pausa do programa

    return 0;

} // final principal

// função fatorial
long fatorial(long valor)
{
    long resultado = 1;

    for( long contador = valor; contador >= 1; contador-- )
    {
        resultado *= contador;
    } // final for

    return resultado;
} // final fatorial
