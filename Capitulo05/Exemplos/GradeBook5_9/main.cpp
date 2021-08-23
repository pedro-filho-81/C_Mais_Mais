/*
    1// Figura 5.9: GradeBook.h
    2// Definição da classe GradeBook que conta as notas A, B, C, D e F.
    3// As funções-membro são definidas no GradeBook.cpp
    Deitel, Harvey; Paul, Harvey. C++ Como Programar (p. 152). Edição do Kindle.
*/
#include <iostream>
#include <locale>
#include "GradeBook5_9.h"

using namespace std;

int main()
{
    // localização geográfica
    setlocale(LC_ALL, "portuguese");

    // limpa a tela
    system("cls");

    cout << "Hello world!" << endl;

    // pausa o programa
    system("pause");

    // fim do programa
    return 0;
} // fim main
