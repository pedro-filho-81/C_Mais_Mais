/*
    tratando array de caractere coo string
*/
#include <iostream>
#include <clocale>
#include <cstdlib>
#include <iomanip>

using namespace std;

int main()
{
    setlocale(LC_ALL, "Portuguese");

    // arrays
    char string1[20]; // array para 20 eleentos
    char string2[] = "String literal"; // array co o taanho da string

    // entrada de dados
    cout << "Entre com uma string literal: ";
    cin >> string1;

    // gera a saída da string
    cout << "A string 1 é " << string1 << "\nA string2 é " << string2 << endl;

    cout << "\nString com espaço entre caracteres." << endl;

    // caracteres de saída até o caractere nulo ser encontrado
    for(int i = 0; i < string1[i] != '\0'; i++)
        cout << string1[i] << ' ';

    cin >> string1;
    cout << "\nstring1 é " << string1 << endl;

    system("pause"); // pausa do programa

    return 0;

} // final principal
