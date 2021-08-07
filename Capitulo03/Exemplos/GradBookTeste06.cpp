/*
    1// Figura 3.13: fig03_13.cpp
    2// Demonstração de classe GradeBook depois de separar
    3// sua interface de sua implementação.
    Deitel, Harvey; Paul, Harvey. C++ Como Programar (p. 76). Edição do Kindle.
    Autor:
*/

#include <iostream>
#include <locale>
#include <string>
#include "GradBook06.h"

using namespace std;

// função principal
int main()
{
    // define a localização geográfica
    setlocale(LC_ALL, "portuguese");

    // cria objeto para classe grad book
    GradBook06 meuGradBook( "C++ como Programar." );
    GradBook06 meuGradBook2( "C# How to Program" );

    // mostra resultado
    //meuGradBook1.displayMessage();
//    cout << "meuGradBook1 criado para: " << meuGradBook1.displayMessage() << endl;
//    cout << "meuGradBook2 criado para: " << meuGradBook2.displayMessage() << endl;

    return 0; // programa terminado com sucesso

} // fim main
