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
    double taxas;
    double totalDeCredito;
    double limiteDeCredito;
    double saldoAtual;

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
            cout << "Entre com o saldo inicial: ";
            cin >> saldoInicial;
            meuLimite.setSaldoInicial( saldoInicial );

            cout << "Entre com o total da taxa: ";
            cin >> taxas;
            meuLimite.setTotalDaTaxa( taxas );

            cout << "Entre com o total de cr�dito: ";
            cin >> totalDeCredito;
            meuLimite.setTotalDeCredito( totalDeCredito );

            cout << "Entre com o limite de cr�dito: ";
            cin >> limiteDeCredito;
            meuLimite.setLimiteDeCredito(limiteDeCredito);

        } // fim if

        // objeto da classe LimiteDaConta chama a fun��o mostraResultado
        meuLimite.mostraResultado();

        // entrada de dados
        cout << "\nEntre com o n�mero da conta (-1 = sair): ";
        cin >> conta; // usu�rio entra com o n�mero da conta

    } // fim while

    // pausa o programa
    system("pause");

    // fim do programa
    return 0;
} // fim de main
