// função principal main testa a classe LimiteDeCredito
#include <iostream>
#include <locale>
#include "LimiteDeCredito.h"

using namespace std;

int main()
{
    // localização geografica
    setlocale( LC_ALL, "portuguese" );

    // limpa a tela
    system("cls");

    // cria o objeto da classe Limite de crédito
    LimiteDeCredito meuLimite;

    // variáveis
    int conta;
    double saldoInicial;
    double taxas;
    double totalDeCredito;
    double limiteDeCredito;
    double saldoAtual;

    // entrada de dados
    cout << "Entre com o número da conta (-1 = sair): ";
    cin >> conta; // usuário entra com o número da conta

    // enquanto o número da conta diferente de -1
    while( conta != -1 )
    {
        if( conta > 0 )
        {
            // o objeto da classe chama a função setNumDaConta que recebe o número da conta
            meuLimite.setNumDaConta( conta );

            // entrada de dados
            cout << "Entre com o saldo inicial: ";
            cin >> saldoInicial;
            meuLimite.setSaldoInicial( saldoInicial );

            cout << "Entre com o total da taxa: ";
            cin >> taxas;
            meuLimite.setTotalDaTaxa( taxas );

            cout << "Entre com o total de crédito: ";
            cin >> totalDeCredito;
            meuLimite.setTotalDeCredito( totalDeCredito );

            cout << "Entre com o limite de crédito: ";
            cin >> limiteDeCredito;
            meuLimite.setLimiteDeCredito(limiteDeCredito);

        } // fim if

        // objeto da classe LimiteDaConta chama a função mostraResultado
        meuLimite.mostraResultado();

        // entrada de dados
        cout << "\nEntre com o número da conta (-1 = sair): ";
        cin >> conta; // usuário entra com o número da conta

    } // fim while

    // pausa o programa
    system("pause");

    // fim do programa
    return 0;
} // fim de main
