/*
    utilizando o operador unário ( :: ) para acessar o valor da variável global
    com o mesmo nome de uam variável local
*/
#include <iostream>
#include <clocale>
#include <cstdlib>

using namespace std;

// variável global
int valor = 7;

int main()
{
    setlocale(LC_ALL, "Portuguese");

    // variável local
    double valor = 10.5;

    // exibir
    cout << "Usa a Variável local de nome valor do tipo double = " << valor << endl;

    cout << "Usa a Variável global de nome valor do tipo int\n"
            << "usando o operador unário ( :: ) valor = "
            << ::valor << endl;

    system("pause"); // pausa do programa

    return 0;

} // final principal
