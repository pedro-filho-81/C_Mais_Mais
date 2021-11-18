/*
    Criar um resumo da linguagem de programa��o C++ para auxiliar o aprendizado.
    os detalhes s� ser�o vistos com a execu��o do programa
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
    cout << "*      1 => Ol�Mundo!        *" << endl;
    cout << "*      2 => cout-imprimir    *" << endl;
    cout << "-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=" << endl;
    cout << "Quer ajuda sobre: ";
    cin >> opcaoMenu;

    // op��es de sele��o
    switch( opcaoMenu )
    {
        case 1:
            cout << "\nPrimeiro programa em C++\n" << endl;
            cout << "// => barra barra ==> significa coment�rio de uma linha.\n" << endl;
            cout << "// OBRIGAT�RIO incluir biblioteca de entrada e sa�da\n" << endl;
            cout << "\t#include <iostream> // OBRIGAT�RIO para poder utulizar os comandos cout e cin\n" << endl;
            cout << "\tusing namespace std; // OBRIGAT�RIO para n�o precisar usar std::cout, std::cin, std::endl;\n" << endl;
            cout << "\tint main () // OBRIGAT�RIO � a fun��o principal em qualquer programa C++\n" << endl;
            cout << "\t{ // OBRIGAT�RIO abre-chave � o in�cio do bloco de execu��o da fun�ao main em C++.\n" << endl;
            cout <<  "\n\t    // cout comando para mostrar a string Ol�, Mundo C++ na tela." << endl;
            cout << "\t    cout << \"Ol�, Mundo C++!\" << endl;// ponto e virg�la marca o fim da instru��o\n" << endl;
            cout << "\t    return 0; // programa finalizado com sucesso\n" << endl;
            cout << "\t} // OBRIGAT�RIO fecha-chave fim da fun��o principal (main() )" << endl;
            cout << "\tMemorize tudo que for obrigat�rio." << endl;
            cout << "\nMensagem gerada pelo compilador ap�s return = 0;\n"
                    << "Process returned 0 (0x0)   execution time : 11.247 s" << endl;
            cout << endl; // pula uma linha
            break; // fim switch

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
