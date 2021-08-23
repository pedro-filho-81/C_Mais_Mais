/*
    1// Figura 5.10: GradeBook.cpp
    2// Definições de função-membro para a classe GradeBook que
    3// utiliza uma instrução switch para contar as notas A, B, C, D e F.
    Deitel, Harvey; Paul, Harvey. C++ Como Programar (p. 152). Edição do Kindle.
    Autor:
*/

// incluir biblioteca
#include <iostream>
#include <locale>
#include "GradeBook5_9.h"

using namespace std;

GradeBook::GradeBook( string name )
{
    setCourseName( name );
    aCount = 0; // inicializa a contagem da nota A com zero
    bCount = 0; // inicializa a contagem da nota B com zero
    cCount = 0; // inicializa a contagem da nota C com zero
    dCount = 0; // inicializa a contagem da nota D com zero
    fCount = 0; // inicializa a contagem da nota F com zero
} // fim construtor

// cria a função para configurar o nome do curso com até 25 caracteres
void GradeBook::setCourseName( string name )
{
    // se o tiver até 25 caracteres
    if( name.length() == 25 )
    {
        // nome do curso recebe o nome
        courseName = name;

        cout << "Nome \" " << name << " \" Excedido o número de 25 caracteres.\n"
                << "Limite do nome do curso é de 25 caracteres\n " << endl;
    } // fim if

} // fim setCourseNome
