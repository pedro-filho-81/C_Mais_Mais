/*
    Autor:
*/

#include <iostream>
#include <locale>
#include <cstdlib>
#include <ctime>
using namespace std;

// fun��o principal
int main()
{
    // localiza��o geogr�fica
    setlocale( LC_ALL, "portuguese");

    // limpa a tela
    system("cls");

    srand( time( NULL) );

    cout << rand() % 5 << " ";

    system("pause"); // pausa do programa

    return 0; // programa terminado com sucesso

} // fim main
