/*
    1// Figura 7.17: GradeBook.cpp
    2// Definições de função-membro para a classe GradeBook que
    3// utiliza um array para armazenar notas de teste
    Deitel, Harvey; Paul, Harvey. C++ Como Programar (p. 272). Edição do Kindle.
    Autor: 04/10/2021
*/

// incluir biblioteca
#include <iostream> // para cout e cin
#include <locale> // para setlocale
#include <iomanip> // para setw, fixed, setprecision
#include "GradeBook7_16.h"

using namespace std;

    // localização geográfica
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

    // cria a função getCourseName
    string GradeBook::getCourseName()
    {
        return courseName; // retorne o nome do curso
    } // fim função gets

    // cria função display message
    void GradeBook::displayMessage()
    {
        // imprima
        cout << "Bem vindo ao curso " << getCourseName() << endl;
    } // fim displayMessage

    // cria a função processGradeBook
    void GradeBook::processGradeBook() // realiza varias operações nos dados
    {
        // chama a função outputBarChart
        outputBarChart();

        // chama a função getMedia
        cout << "a nota média do grupo é " << fixed << setprecision( 2 ) << getAverage() << endl;

        // chama a função getMinimum e getMaximum
        cout << "\nA menor nota foi " << getMinimum()
                << "\nA maior nota foi " << getMaximum()
                << endl;

        // chama a função outputBarChart
        outputBarChart(); // para mostrar o gráfico das notas
    } // fim função processGradeBook

    // cria a função getMinimum
    int GradeBook::getMinimum() // localiza a menor nota
    {
        // cria variável
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

    } // fim da função getMinimum

    // cria a função getMaximum
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
    } // fim funcão getMaximum

    // cria a função getAverage
    double getAverage() // calcula a média do aluno
    {
        // cria variável
        int total = 0;

        // loop para somar os valores da grade
        for( int grade = 0; grade < students; grade++ )
            total += grades[ grade ];

        // retorna o valor da soma dividido pelos estudantes
        return static_cast< double >( total ) / students;
    } // fim função getAverage

    // cria a função outputBarChare
    void outputBarChart(); // mostra as barras de caracteres baseado nas notas do alunos
    {

    } // fim função outputBarChats

    void outputGrades(); // mostra as notas dos alunos

private:
    // variável para
    string courseName; // armazena o nome do curso
    // array para
    int grades[ student ];  // armazena as notas dos estudantes

    // pula linha
    cout << endl;

    system("pause"); // pausa do programa

    return 0; // programa terminado com sucesso
