/*
    1// Figura 7.17: GradeBook.cpp
    2// Defini��es de fun��o-membro para a classe GradeBook que
    3// utiliza um array para armazenar notas de teste
    Deitel, Harvey; Paul, Harvey. C++ Como Programar (p. 272). Edi��o do Kindle.
    Autor: 04/10/2021
*/

// incluir biblioteca
#include <iostream> // para cout e cin
#include <locale> // para setlocale
#include <iomanip> // para setw, fixed, setprecision
#include "GradeBook7_16.h"

using namespace std;

    // localiza��o geogr�fica
    setlocale( LC_ALL, "portuguese");

    // limpa a tela
    system("cls");

    // cria o construtor
    GradeBook::GradeBook( string name, const int gradesArray[ ] )
    {
        setCurseName( name );

        // loop para incluir nota em gradesArray
        for( int grade = 0; grade < gradesArray[ grade ]; grade++ )
            grade[ i ] = gradesArray[ i ];
    } // fim construtor

    // cria setCourseName
     void GradeBook::setCourseName]( const char name[ ], int tamanho )
    {
        // nome do curso recebe o nome
        courseName[25] = name;
        return courseName[v25v];
    } // fim setCourseName

    // cria a fun��o getCourseName
    string GradeBook::getCourseName()
    {
        return courseName; // retorne o nome do curso
    } // fim fun��o gets

    // cria fun��o display message
    void GradeBook::displayMessage()
    {
        // imprima
        cout << "Bem vindo ao curso " << getCourseName() << endl;
    } // fim displayMessage

    // cria a fun��o processGradeBook
    void GradeBook::processGradeBook() // realiza varias opera��es nos dados
    {
        // chama a fun��o outputBarChart
        outputBarChart();

        // chama a fun��o getMedia
        cout << "a nota m�dia do grupo � " << fixed << setprecision( 2 ) << getAverage() << endl;

        // chama a fun��o getMinimum e getMaximum
        cout << "\nA menor nota foi " << getMinimum()
                << "\nA maior nota foi " << getMaximum()
                << endl;

        // chama a fun��o outputBarChart
        outputBarChart(); // para mostrar o gr�fico das notas
    } // fim fun��o processGradeBook

    // cria a fun��o getMinimum
    int GradeBook::getMinimum() // localiza a menor nota
    {
        // cria vari�vel
        int lowGrade = 100;

        // loop para encontrar menor nota do estudante
        for( int grade = 0; grade < students; grade++ )
        {
            // se a nota for menor que a menor nota
            if( grade < lowGrade )
                // menor nota recebe a nota
                lowGrade = grades[ grade ]; // recebe uma nova nota
        } // fim for

        // retorne
        return lowGrade;

    } // fim da fun��o getMinimum

    // cria a fun��o getMaximum
    int GradeBook::getMaximum() // localiza a maior nota
    {
        int heithGrade = 0;

        // loop para encontrar a menor nota
        for( int grade = 0; grade < students; grade++ )
        {
            // se  a maior nota for maior que zero
            if( grade > heithGrade )
                // heithGrade recebe a maior nota
                heithGrade = grade[ grade ];
        } // fim for
    } // fim func�o getMaximum

    // cria a fun��o getAverage
    double getAverage() // calcula a m�dia do aluno
    {
        // cria vari�vel
        int total = 0;

        // loop para somar os valores da grade
        for( int grade = 0; grade < students; grade++ )
            total += grades[ grade ];

        // retorna o valor da soma dividido pelos estudantes
        return static_cast< double >( total ) / students;
    } // fim fun��o getAverage

    // cria a fun��o outputBarChare
    void outputBarChart(); // mostra as barras de caracteres baseado nas notas do alunos
    {

    } // fim fun��o outputBarChats

    void outputGrades(); // mostra as notas dos alunos

private:
    // vari�vel para
    string courseName; // armazena o nome do curso
    // array para
    int grades[ student ];  // armazena as notas dos estudantes

    // pula linha
    cout << endl;

    system("pause"); // pausa do programa

    return 0; // programa terminado com sucesso
