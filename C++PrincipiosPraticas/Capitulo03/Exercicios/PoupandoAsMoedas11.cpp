/*
    11. Escreva um programa que peça ao usuário para inserir um número de centavos (moedas de 1 cent),
    níqueis (moedas de 5 cent), dez centavos (moedas de 10 cent), quartos (moedas de 25 cent),
    meio dólar (50 moedas de um centavo) e moedas de um dólar (moedas de 100 centavos).
    Consulte o usuário separadamente para saber o número de cada tamanho de moeda, por exemplo,
    "Quantos centavos você tem?" Em seguida, seu programa deve imprimir algo assim:
    Clique aqui para visualizar a imagem de código Você tem 23 centavos.
    Você tem 17 níqueis.
    Você tem 14 moedas.
    Você tem 7 quartos.
    Você tem 3 dólares e meio.
    O valor de todas as suas moedas é de 573 centavos.
    Faça algumas melhorias: se apenas uma moeda for relatada, torne a saída gramaticalmente
    correta, por exemplo, 14 moedas e 1 moeda (não 1 moeda). Além disso, informe a soma em
    dólares e centavos, ou seja, $ 5,73 em vez de 573 centavos.
    Autor: Pedro, 10/11/2021
*/

#include <iostream>
#include <locale>
using namespace std;

// função principal
int main()
{
    // localização geográfica
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
