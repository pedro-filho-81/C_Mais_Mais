/*
    4.16 Desenvolva um programa em C++ que utiliza uma instru��o while para
    determinar o pagamento bruto de cada um dos v�rios funcion�rios.
    A empresa paga �hora normal� pelas primeiras 40 horas trabalhadas por empregado
    e paga �horas extras� com 50% de gratifica��o para  todas as horas trabalhadas al�m
    das primeiras 40 horas. Voc� recebe uma lista dos empregados da empresa,
    o n�mero de horas trabalhadas  por empregado na �ltima semana e o sal�rio-hora de
    cada empregado. Seu programa deve aceitar a entrada dessas informa��es para cada
    empregado e ent�o determinar e exibir o sal�rio bruto do
    Deitel, Harvey; Paul, Harvey. C++ Como Programar (p. 135). Edi��o do Kindle.
    Autor: Pedro Filho, 16/08/2021
*/

#include <iostream>
#include <locale>
#include "PagamentoBruto.h"

using namespace std;

// cria as fun��es-membro da classe PagamentoBruto
// cria a fun��o set para configurar �s horas trabalhadas
void PagamentoBruto::setHorasTrabalhadas( int valor )
{
    // se o valor maior que zero
    if( valor > 0 )
    {
        // horasTrabalhadas recebo o valor
        horasTrabalhadas = valor;
    } // fim if
} // fim fun��o

int PagamentoBruto::getHorasTrabalhadas()
{
    // retorna �s horas trabalhadas
    return horasTrabalhadas;
} // fim fun��o get

void PagamentoBruto::setValorDaHora( double valor )
{
    // se valor maior que zero
    if( valor > 0 )
    {
        // valor da hora recebe o valor
        valorDaHora = valor;
    } // fim if
} // fim fun��o
