/*
    1. Este exerc�cio � escrever um programa que produz uma carta de formul�rio
    simples com base na entrada do usu�rio. Comece digitando o c�digo de �3.1
    solicitando que um usu�rio insira seu primeiro nome e escreva �Ol�, first_name�, onde first_name � o nome inserido pelo usu�rio. Em seguida, modifique seu c�digo da seguinte forma: altere o prompt para �Digite o nome da pessoa para quem deseja escrever� e altere a sa�da para �Prezado nome,�. N�o se esque�a da v�rgula.
    Autor:
*/

#include <iostream>
#include <locale>
using namespace std.

// fun��o principal
int main()
{
    // localiza��o geogr�fica
    setlocale( LC_ALL, "portuguese");

    // limpa a tela
    system("cls");

    // variaveis
    string  primeiroNome = " ";

    // entrada de dados
    cout << "Para quem voc� deseja escrever: ";
    cin >> primeiroNome;

    // mostra mensagem
    cout << "Prezado, " << primeiroNome; << endl;

    system("pause"); // pausa do programa

    return 0; // programa terminado com sucesso

} // fim main
