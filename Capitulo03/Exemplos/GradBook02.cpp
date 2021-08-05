/*
    Cria a classe Grad Book 02
    Autor:
*/

#include <iostream>
#include <locale>

using namespace std;

// cria a classe GradBook
class GradBook
{
public:
    // cria a fun��o membro displayMessage
    void displayMessage( string  nomeDoCurso )
    {
        // mostra a mensagem
        cout << "Bem vindo ao curso:\n" << nomeDoCurso << "!" << endl;
    } // fim fun��o
}; // fim classe

// fun��o principal
int main()
{
    // define a localiza��o geogr�fica
    setlocale(LC_ALL, "portuguese");

    // vari�vel
    string nomeDoCurso; // recebe o usu�rio o nome do curso

    // cria o objeto da classe Grad Book
    GradBook myGradBook;

    // entrada de dados
    cout << "Informe o nome do curso: ";
    getline( cin, nomeDoCurso ); // recebe o nome do curso pelo usu�rio

    // chama a fun��o displayMessage da classe GradBook
    // e mostra a mensagem com o nome do curso
    myGradBook.displayMessage( nomeDoCurso );

    return 0; // programa terminado com sucesso

} // fim main
