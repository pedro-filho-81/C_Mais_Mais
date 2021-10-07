/*
    1// Figura 7.24: GradeBook.cpp
    2// Defini��es de fun��o-membro para a classe GradeBook que
    3// utiliza um array bidimensional para armazenar notas.
    Deitel, Harvey; Paul, Harvey. C++ Como Programar (p. 283). Edi��o do Kindle.
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
    setCourseName( name ); // chama a fun��o e recebe o nome do curso

    //copia notas de gradesArray para grades
    for( int student = 0; student < students; student++ )
        for( int test = 0; test < tests; test++ )
            grades[ students ][ tests ] = gradesArray[ students ][ tests ];
} // fim construtor GradeBook

// cria a fun��o setCourseName
void GradeBook7_23::setCourseName( string name ) // configura o nome do curso
{
    courseName = name;
} // fim fun��o setCourseName

string GradeBook7_23::getCourseName() // retorna o nome do curso
{
    return courseName;
} // fim fun��o getCourseName

// cria fun��o displayMessage
void GradeBook7_23::displayMessage() // exibe uma mensagem de de boas-vindas
{
    cout << "Bem vindo ao curso " << getCourseName() << "!" << endl;
} // fim fun��o

// cria a fun��o processGrades
void GradeBook7_23::processGrades() // realiza v�rias opera��es de dadgros
{
    outputGrades(); // gera a sa�da das notas

    // chama as fun��es menor valor
    cout << "\nA menor nota foi " << getMinimum() << endl;

    // chama a fun��o maior valor
    cout << "A maior nota foi " << getMaximum() << endl;

    // gera sa�da do gr�fico de barras
    outputBarChart();

} // fim fun��o


// cria a fun��o getMinimum
int GradeBook7_23::getMinimum() // localiza a menor nota
{
    // vaari�vel
    int lowGrade = 100;

    // loop para pesquisar pelos estudantes
    for( int student = 0; student < students; student++ )
    {
        // loop para pesquisar pelo teste
        for( int test = 0; test < tests; test++ )

            // se a nota for menor que a lowGrade
            if( grades[ student ][ test ]  < lowGrade )

                // lowgrade recebe a nota
                lowGrade = grades[ student ][ test ];
    } // fim for studante

    // retorna a menor nota
    return lowGrade;

}  // fim fun��o

// cria a fun��o getMaximum
int getMaximum() // localiza a maior nota
{
    // cria vari�vel
    int heighGrade = 0; // para receber a maior nota

    // loop para os estudantes(linha)
    for( int student = 0; student < students; student++ )
    {
        // loop para os testes
        for( int test = 0; test < tests; test++ )

            // se matriz maior que heith
            if( grades[ student ][ test ] > heighGrade )

                heighGrade = grades[ student ][ test ];

    } // fim for externo

    // retorne heighGrades
    return heighGrade;

} // fim da fun��o get

    double getAverage( const int [], const int ); // calcula a m�dia das notas
    void outputBarChart(); // gera sa�da do gr�fico de barras das notas
    void outputGrades(); // gera a sa�da do conte�do da matris notas
