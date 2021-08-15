// fun��o principal main testa a classe LimiteDeCredito
#include <iostream>
#include <locale>
#include "LimiteDeCredito.h"

using namespace std;

int main()
{
    // localiza��o geografica
    setlocale( LC_ALL, "portuguese" );

    // limpa a tela
    system("cls");

    // cria o objeto da classe Limite de cr�dito
    LimiteDeCredito meuLimite;

    // vari�veis
    int conta;
    double saldoInicial;

    // entrada de dados
    cout << "Entre com o n�mero da conta (-1 = sair): ";
    cin >> conta; // usu�rio entra com o n�mero da conta

    // enquanto o n�mero da conta diferente de -1
    while( conta != -1 )
    {
        if( conta > 0 )
        {
            // o objeto da classe chama a fun��o setNumDaConta que recebe o n�mero da conta
            meuLimite.setNumDaConta( conta );

            // entrada de dados
            cout << "Entre com o saldo inicial";
            cin >> saldoInicial;
            meuLimite.setSaldoInicial( saldoInicial );


        } // fim if

        // entrada de dados
        cout << "Entre com o n�mero da conta (-1 = sair): ";
        cin >> conta; // usu�rio entra com o n�mero da conta

    } // fim while

    // pausa o programa
    system("pause");

    // fim do programa
    return 0;
} // fim de main
