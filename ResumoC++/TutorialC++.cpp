/*
    Criar um resumo da linguagem de programação C++ para auxiliar meu aprendizado.
    Feito por: Pedro Filho,18/11/2021
*/

#include <iostream>
#include <locale>

using namespace std;

// função principal
int main()
{
    setlocale( LC_ALL, "portuguese"); // localização geográfica

    system("cls"); // limpa a tela

    // variáveis
    int opcaoMenu = 0;

    // tela principal
    cout << "RESUMO DOS PRINCIPAIS TÓPICOS C++" << endl;

    // cria o menu
    cout << "-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=" << endl;
    cout << "*      1 => Olá, Mundo!        *" << endl;
    cout << "-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=" << endl;
    cout << "Quer ajuda sobre: ";
    cin >> opcaoMenu;

    // opções de seleção
    switch( opcaoMenu )
    {
        case 1:
            cout << "Primeiro programa em C++\n" << endl;
            cout << "#include <iostream>" << endl;
            cout << "using namespace std;\n" << endl;
            cout << "int main ()" << endl;
            cout << "{ // início do bloco em C++.\n" << endl;
            cout << "    cout << \"Olá, Mundo C++!\" << endl;" << endl;
            cout << "    return 0; // programa finalizado com sucesso\n" << endl;
            cout << "} // fim da função principal (main() )" << endl;
            cout << endl; // pula uma linha
            break;
        case 2:
            cout << "Variável - Nome dado ao espaço da memória"
                    << " do computador onde será armazenado \"um valor\"." << endl;
            cout << "Toda variável em C++ tem um TIPO e um NOME." << endl;
            break;
    } // fim switch

    cout << endl; // pula uma linha

    system("pause"); // pausa do programa

    return 0; // programa terminado com sucesso

} // fim main
