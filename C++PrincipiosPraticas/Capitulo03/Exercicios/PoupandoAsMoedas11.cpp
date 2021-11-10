/*
    11. Escreva um programa que pe�a ao usu�rio para inserir um n�mero de centavos (moedas de 1 cent),
    n�queis (moedas de 5 cent), dez centavos (moedas de 10 cent), quartos (moedas de 25 cent),
    meio d�lar (50 moedas de um centavo) e moedas de um d�lar (moedas de 100 centavos).
    Consulte o usu�rio separadamente para saber o n�mero de cada tamanho de moeda, por exemplo,
    "Quantos centavos voc� tem?" Em seguida, seu programa deve imprimir algo assim:
    Clique aqui para visualizar a imagem de c�digo Voc� tem 23 centavos.
    Voc� tem 17 n�queis.
    Voc� tem 14 moedas.
    Voc� tem 7 quartos.
    Voc� tem 3 d�lares e meio.
    O valor de todas as suas moedas � de 573 centavos.
    Fa�a algumas melhorias: se apenas uma moeda for relatada, torne a sa�da gramaticalmente
    correta, por exemplo, 14 moedas e 1 moeda (n�o 1 moeda). Al�m disso, informe a soma em
    d�lares e centavos, ou seja, $ 5,73 em vez de 573 centavos.
    Autor: Pedro, 10/11/2021
*/

#include <iostream>
#include <locale>
using namespace std;

// fun��o principal
int main()
{
    // localiza��o geogr�fica
    setlocale( LC_ALL, "portuguese");

    // limpa a tela
    system("cls");

    double valorDaMOeda = 0.0;
    string tipoDaMoeda = " ";
    int contaUmReal = 0;
    int contaCinquentaCent = 0;
    int contaVinteCincoCent = 0;
    int contaDezCent = 0;
    int contaCincoCent = 0;
    int contaUmCent = 0;

    cout << "   POUPANDO MOEDAS NO PORQUINHO" << endl;

    // entrada de dados
    cout << "\t*****************" << endl;
    cout << "\t*   R$ 1,00     *" << endl;
    cout << "\t*   R$ 0,50     *" << endl;
    cout << "\t*   R$ 0,25     *" << endl;
    cout << "\t*   R$ 0,10     *" << endl;
    cout << "\t*   R$ 0,05     *" << endl;
    cout << "\t*   R$ 0,01     *" << endl;
    cout << "\t*****************" << endl;

    // entrada de dados
    cout << "Colocando moedas no porquinho R$ ";
    cin >> valorDaMOeda;

    cout << "R$ " << valorDaMOeda << endl;

    system("pause"); // pausa do programa

    return 0; // programa terminado com sucesso

} // fim main
