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
#include <iomanip>

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

// função que retorna às horas trabalhadas
int PagamentoBruto::getHorasTrabalhadas()
{
    // retorna às horas trabalhadas
    return horasTrabalhadas;
} // fim função get

// função que configura o valor da hora
void PagamentoBruto::setValorDaHora( double valor )
{
    // se valor maior que zero
    if( valor > 0 )
    {
        // valor da hora recebe o valor
        valorDaHora = valor;
    } // fim if
} // fim função

// função que retorna o valor da hora
double PagamentoBruto::getValorDaHora()
{
    // retorne o valor
    return valorDaHora;
} // fim get

// função para confirura o salário
void PagamentoBruto::setSalario( double hora, double valor )
{
    // se valor maior que zero
    if( valor > 0 )
    {
        // salário recebe o valor
        salario = hora * valor;
    } // fim if
} // fim função

// função que retorna o salário
double PagamentoBruto::getSalario()
{
    // retorne o valor do salário
    return salario;
} // fim função

// função para a entrada de dados pelo usuário
void PagamentoBruto::entrarComDados()
{
    // variáveis
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
            // função recebe o valor
            setHorasTrabalhadas( valor );

            // imprima
            cout << "Entre com o valor da hora R$";
            cin >> valorHora; // recebe do usuário o valor da hora

            // chama a função e atribui o valor informado pelo usuário
            setValorDaHora( valorHora );

            // chama a função calcularSalario
            calcularSalario();

        } // fim if

    // imprima
    cout << "\nEntre com as horas trabalhadas (-1 = sair): ";
    cin >> valor;

    } // fim while

} // fim função

// chama a função cal//cula salário
void PagamentoBruto::calcularSalario()
{
    // mostra o valor do salário
    cout << "Salário R$" << setprecision( 2 ) << fixed << getSalario() << endl;

} // fim função
