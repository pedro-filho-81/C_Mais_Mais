/*
    Criar um resumo da linguagem de programa��o C++ para auxiliar meu aprendizado.
    Feito por: Pedro Filho,18/11/2021
*/

#include <iostream>
#include <locale>

using namespace std;

// fun��o principal
int main()
{
    setlocale( LC_ALL, "portuguese"); // localiza��o geogr�fica

    system("cls"); // limpa a tela

    // vari�veis
    int opcaoMenu = 0;

    // tela principal
    cout << "RESUMO DOS PRINCIPAIS T�PICOS C++" << endl;

    // cria o menu
    cout << "-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=" << endl;
    cout << "*      1 => Ol�, Mundo!        *" << endl;
    cout << "-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=" << endl;
    cout << "Quer ajuda sobre: ";
    cin >> opcaoMenu;

    // op��es de sele��o
    switch( opcaoMenu )
    {
        case 1:
            cout << "Primeiro programa em C++\n" << endl;
            cout << "#include <iostream>" << endl;
            cout << "using namespace std;\n" << endl;
            cout << "int main ()" << endl;
            cout << "{ // in�cio do bloco em C++.\n" << endl;
            cout << "    cout << \"Ol�, Mundo C++!\" << endl;" << endl;
            cout << "    return 0; // programa finalizado com sucesso\n" << endl;
            cout << "} // fim da fun��o principal (main() )" << endl;
            cout << endl; // pula uma linha
            break;
        case 2:
            cout << "Vari�vel - Nome dado ao espa�o da mem�ria"
                    << " do computador onde ser� armazenado \"um valor\"." << endl;
            cout << "Toda vari�vel em C++ tem um TIPO e um NOME." << endl;
            break;
    } // fim switch

    cout << endl; // pula uma linha

    system("pause"); // pausa do programa

    return 0; // programa terminado com sucesso

} // fim main
