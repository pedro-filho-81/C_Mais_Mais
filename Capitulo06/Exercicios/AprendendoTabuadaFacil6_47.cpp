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
int umNumeroAleatorio(); // números aleatório entre 1 e 10
int doisNumerosAleatorios(); // gera dois números aleatórios
int tresNumerosAleatorios(); // gera três números aleatórios
int perguntaNivel(); // para saber em que nível o aluno está
int operacaoAritimetica(); // para saber qual das 4 operações o aluno quer estudar
int somar( int num1, int num2 ); // para somar 2 números
int subtrair( int num1, int num2 ); // para subtrair 2
int multiplicar( int num1, int num2 ); // para multiplicar dois números
int dividir( int num1, int num2 ); // para dividir dois números

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

    //gerador
    srand( time( NULL ) );

    // variável
    int resposta = 0, produto = 1;
    int contaAcertos = 0;
    int contaErros = 0;
    int contaJogadas = 0;
    int num1 = 0; // para receber valores aleatórios
    int num2 = 0; // para receber valores aleatorios
    int nivelDoAluno = 0; // recebe a resposta do nível

    // cabeçalho
    cout << "\tAPRENDENDO" << endl;

    // chama a função pergunta nivel
    nivelDoAluno = perguntaNivel();

    // enquanto resposta diferente de -1
    while( resposta != -1 )
    {
        // switch recebe o valor em que o aluno está
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

        // atribuindo valor às variáveis
        resposta = 0;
        produto = 1;

        // enquanto resposta diferente de produto
        while( resposta != produto )
        {
            // entrada de dados pelo usuário
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
            produto = multiplicar( num1, num2 );

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

    // pula linha
    cout << endl;

    system("pause"); // pausa do programa

    return 0; // programa terminado com sucesso

} // fim main

// cria a função primeiroAleatorio
int umNumeroAleatorio()
{
    // variável recebe valor aleatório
    int alea = 1 + rand() % 10;
    // retorne o valor
    return alea;

} // fim função um

// cria a função doisNumerosAleatorio
int doisNumerosAleatorios()
{
    // variável recebe valor aleatório
    int alea = 10 + rand() % 90;
    // retorne o valor
    return alea;

} // fim função dois

// cria a função doisNumerosAleatorio
int tresNumerosAleatorios()
{
    // variável recebe valor aleatório
    int alea = 100 + rand() % 900;
    // retorne o valor
    return alea;

} // fim função tres

// cria a função somar
int somar( int num1, int num2 )
{
    // retorne o resultado da soma
    return num1 + num2;
} // fim função somar

// cria a função subtrair
int subtrair( int num1, int num2 )
{
    // retorne o resultado da subtração
    return num1 - num2;
} // fim função subtrair

// cria a função multiplicar
int multiplicar(int num1, int num2 )
{
    // retorna o valor da multiplicação
    return num1 * num2;
} // fim da função multiplicar

// cria a função dividir
int dividir( int num1, int num2 )
{
    // retorna o valor da divisão
    return num1 / num2;
} // fim da função dividir


// cria a função para estabelecer o nível do jogo
int perguntaNivel()
{
    // variável
    int nivel = 0;

    // cabeçalho
    cout << "\tTABUADA DE?" << endl;
    cout << "=-=-=-=-=-=-=-=-=-=-=-=-=-=" << endl;
    cout << "=-       1 número        -=" << endl;
    cout << "=-       2 número        -=" << endl;
    cout << "=-       3 número        -=" << endl;
    cout << "=-=-=-=-=-=-=-=-=-=-=-=-=-=" << endl;
    cout << "Em que nível você está? ";
    cin >> nivel;

    // retorna o valor do nível do aluno.
    return nivel;

} // fim da função nível do jogo

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
