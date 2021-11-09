/*
    1. Este exercício é escrever um programa que produz uma carta de formulário
    simples com base na entrada do usuário. Comece digitando o código de §3.1
    solicitando que um usuário insira seu primeiro nome e escreva “Olá, first_name”, onde first_name é o nome inserido pelo usuário. Em seguida, modifique seu código da seguinte forma: altere o prompt para “Digite o nome da pessoa para quem deseja escrever” e altere a saída para “Prezado nome,”. Não se esqueça da vírgula.
    Autor:
*/

#include <iostream>
#include <locale>
using namespace std.

// função principal
int main()
{
    // localização geográfica
    setlocale( LC_ALL, "portuguese");

    // limpa a tela
    system("cls");

    // variaveis
    string  primeiroNome = " ";

    // entrada de dados
    cout << "Para quem você deseja escrever: ";
    cin >> primeiroNome;

    // mostra mensagem
    cout << "Prezado, " << primeiroNome; << endl;

    system("pause"); // pausa do programa

    return 0; // programa terminado com sucesso

} // fim main
