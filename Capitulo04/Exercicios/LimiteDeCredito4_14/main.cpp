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
            cout << "Entre com o saldo inicial";
            cin >> saldoInicial;
            meuLimite.setSaldoInicial( saldoInicial );


        } // fim if

        // entrada de dados
        cout << "Entre com o número da conta (-1 = sair): ";
        cin >> conta; // usuário entra com o número da conta

    } // fim while

    // pausa o programa
    system("pause");

    // fim do programa
    return 0;
} // fim de main
