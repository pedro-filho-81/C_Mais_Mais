/*
    1// Figura 7.18: fig07_18.cpp
    2// Cria um objeto GradeBook utilizando um array de notas.
    Deitel, Harvey; Paul, Harvey. C++ Como Programar (p. 275). Edição do Kindle.
    05/10/2021
*/
#include <iostream>
#include "C:\Users\samsung\Documents\GitHub\C_Mais_Mais\C_Mais_Mais\Capitulo07\Exemplos\GradeBook7_16.h"

using namespace std;

int main()
{
    // ARRAY de notas
    int gradesArray[ GradeBook::students ] =
    { 87, 68, 94, 100, 83, 78, 85, 91, 73, 87 };

    GradeBook meuGradeBook( "CS101 C++ como programar dos Deitel.", gradesArray );

//    chama afunção display
    meuGradeBook.displayMessage();

    meuGradeBook.processGradeBook();

    cout << "Hello world!" << endl;
    return 0;
} // fim main
