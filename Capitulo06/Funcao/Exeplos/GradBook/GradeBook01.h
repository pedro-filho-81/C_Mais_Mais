// Define a classe GradeBook
// �s fun��es-membro s�o definidas no GradeBook.cpp
#include <string>

using namespace std;

// defini��o da classe grade book
class GradeBook01
{
public:
    GradeBook01( string ); // construtor
    void setCourseName( string ); // configura o nome do curso
    string getCourseName(); // recupera o nome do curso
    void displaymessage(); // mostra a mensagem de boas-vindas
    void inputGrades(); // insere tr�s notas inserida pelo usu�rio
    void displayGradeReport(); // exibe um relat�rio baseado nas notas
    int maximum(int, int, int); // detemina o maior valor das tr�s notas
private:
    string courseName; // para o nome do curso
    int studentMaximum; // maior das tr�s notas
}; // final da classe
