/*
    utilizando o operador un�rio ( :: ) para acessar o valor da vari�vel global
    com o mesmo nome de uam vari�vel local
*/
#include <iostream>
#include <clocale>
#include <cstdlib>

using namespace std;

// vari�vel global
int valor = 7;

int main()
{
    setlocale(LC_ALL, "Portuguese");

    // vari�vel local
    double valor = 10.5;

    // exibir
    cout << "Usa a Vari�vel local de nome valor do tipo double = " << valor << endl;

    cout << "Usa a Vari�vel global de nome valor do tipo int\n"
            << "usando o operador un�rio ( :: ) valor = "
            << ::valor << endl;

    system("pause"); // pausa do programa

    return 0;

} // final principal
