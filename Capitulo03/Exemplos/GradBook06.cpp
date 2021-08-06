/*
    1// Figura 3.12: GradeBook.cpp
    2// Definições de função-membro de GradeBook. Esse arquivo contém
    3// implementações das funções-membro prototipadas em GradeBook.h.
    Deitel, Harvey; Paul, Harvey. C++ Como Programar (p. 75). Edição do Kindle.
    Autor:
*/

#include <iostream>
#include <locale>
#include <string>
#include "GradBook06.h"

using namespace std;

class GradBook
{
public:
    // cria construtor
    GradBook( string nome )
    {
        setNomeDoCurso( nome );
    } // fim construtor

    void setNomeDoCurso( string nome )
    {
        nomeDoCurso = nome;
    } // fim set

    // cria get
    string getNomeDoCurso()
    {
        return nomeDoCurso;
    } // fim get

    // cria display
    void displayMessage()
    {
        cout << "Bem vindo ao curso: " << getNomeDoCurso() << endl;
    } // fim display
}; // fim classe
