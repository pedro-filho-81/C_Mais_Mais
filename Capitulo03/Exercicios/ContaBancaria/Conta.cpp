/*
/*
    3.12 (Classe Account) Crie uma classe chamada Account que um banco poderia
    utilizar para representar contas banc�rias dos clientes. Sua  classe deve incluir um
    membro de dados de tipo int para representar o saldo da conta.
    [Nota: Nos cap�tulos subseq�entes, utilizaremos  n�meros que cont�m pontos
    de fra��o decimal (por exemplo, 2,75) � chamados valores de ponto flutuante �
    para representar quantias em d�lar.] Sua classe deve fornecer um construtor que
    recebe um saldo inicial e o utiliza para inicializar o membro de dados.
    O construtor  deve validar o saldo inicial para assegurar que ele seja maior que ou
    igual a 0. Se n�o, o saldo deve ser configurado como 0 e o construtor deve exibir
    uma mensagem de erro, indicando que o saldo inicial era inv�lido.
    A classe deve fornecer tr�s fun��es-membro. A fun��omembro credit deve adicionar
    uma quantia ao saldo atual. A fun��o-membro debit deve retirar o dinheiro de Account
    e assegurar  que a quantia de d�bito n�o exceda o saldo de Account.
    Se exceder, o saldo deve permanecer inalterado e a fun��o deve imprimir uma
    mensagem que indica �Debit amount exceeded account balance.�
    A fun��o-membro getBalance deve retornar o saldo atual.  Crie um programa que cria
    dois objetos Account e testa as fun��es-membro da classe Account.
    Deitel, Harvey; Paul, Harvey. C++ Como Programar (p. 92). Edi��o do Kindle.
    Deitel, Harvey; Paul, Harvey. C++ Como Programar (p. 91). Edi��o do Kindle.
    Autor: Pedro Filho, 09/08/2021.
*/

#include <iostream>
#include "Conta.h"

using namespace std;

// cria o construtor da classe Conta
Conta::Conta( int saldo )
{
    setSaldo( saldo );
} // fim construtor

// fun��o setSaldo para configurar o saldo
void Conta::setSaldo( int saldo )
{
    // se saldo maior ou igual a zero
    if( saldo >= 0 )
    {
        // saldo da conta recebe o valor do saldo
        saldoDaConta = saldo;
    } // fim if

    // se saldo menor ou igual a zero
    if( saldo < 0 )
    {
        // imprime
        cout << "Valor inv�lido" << endl;
    } // fim if
} // fim fun��o

//  fun��o getSaldo
int Conta::getSaldo()
{
    // retorne o valor do slado
    return saldoDaConta;
} // fim getSaldo
