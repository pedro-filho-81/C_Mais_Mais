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
    // cria a função membro displayMessage
    void displayMessage( string  nomeDoCurso )
    {
        // mostra a mensagem
        cout << "Bem vindo ao curso:\n" << nomeDoCurso << "!" << endl;
    } // fim função
}; // fim classe

// função principal
int main()
{
    // define a localização geográfica
    setlocale(LC_ALL, "portuguese");

    // variável
    string nomeDoCurso; // recebe o usuário o nome do curso

    // cria o objeto da classe Grad Book
    GradBook myGradBook;

    // entrada de dados
    cout << "Informe o nome do curso: ";
    getline( cin, nomeDoCurso ); // recebe o nome do curso pelo usuário

    // chama a função displayMessage da classe GradBook
    // e mostra a mensagem com o nome do curso
    myGradBook.displayMessage( nomeDoCurso );

    return 0; // programa terminado com sucesso

} // fim main
