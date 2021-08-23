/*
    1// Figura 5.10: GradeBook.cpp
    2// Defini��es de fun��o-membro para a classe GradeBook que
    3// utiliza uma instru��o switch para contar as notas A, B, C, D e F.
    Deitel, Harvey; Paul, Harvey. C++ Como Programar (p. 152). Edi��o do Kindle.
    Autor:
*/

// incluir biblioteca
#include <iostream>
#include <locale>
#include "GradeBook5_9.h"

using namespace std;

GradeBook::GradeBook( string name )
{
    aCount = 0; // inicializa a contagem da nota A com zero
    bCount = 0; // inicializa a contagem da nota B com zero
    cCount = 0; // inicializa a contagem da nota C com zero
    dCount = 0; // inicializa a contagem da nota D com zero
    fCount = 0; // inicializa a contagem da nota F com zero
} // fim construtor

// cria a fun��o para configurar o nome do curso com at� 25 caracteres
void GradeBook::setCourseName( string name )
{
    // se o tiver at� 25 caracteres
    if( name.length() == 25 )
    {
        // nome do curso recebe o nome
        courseName = name;

        cout << "Nome \" " << name << " \" Excedido o n�mero de 25 caracteres.\n"
                << "Limite do nome do curso � de 25 caracteres\n " << endl;
    } // fim if

} // fim setCourseNome
