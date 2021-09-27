/*
    6.47 Os exerc�cios 6.35�6.37 desenvolveram um programa de instru��o auxiliada
    por computador para ensinar multiplica��o a um aluno da  escola prim�ria.
    Este exerc�cio sugere aprimoramentos nesse programa.

    a) Modifique o programa para permitir que o usu�rio insira uma capacidade de
    n�vel de gradua��o.
    O n�vel 1 significa utilizar somente  n�meros de um �nico
    d�gito nos problemas,
    o n�vel 2 significa utilizar n�meros com dois d�gitos etc.

    b) Modifique o programa para permitir que o usu�rio selecione os tipos de
    problemas aritm�ticos que ele ou ela deseja estudar.
    A op��o
    1  significa problemas de adi��o somente,
    2 significa problemas de subtra��o somente,
    3 significa problemas de multiplica��o somente,
    4 significa problemas de divis�o somente e
    5 significa problemas de todos esses tipos misturados aleatoriamente.
    Deitel, Harvey; Paul, Harvey. C++ Como Programar (p. 247). Edi��o do Kindle.
    Autor: Pedro Filho, 27/09/2021
*/

// incluir biblioteca
#include <iostream> // para cout e cin
#include <locale> // para setlocale
#include <iomanip> // para setw, fixed, setprecision
#include <ctime>

using namespace std;

// prot�tipos
int geraUmAleatorio(); // n�meros aleat�rio entre 1 e 10
void menuPrincipal(); // menu proncipal
void entrarComDados(); // para entrada de dados do usu�rio
void mensagemParaAcerto(); // para respostas certas
void mensagemParaErros(); // para respostas erradas
void acertosErros( int jogadas, int acertos, int erros ); // mostra o resumo

// fun��o principal
int main()
{
    // localiza��o geogr�fica
    setlocale( LC_ALL, "portuguese");

    // limpa a tela
    system("cls");

    // vari�veis
    int opcoes = 0; // para o menu
    int tabuada = 1; // para o usu�rio informar que tabuada quer estudar
    char resposta = 's'; // para a pergunta

    //gerador
    srand( time( NULL ) );

    // enquanto resposta diferente de n
    while( resposta != 'n' )
    {
        // chama a fun��o menu principal
        menuPrincipal();

        // entrada da op��o
        cout << "Qual a sua op��o: ";
        cin >> opcoes;

        cout << "De 1 a 10 qual tabuada deseja estudar? ";
        cin >> tabuada;

        // Chama a fun��o entrar com dados
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

// cria a fun��o primeiroAleatorio
int geraUmAleatorio()
{
    // vari�vel recebe valor aleat�rio
    int alea = 1 + rand() % 10;

    // retorne o valor
    return alea;

} // fim fun��o

// cria o menu principal
void menuPrincipal()
{
    // cabe�alho
    cout << "\tAPRENDENDO TABUADA" << endl;

    // menu de op��es
    cout << "**************************************" << endl;
    cout << "*  1       Tabuada de 1 a 10        *" << endl;
    cout << "*  2       Tabuada de 1 a 15        *" << endl;
    cout << "*  3       Tabuada de 1 a 20        *" << endl;
    cout << "**************************************" << endl;
} // fim fun��o menu principal

// entrada de dados
void entrarComDados()
{
    // vari�vel
    int resposta = 0, produto = 1;
    int contaAcertos = 0;
    int contaErros = 0;
    int contaJogadas = 0;

    // enquanto resposta diferente de -1
    while( resposta != -1 )
    {
        // vari�veis
        int num1 = geraUmAleatorio();
        int num2 = geraUmAleatorio();
        int resposta = 0, produto = 1;

        // enquanto resposta diferente de produto
        while( resposta != produto )
        {
            // entrada de dados
            cout << "Quanto � (-1 = sair): " <<  num1 << " x " << num2 << " = ";
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
                // chama a fun��o mensagem para acertos
                mensagemParaAcerto();
                // conta os acertos
                ++contaAcertos;
            } // fim if
            else // se n�o
            {
                // chama a fun��o mensagem para erros
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

    // chama afun��o acertos e erros
    acertosErros( contaJogadas, contaAcertos, contaErros );

} // fim fun��o entrar com dados

// cria a fun��o mensagemParaAcerto
void mensagemParaAcerto()
{
    // vari�veis
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
} // fim fun��o mensagem boa

// cria a fun��o mensagemParaErros
void mensagemParaErros()
{
    // vari�veis
    int alea = 1 + rand() % 5;

    // switch
    switch( alea )
    {
        case 1:
            cout << "N�o.   Tente novamente." << endl;
            break;
        case 2:
            cout << "Errado.    Tente mais uma vez." << endl;
            break;
        case 3:
            cout << "N�o desista!" << endl;
            break;
        case 4:
            cout << "N�o.   Continue tentando." << endl;
            break;
    } // fim switch
} // fim fun��o mensagem errada

// cria a fun��o acertosErros
void acertosErros( int jogadas, int acertos, int erros )
{
    // mostra resultado
    cout << "\nVoc� jogou " << jogadas << " vezes." << endl;
    cout << "Acertou " << acertos << "\nErrou " << erros << endl;

    // se acertos menor ou igual a 8
    if( acertos >= 8 )
        cout << "Parab�ns! voc� est� pronto para o pr�ximo n�vel."  << endl;
    else
        cout << "Voc� acertou menos de 80 % das quest�es."
                << "\nPe�a ajuda a seu professor." << endl;
} // fim fun��o mostra resultado
