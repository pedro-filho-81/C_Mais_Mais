/*
    4.14 Desenvolva um programa C++ que determinará se um cliente de uma loja
    de departamentos excedeu o limite de crédito em uma conta  corrente.
    Para cada cliente, os seguintes fatos estão disponíveis:
    a) Número de conta (um inteiro)
    b) Balanço no início do mês
    c) Total de todos os itens cobrados desse cliente no mês
    d) Total de pagamentos feitos pelo cliente no mês
    e) Limite autorizado de crédito
    O programa deve utilizar uma instrução while para inserir cada um desses fatos,
    calcular o novo saldo (= saldo inicial + taxas – créditos)  e determinar se o novo
    saldo excede o limite de crédito do cliente. Para aqueles clientes cujo limite de
    crédito é excedido, o programa  deve exibir o número da conta do cliente, o limite
    de crédito, o novo saldo e a mensagem ‘Limite de crédito excedido’.
    Deitel, Harvey; Paul, Harvey. C++ Como Programar (p. 134). Edição do Kindle.
    Autor: Pedro Filho, 15/08/2021
*/

#include <iostream>
#include "LimiteDeCredito.h"

using namespace std;

void LimiteDeCredito::setNumDaConta( int numero ) // configura o número da conta
{
    // se número da conta maior que zero
    if( numero > 0 )
    {
        numeroDaConta = numero; // número da conta recebe número
    } // fim if
} // fim função

int LimiteDeCredito::getNumDaConta() // retorna o número da conta configurado
{
    // retorna o número da conta
    return numeroDaConta;
} // fim função get


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
} // fim função

double LimiteDeCredito::getTotalDaTaxa() // retorna o total da taxa
{
    return taxas;
}// fim get

void LimiteDeCredito::setTotalDeCredito( double valor ) // configura o total de crédito
{
    if( valor > 0 )
    {
        totalDeCredito = valor;
    } // fim if
} // fim unção get

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
} // fim função

double LimiteDeCredito::getSaldoAtual() // reetorna o saldo atual
{
    return saldoInicial;
} // fim get
