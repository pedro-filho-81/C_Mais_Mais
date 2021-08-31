/*
    5.21 Uma empresa paga seus empregados como gerentes (que recebem um
    sal�rio fixo por semana), horistas (que recebem um sal�rio-hora  fixo pelas primeiras
    40 horas trabalhadas e mais hora extra com 50% de acr�scimo, isto �, 1,5 vez seu
    sal�rio-hora, para as horas extras  trabalhadas), comissionados (que recebem $250
    mais 5,7% bruto das vendas semanais) ou trabalhadores por produ��o (que recebem
    uma quantia fixa de dinheiro para cada item que produzem � cada trabalhador por
    produ��o trabalha apenas em um tipo de item nessa  empresa).
    Escreva um programa para computar o pagamento semanal de cada empregado.
    Voc� n�o sabe antecipadamente o n�mero  de empregados. Cada tipo de empregado
    tem seu pr�prio c�digo de sal�rio: os gerentes t�m c�digo 1, os horistas t�m c�digo 2,
    os comissionados t�m c�digo 3 e os trabalhadores por produ��o t�m c�digo 4.
    Utilize um switch para calcular o sal�rio de cada empregado  de acordo com o c�digo
    de pagamento desse empregado. Dentro do switch, solicite que o usu�rio
    (isto �, o caixa que faz a folha de  pagamento) insira os fatos apropriados de que
    o programa precisa para calcular o sal�rio de cada empregado de acordo com o c�digo
    de pagamento desse empregado.
    Deitel, Harvey; Paul, Harvey. C++ Como Programar (p. 179). Edi��o do Kindle.
    Autor: Pedro Filho, 31/08/2021
*/

// incluir biblioteca
#include <iostream>
#include <locale>
#include <iomanip>

using namespace std;

// fun��o principal
int main()
{
    // localiza��o geogr�fica
    setlocale( LC_ALL, "portuguese");

    // limpa a tela
    system("cls" );

    // cria vari�veis
    int horasTrabalhadas = 0;
    int valorHorasTrabalhadas = 0;
    int horasExtras = 0;
    int codigo = 0;

    // cria constante
    const float salarioComissao = 250.00;

    // cabe�alho menu das profiss�es
    cout << "****  PAGAMENTO SAL�RIO DOS EMPREGADOS  ****" << endl;
    cout << "* C�digo                   Profiss�o       *" << endl;
    cout << "********************************************" << endl;
    cout << "*    1                     Gerente         *" << endl;
    cout << "*    2                     Horista         *" << endl;
    cout << "*    3                     Comissionado    *" << endl;
    cout << "*    4                     Produ��o        *" << endl;
    cout << "*    5                     Sair            *" << endl;
    cout << "********************************************" << endl;

    // entrada de dados
    cout << "Digite o c�digo da profis�o: ";
    cin >> codigo; // aguarda entrada do usu�rio

    // switch
    switch( codigo )
    {
        case 5:
            break;

        default:
            cout << "Valor errado!" << endl;

    } // fim switch c�digo

    // pula linha
    cout << endl;

    system("pause"); // pausa do programa

    return 0; // programa terminado com sucesso

} // fim main
