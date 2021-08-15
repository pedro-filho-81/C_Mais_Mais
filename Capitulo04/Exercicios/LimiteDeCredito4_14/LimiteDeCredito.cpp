/*
    4.14 Desenvolva um programa C++ que determinar� se um cliente de uma loja
    de departamentos excedeu o limite de cr�dito em uma conta  corrente.
    Para cada cliente, os seguintes fatos est�o dispon�veis:
    a) N�mero de conta (um inteiro)
    b) Balan�o no in�cio do m�s
    c) Total de todos os itens cobrados desse cliente no m�s
    d) Total de pagamentos feitos pelo cliente no m�s
    e) Limite autorizado de cr�dito
    O programa deve utilizar uma instru��o while para inserir cada um desses fatos,
    calcular o novo saldo (= saldo inicial + taxas � cr�ditos)  e determinar se o novo
    saldo excede o limite de cr�dito do cliente. Para aqueles clientes cujo limite de
    cr�dito � excedido, o programa  deve exibir o n�mero da conta do cliente, o limite
    de cr�dito, o novo saldo e a mensagem �Limite de cr�dito excedido�.
    Deitel, Harvey; Paul, Harvey. C++ Como Programar (p. 134). Edi��o do Kindle.
    Autor: Pedro Filho, 15/08/2021
*/

#include <iostream>
#include "LimiteDeCredito.h"

using namespace std;

void LimiteDeCredito::setNumDaConta( int numero ) // configura o n�mero da conta
{
    // se n�mero da conta maior que zero
    if( numero > 0 )
    {
        numeroDaConta = numero; // n�mero da conta recebe n�mero
    } // fim if
} // fim fun��o

int LimiteDeCredito::getNumDaConta() // retorna o n�mero da conta configurado
{
    // retorna o n�mero da conta
    return numeroDaConta;
} // fim fun��o get


void LimiteDeCredito::setSaldoInicial( double valor ) // configura o saldo inicial
{
    if( valor > 0 )
    {
        saldoInicial = valor;
    } // fim if
} // fim saldo

double LimiteDeCredito::getSaldoInicial() // retorna o saldo inicial
{
    return limiteDeCredito;
} // fim getSaldo

void LimiteDeCredito::setTotalDaTaxa( double valor ) // configura o total da taxa
{
    if( valor > 0 )
    {
        taxas = valor;
    } // fim if
} // fim fun��o

double LimiteDeCredito::getTotalDaTaxa() // retorna o total da taxa
{
    return taxas;
}// fim get

void LimiteDeCredito::setTotalDeCredito( double valor ) // configura o total de cr�dito
{
    if( valor > 0 )
    {
        totalDeCredito = valor;
    } // fim if
} // fim un��o get

double LimiteDeCredito::getLimiteDeCredito() // retorna o valor do limite
{
    return limiteDeCredito;
} // fim get

void LimiteDeCredito::setSaldoAtual(double valor ) // configura o saldo atual
{
    if( valor > 0 )
    {
        saldoAtual = valor;
    } // fim if
} // fim fun��o

double LimiteDeCredito::getSaldoAtual() // reetorna o saldo atual
{
    return saldoInicial;
} // fim get
