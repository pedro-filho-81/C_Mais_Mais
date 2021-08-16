/*
    4.16 Desenvolva um programa em C++ que utiliza uma instrução while para
    determinar o pagamento bruto de cada um dos vários funcionários.
    A empresa paga ‘hora normal’ pelas primeiras 40 horas trabalhadas por empregado
    e paga ‘horas extras’ com 50% de gratificação para  todas as horas trabalhadas além
    das primeiras 40 horas. Você recebe uma lista dos empregados da empresa,
    o número de horas trabalhadas  por empregado na última semana e o salário-hora de
    cada empregado. Seu programa deve aceitar a entrada dessas informações para cada
    empregado e então determinar e exibir o salário bruto do
    Deitel, Harvey; Paul, Harvey. C++ Como Programar (p. 135). Edição do Kindle.
    Autor: Pedro Filho, 16/08/2021
*/

#include <iostream>
#include <locale>
#include "PagamentoBruto.h"

using namespace std;

// cria as funções-membro da classe PagamentoBruto
// cria a função set para configurar às horas trabalhadas
void PagamentoBruto::setHorasTrabalhadas( int valor )
{
    // se o valor maior que zero
    if( valor > 0 )
    {
        // horasTrabalhadas recebo o valor
        horasTrabalhadas = valor;
    } // fim if
} // fim função

int PagamentoBruto::getHorasTrabalhadas()
{
    // retorna às horas trabalhadas
    return horasTrabalhadas;
} // fim função get

void PagamentoBruto::setValorDaHora( double valor )
{
    // se valor maior que zero
    if( valor > 0 )
    {
        // valor da hora recebe o valor
        valorDaHora = valor;
    } // fim if
} // fim função
