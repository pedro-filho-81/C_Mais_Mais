/*
 introduzindo valor aleatório.
*/
#include <iostream>
#include <clocale>
#include <iomanip>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{
    setlocale(LC_ALL, "Portuguese");

    srand( time(0) ); // gera a semente para rand

    // loop
    for(int i = 0; i < 20; i++)
    {
        if( i % 5 == 0)
            cout << endl;

        cout << setw(10) << (1 + rand() %6);;
    } // final for

    cout << endl;

    system("pause"); // pausa do programa

    return 0;

} // final principal
