/*
    4.25 Escreva um programa que l� o tamanho do lado de um quadrado e, ent�o,
    imprime um quadrado vazado com asteriscos e espa�os em  branco.
    Seu programa deve trabalhar com quadrados de todos os tamanhos entre 1 e 20.
    Deitel, Harvey; Paul, Harvey. C++ Como Programar (p. 137). Edi��o do Kindle.
    Autor: Pedro, 18/08/2021
*/

// incluir biblioteca
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

    // vari�vel
    int linha = 0;
    int vazio = 0;
    int tamanho;

    // entrada de dados
    cout << "Entre com o tamanho do quadrado: ";
    cin >> tamanho; // aguardada a tentrda do usu�rio

    // PRIMEIRA LINHA
    // enquanto contar menor ou igual a tamanho
    while( linha <= tamanho )
    {
        // imprime uma linha
        cout << "*";
        linha++; // incrementa contar
    } // fim while

    while()

    system("pause"); // pausa do programa

    return 0; // programa terminado com sucesso

} // fim main
