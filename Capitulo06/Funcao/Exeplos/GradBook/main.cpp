/*
    cria o objeto GradeBook
*/
#include "GradeBook01.h"
using namespace std;

int main()
{
    // cria o objeto GradeBook
    GradeBook01 myGradeBook("Curso C++ como programar");

    // exibe
    myGradeBook.displaymessage();
    myGradeBook.inputGrades();
    myGradeBook.displayGradeReport();

    return 0;
}
