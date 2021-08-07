#include <iostream>
#include <string>
using namespace std;

#include "GradeBook.h"

int main()
{
    GradeBook meuGradeBook1( "C++ como programar" );
    cout << "meuGradeBook1 inicia o nome do curso:\n" << meuGradeBook1.getGradeBook() << endl;

    cout << "Hello world!" << endl;
    return 0;
}
