/*
    1// Figura 7.24: GradeBook.cpp
    2// Definições de função-membro para a classe GradeBook que
    3// utiliza um array bidimensional para armazenar notas.
    Deitel, Harvey; Paul, Harvey. C++ Como Programar (p. 283). Edição do Kindle.
    Autor: 07/10/2021
*/

// incluir biblioteca
#include <iostream> // para cout, cin, endl, fixed
#include <iomanip> // para setw, setprecision
#include "GradeBook7_23.h" // para a classe

using namespace std;

// cria o construtor
GradeBook7_23::GradeBook( string name, const int gradesArray[][ tests ] )
{
    setCourseName( name ); // chama a função e recebe o nome do curso

    //copia notas de gradesArray para grades
    for( int student = 0; student < students; student++ )
        for( int test = 0; test < tests; test++ )
            grades[ students ][ tests ] = gradesArray[ students ][ tests ];
} // fim construtor GradeBook

// cria a função setCourseName
void setCourseName( string name ) // configura o nome do curso
{
    courseName = name;
} // fim função setCourseName

string getCourseName() // retorna o nome do curso
{
    return courseName;
} // fim função getCourseName

    void displayMessage(); // exibe uma mensagem de de boas-vindas
    void processGrades(); // realiza várias operações de dados
    int getMinimum(); // localiza a menor nota
    int getMaximum(); // localiza a maior nota
    double getAverage( const int [], const int ); // calcula a média das notas
    void outputBarChart(); // gera saída do gráfico de barras das notas
    void outputGrades(); // gera a saída do conteúdo da matris notas
