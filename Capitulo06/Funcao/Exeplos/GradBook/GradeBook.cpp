#include <iostream>
#include "GradeBook01.h" // inclui a classe criada pelo prograador

using namespace std;

// cria construtor
GradeBook01::GradeBook01(string name)
{
    setCourseName(name);
    studentMaximum = 0;
} // final construtor

// função para configurar o nome do curso
void GradeBook01::setCourseName(string name)
{
    if(name.length() <= 25) // se nome tiver 25 ou menos caracteres
        courseName = name; // armazene o nome no nome do curso
    else // se não
    {
        courseName = name.substr(0, 25); // seleciona os primeiros 25 caracteres
        cout << "Name \" " << name << " \" Excede o tamanho máximo de 25 caracteres.\n"
        << "O nome do curso está limitado aos primeiros 25 caracteres.\n" << endl;
    } // final else
} // final função

// recupera o nome do curso
string GradeBook01::getCourseName()
{
    return courseName;
} // final getCourseName

// exibe a mensagem de boas-vindas
void GradeBook01::displaymessage()
{
    // chama getCourseName para mostrar o nome do curso
    cout << "Bem-vindo ao curso: " << getCourseName() << "!\n" << endl;
} // final da função displaymessage

// entrada dos dados
void GradeBook01::inputGrades()
{
    int grade1; // primeira nota
    int grade2; // segunda nota
    int grade3; // terceira nota

    // entrada das notas
    cout << "Entre com as 3 notas inteiras: ";
    cin >> grade1 >> grade2 >> grade3;

    // armazena as notas
    studentMaximum =  maximum(grade1, grade2, grade3);
} //  final inputGrades

// função maximum
int GradeBook01::maximum(int x, int y, int z)
{
    int maximumValue = x;

    if(y > maximumValue)
        maximumValue = y;

    else if(z > maximumValue)
        maximumValue = z;

    return maximumValue;
} // final maximumValue

// exibe o relatório das notas
void GradeBook01::displayGradeReport()
{
    // exibe a maior nota
    cout << "A maior nota foi: " << studentMaximum << endl;
} // final displayGradeReport
