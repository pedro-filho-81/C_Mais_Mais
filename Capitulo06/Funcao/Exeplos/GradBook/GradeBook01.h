// Define a classe GradeBook
// às funções-membro são definidas no GradeBook.cpp
#include <string>

using namespace std;

// definição da classe grade book
class GradeBook01
{
public:
    GradeBook01( string ); // construtor
    void setCourseName( string ); // configura o nome do curso
    string getCourseName(); // recupera o nome do curso
    void displaymessage(); // mostra a mensagem de boas-vindas
    void inputGrades(); // insere três notas inserida pelo usuário
    void displayGradeReport(); // exibe um relatório baseado nas notas
    int maximum(int, int, int); // detemina o maior valor das três notas
private:
    string courseName; // para o nome do curso
    int studentMaximum; // maior das três notas
}; // final da classe
