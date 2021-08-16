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
#include <iomanip>

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

// fun��o que retorna �s horas trabalhadas
int PagamentoBruto::getHorasTrabalhadas()
{
    // retorna �s horas trabalhadas
    return horasTrabalhadas;
} // fim fun��o get

// fun��o que configura o valor da hora
void PagamentoBruto::setValorDaHora( double valor )
{
    // se valor maior que zero
    if( valor > 0 )
    {
        // valor da hora recebe o valor
        valorDaHora = valor;
    } // fim if
} // fim fun��o

// fun��o que retorna o valor da hora
double PagamentoBruto::getValorDaHora()
{
    // retorne o valor
    return valorDaHora;
} // fim get

// fun��o para confirura o sal�rio
void PagamentoBruto::setSalario( double hora, double valor )
{
    // se valor maior que zero
    if( valor > 0 )
    {
        // sal�rio recebe o valor
        salario = hora * valor;
    } // fim if
} // fim fun��o

// fun��o que retorna o sal�rio
double PagamentoBruto::getSalario()
{
    // retorne o valor do sal�rio
    return salario;
} // fim fun��o

// fun��o para a entrada de dados pelo usu�rio
void PagamentoBruto::entrarComDados()
{
    // vari�veis
    int valor;
    double valorHora;

    // imprima
    cout << "Entre com as horas trabalhadas (-1 = sair): ";
    cin >> valor;

    // enquanto valor diferente de -1
    while( valor != -1 )
    {
        // se valor maior que 0
        if( valor > 0 )
        {
            // fun��o recebe o valor
            setHorasTrabalhadas( valor );

            // imprima
            cout << "Entre com o valor da hora R$";
            cin >> valorHora; // recebe do usu�rio o valor da hora

            // chama a fun��o e atribui o valor informado pelo usu�rio
            setValorDaHora( valorHora );

            // chama a fun��o calcularSalario
            calcularSalario();

        } // fim if

    // imprima
    cout << "\nEntre com as horas trabalhadas (-1 = sair): ";
    cin >> valor;

    } // fim while

} // fim fun��o

// chama a fun��o cal//cula sal�rio
void PagamentoBruto::calcularSalario()
{
    // mostra o valor do sal�rio
    cout << "Sal�rio R$" << setprecision( 2 ) << fixed << getSalario() << endl;

} // fim fun��o
