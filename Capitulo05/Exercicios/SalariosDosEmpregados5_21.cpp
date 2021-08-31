/*
    5.21 Uma empresa paga seus empregados como gerentes (que recebem um
    salário fixo por semana), horistas (que recebem um salário-hora  fixo pelas primeiras
    40 horas trabalhadas e mais hora extra com 50% de acréscimo, isto é, 1,5 vez seu
    salário-hora, para as horas extras  trabalhadas), comissionados (que recebem $250
    mais 5,7% bruto das vendas semanais) ou trabalhadores por produção (que recebem
    uma quantia fixa de dinheiro para cada item que produzem — cada trabalhador por
    produção trabalha apenas em um tipo de item nessa  empresa).
    Escreva um programa para computar o pagamento semanal de cada empregado.
    Você não sabe antecipadamente o número  de empregados. Cada tipo de empregado
    tem seu próprio código de salário: os gerentes têm código 1, os horistas têm código 2,
    os comissionados têm código 3 e os trabalhadores por produção têm código 4.
    Utilize um switch para calcular o salário de cada empregado  de acordo com o código
    de pagamento desse empregado. Dentro do switch, solicite que o usuário
    (isto é, o caixa que faz a folha de  pagamento) insira os fatos apropriados de que
    o programa precisa para calcular o salário de cada empregado de acordo com o código
    de pagamento desse empregado.
    Deitel, Harvey; Paul, Harvey. C++ Como Programar (p. 179). Edição do Kindle.
    Autor: Pedro Filho, 31/08/2021
*/

// incluir biblioteca
#include <iostream>
#include <locale>
#include <iomanip>

using namespace std;

// função principal
int main()
{
    // localização geográfica
    setlocale( LC_ALL, "portuguese");

    // limpa a tela
    system("cls" );

    // cria variáveis
    int horasTrabalhadas = 0;
    int valorHorasTrabalhadas = 0;
    int horasExtras = 0;
    int codigo = 0;

    // cria constante
    const float salarioComissao = 250.00;

    // cabeçalho menu das profissões
    cout << "****  PAGAMENTO SALÁRIO DOS EMPREGADOS  ****" << endl;
    cout << "* Código                   Profissão       *" << endl;
    cout << "********************************************" << endl;
    cout << "*    1                     Gerente         *" << endl;
    cout << "*    2                     Horista         *" << endl;
    cout << "*    3                     Comissionado    *" << endl;
    cout << "*    4                     Produção        *" << endl;
    cout << "*    5                     Sair            *" << endl;
    cout << "********************************************" << endl;

    // entrada de dados
    cout << "Digite o código da profisão: ";
    cin >> codigo; // aguarda entrada do usuário

    // switch
    switch( codigo )
    {
        case 5:
            break;

        default:
            cout << "Valor errado!" << endl;

    } // fim switch código

    // pula linha
    cout << endl;

    system("pause"); // pausa do programa

    return 0; // programa terminado com sucesso

} // fim main
