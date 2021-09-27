/*
    6.47 Os exercícios 6.35–6.37 desenvolveram um programa de instrução auxiliada
    por computador para ensinar multiplicação a um aluno da  escola primária.
    Este exercício sugere aprimoramentos nesse programa.

    a) Modifique o programa para permitir que o usuário insira uma capacidade de
    nível de graduação.
    O nível 1 significa utilizar somente  números de um único
    dígito nos problemas,
    o nível 2 significa utilizar números com dois dígitos etc.

    b) Modifique o programa para permitir que o usuário selecione os tipos de
    problemas aritméticos que ele ou ela deseja estudar.
    A opção
    1  significa problemas de adição somente,
    2 significa problemas de subtração somente,
    3 significa problemas de multiplicação somente,
    4 significa problemas de divisão somente e
    5 significa problemas de todos esses tipos misturados aleatoriamente.
    Deitel, Harvey; Paul, Harvey. C++ Como Programar (p. 247). Edição do Kindle.
    Autor: Pedro Filho, 27/09/2021
*/

// incluir biblioteca
#include <iostream> // para cout e cin
#include <locale> // para setlocale
#include <iomanip> // para setw, fixed, setprecision
#include <ctime>

using namespace std;

// protótipos
int geraUmAleatorio(); // números aleatório entre 1 e 10
void menuPrincipal(); // menu proncipal
void entrarComDados(); // para entrada de dados do usuário
void mensagemParaAcerto(); // para respostas certas
void mensagemParaErros(); // para respostas erradas
void acertosErros( int jogadas, int acertos, int erros ); // mostra o resumo

// função principal
int main()
{
    // localização geográfica
    setlocale( LC_ALL, "portuguese");

    // limpa a tela
    system("cls");

    // variáveis
    int opcoes = 0; // para o menu
    int tabuada = 1; // para o usuário informar que tabuada quer estudar
    char resposta = 's'; // para a pergunta

    //gerador
    srand( time( NULL ) );

    // enquanto resposta diferente de n
    while( resposta != 'n' )
    {
        // chama a função menu principal
        menuPrincipal();

        // entrada da opção
        cout << "Qual a sua opção: ";
        cin >> opcoes;

        cout << "De 1 a 10 qual tabuada deseja estudar? ";
        cin >> tabuada;

        // Chama a função entrar com dados
        entrarComDados();

        // pergunta
        cout << "Deseja continuar ( s / n )? ";
        cin >> resposta;

    } // fim while

    // pula linha
    cout << endl;

    system("pause"); // pausa do programa

    return 0; // programa terminado com sucesso

} // fim main

// cria a função primeiroAleatorio
int geraUmAleatorio()
{
    // variável recebe valor aleatório
    int alea = 1 + rand() % 10;

    // retorne o valor
    return alea;

} // fim função

// cria o menu principal
void menuPrincipal()
{
    // cabeçalho
    cout << "\tAPRENDENDO TABUADA" << endl;

    // menu de opções
    cout << "**************************************" << endl;
    cout << "*  1       Tabuada de 1 a 10        *" << endl;
    cout << "*  2       Tabuada de 1 a 15        *" << endl;
    cout << "*  3       Tabuada de 1 a 20        *" << endl;
    cout << "**************************************" << endl;
} // fim função menu principal

// entrada de dados
void entrarComDados()
{
    // variável
    int resposta = 0, produto = 1;
    int contaAcertos = 0;
    int contaErros = 0;
    int contaJogadas = 0;

    // enquanto resposta diferente de -1
    while( resposta != -1 )
    {
        // variáveis
        int num1 = geraUmAleatorio();
        int num2 = geraUmAleatorio();
        int resposta = 0, produto = 1;

        // enquanto resposta diferente de produto
        while( resposta != produto )
        {
            // entrada de dados
            cout << "Quanto é (-1 = sair): " <<  num1 << " x " << num2 << " = ";
            cin >> resposta;

            // conta as jogadas
            contaJogadas += 1;

            // se resposta igual ao produto
            if( resposta == -1 )
            {
                --contaJogadas;
                break; // fim do programa
            } // fim if

            // calcular os valores
            produto = num1 * num2;

            // se resposta igual ao produto
            if( resposta == produto ) // se
            {
                // chama a função mensagem para acertos
                mensagemParaAcerto();
                // conta os acertos
                ++contaAcertos;
            } // fim if
            else // se não
            {
                // chama a função mensagem para erros
                mensagemParaErros();
                // conta os erros
                ++contaErros;
            } // fim else

            // se contaJogadas igual a 10
            if( contaJogadas >= 10 )
                break; // sair do programa

        } // fim while interno

        // se resposta igual ao produto
        if( resposta == -1 )
        {
            break; // fim do programa
        } // fim if

        // se contaJogadas igual a 10
        if( contaJogadas >= 10 )
            break; // sair do programa
    } // fim primeiro while

    // chama afunção acertos e erros
    acertosErros( contaJogadas, contaAcertos, contaErros );

} // fim função entrar com dados

// cria a função mensagemParaAcerto
void mensagemParaAcerto()
{
    // variáveis
    int alea = 1 + rand() % 5;

    // switch
    switch( alea )
    {
        case 1:
            cout << "Muito bom!" << endl;
            break;
        case 2:
            cout << "Excelente!" << endl;
            break;
        case 3:
            cout << "Bom trabalho!" << endl;
            break;
        case 4:
            cout << "Continue assim!" << endl;
            break;
    } // fim switch
} // fim função mensagem boa

// cria a função mensagemParaErros
void mensagemParaErros()
{
    // variáveis
    int alea = 1 + rand() % 5;

    // switch
    switch( alea )
    {
        case 1:
            cout << "Não.   Tente novamente." << endl;
            break;
        case 2:
            cout << "Errado.    Tente mais uma vez." << endl;
            break;
        case 3:
            cout << "Não desista!" << endl;
            break;
        case 4:
            cout << "Não.   Continue tentando." << endl;
            break;
    } // fim switch
} // fim função mensagem errada

// cria a função acertosErros
void acertosErros( int jogadas, int acertos, int erros )
{
    // mostra resultado
    cout << "\nVocê jogou " << jogadas << " vezes." << endl;
    cout << "Acertou " << acertos << "\nErrou " << erros << endl;

    // se acertos menor ou igual a 8
    if( acertos >= 8 )
        cout << "Parabéns! você está pronto para o próximo nível."  << endl;
    else
        cout << "Você acertou menos de 80 % das questões."
                << "\nPeça ajuda a seu professor." << endl;
} // fim função mostra resultado
