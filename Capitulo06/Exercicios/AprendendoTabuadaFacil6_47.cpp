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
int umNumeroAleatorio(); // n�meros aleat�rio entre 1 e 10
int doisNumerosAleatorios(); // gera dois n�meros aleat�rios
int tresNumerosAleatorios(); // gera tr�s n�meros aleat�rios
int perguntaNivel(); // para saber em que n�vel o aluno est�
int operacaoAritimetica(); // para saber qual das 4 opera��es o aluno quer estudar
int somar( int num1, int num2 ); // para somar 2 n�meros
int subtrair( int num1, int num2 ); // para subtrair 2
int multiplicar( int num1, int num2 ); // para multiplicar dois n�meros
int dividir( int num1, int num2 ); // para dividir dois n�meros

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

    //gerador
    srand( time( NULL ) );

    // vari�vel
    int resposta = 0, produto = 1;
    int contaAcertos = 0;
    int contaErros = 0;
    int contaJogadas = 0;
    int num1 = 0; // para receber valores aleat�rios
    int num2 = 0; // para receber valores aleatorios
    int nivelDoAluno = 0; // recebe a resposta do n�vel

    // cabe�alho
    cout << "\tAPRENDENDO" << endl;

    // chama a fun��o pergunta nivel
    nivelDoAluno = perguntaNivel();

    // enquanto resposta diferente de -1
    while( resposta != -1 )
    {
        // switch recebe o valor em que o aluno est�
        switch( nivelDoAluno )
        {
            case 1:
                num1 = umNumeroAleatorio();
                num2 = umNumeroAleatorio();
                break;
            case 2:
                num1 = doisNumerosAleatorios();
                num2 = doisNumerosAleatorios();
                break;
            case 3:
                num1 = tresNumerosAleatorios();
                num2 = tresNumerosAleatorios();
                break;
        } // fim switch

        // atribuindo valor �s vari�veis
        resposta = 0;
        produto = 1;

        // enquanto resposta diferente de produto
        while( resposta != produto )
        {
            // entrada de dados pelo usu�rio
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
            produto = multiplicar( num1, num2 );

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

    // pula linha
    cout << endl;

    system("pause"); // pausa do programa

    return 0; // programa terminado com sucesso

} // fim main

// cria a fun��o primeiroAleatorio
int umNumeroAleatorio()
{
    // vari�vel recebe valor aleat�rio
    int alea = 1 + rand() % 10;
    // retorne o valor
    return alea;

} // fim fun��o um

// cria a fun��o doisNumerosAleatorio
int doisNumerosAleatorios()
{
    // vari�vel recebe valor aleat�rio
    int alea = 10 + rand() % 90;
    // retorne o valor
    return alea;

} // fim fun��o dois

// cria a fun��o doisNumerosAleatorio
int tresNumerosAleatorios()
{
    // vari�vel recebe valor aleat�rio
    int alea = 100 + rand() % 900;
    // retorne o valor
    return alea;

} // fim fun��o tres

// cria a fun��o somar
int somar( int num1, int num2 )
{
    // retorne o resultado da soma
    return num1 + num2;
} // fim fun��o somar

// cria a fun��o subtrair
int subtrair( int num1, int num2 )
{
    // retorne o resultado da subtra��o
    return num1 - num2;
} // fim fun��o subtrair

// cria a fun��o multiplicar
int multiplicar(int num1, int num2 )
{
    // retorna o valor da multiplica��o
    return num1 * num2;
} // fim da fun��o multiplicar

// cria a fun��o dividir
int dividir( int num1, int num2 )
{
    // retorna o valor da divis�o
    return num1 / num2;
} // fim da fun��o dividir


// cria a fun��o para estabelecer o n�vel do jogo
int perguntaNivel()
{
    // vari�vel
    int nivel = 0;

    // cabe�alho
    cout << "\tTABUADA DE?" << endl;
    cout << "=-=-=-=-=-=-=-=-=-=-=-=-=-=" << endl;
    cout << "=-       1 n�mero        -=" << endl;
    cout << "=-       2 n�mero        -=" << endl;
    cout << "=-       3 n�mero        -=" << endl;
    cout << "=-=-=-=-=-=-=-=-=-=-=-=-=-=" << endl;
    cout << "Em que n�vel voc� est�? ";
    cin >> nivel;

    // retorna o valor do n�vel do aluno.
    return nivel;

} // fim da fun��o n�vel do jogo

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
