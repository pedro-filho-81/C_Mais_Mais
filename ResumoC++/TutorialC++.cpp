/*
    Criar um resumo da linguagem de programação C++ para auxiliar o aprendizado.
    os detalhes só serão vistos com a execução do programa
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
    cout << "*      1 => OláMundo!        *" << endl;
    cout << "*      2 => cout-imprimir    *" << endl;
    cout << "-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=" << endl;
    cout << "Quer ajuda sobre: ";
    cin >> opcaoMenu;

    // opções de seleção
    switch( opcaoMenu )
    {
        case 1:
            cout << "\nPrimeiro programa em C++\n" << endl;
            cout << "// => barra barra ==> significa comentário de uma linha.\n" << endl;
            cout << "// OBRIGATÓRIO incluir biblioteca de entrada e saída\n" << endl;
            cout << "\t#include <iostream> // OBRIGATÓRIO para poder utulizar os comandos cout e cin\n" << endl;
            cout << "\tusing namespace std; // OBRIGATÓRIO para não precisar usar std::cout, std::cin, std::endl;\n" << endl;
            cout << "\tint main () // OBRIGATÓRIO É a função principal em qualquer programa C++\n" << endl;
            cout << "\t{ // OBRIGATÓRIO abre-chave é o início do bloco de execução da funçao main em C++.\n" << endl;
            cout <<  "\n\t    // cout comando para mostrar a string Olá, Mundo C++ na tela." << endl;
            cout << "\t    cout << \"Olá, Mundo C++!\" << endl;// ponto e virgúla marca o fim da instrução\n" << endl;
            cout << "\t    return 0; // programa finalizado com sucesso\n" << endl;
            cout << "\t} // OBRIGATÓRIO fecha-chave fim da função principal (main() )" << endl;
            cout << "\tMemorize tudo que for obrigatório." << endl;
            cout << "\nMensagem gerada pelo compilador após return = 0;\n"
                    << "Process returned 0 (0x0)   execution time : 11.247 s" << endl;
            cout << endl; // pula uma linha
            break; // fim switch

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
