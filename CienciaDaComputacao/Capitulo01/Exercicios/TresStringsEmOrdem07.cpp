/*
    7. Fa�a o exerc�cio 6, mas com tr�s valores de string. Portanto, se o usu�rio
    inserir os valores Steinbeck, Hemingway, Fitzgerald, a sa�da deve ser
    Fitzgerald, Hemingway, Steinbeck.
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

    // vari�veis
    string nome1, nome2, nome3;

    cout << "STRINGS EM ORDEM" << endl;

    // entrada de dados
    cout << "Digite 3 nomes de pessoas: ";
    cin >> nome1 >> nome2 >> nome3;

    if( nome1 < nome2 && nome2 < nome3 && nome3 > nome1 ) // 1 2 3
        cout << nome1 << ", "<< nome2 << ", "<< nome3 << endl;
/*
    if( val1 < val2 && val1 <  val3 && val3 < val2 ) // 1 3 2
        cout << val1 << " " << val3 << " " << val2 << endl;

    if( val2 < val1 && val2 < val3 && val1 < val3 ) // 2 1 3
        cout << val2 << " " << val1 << " " << val3 << endl;

   if( val1 < val2 && val3 < val1 && val3 < val2 ) // 2 3 1
        cout << val3 << " " << val1 << " " << val2 << endl;

   if( val1 > val2 && val1 > val3 && val2 > val3 ) // 3 2 1
        cout << val3 << " " << val2 << " " << val1 << endl;

   if( val1 > val2 && val1 > val3 && val2 < val3 ) // 3 1 2
        cout << val2 << " " << val3 << " " << val1 << endl;

    if( val1 == val2 && val2 == val3  && val3 == val1 ) // todos iguais
        cout << val1 << ", " << val2 << ", " << val3 << endl;

    if( val1 == val2 && val3 > val1  && val3 > val2 ) // 1 1 2
        cout << val1 << ", " << val2 << ", " << val3 << endl;

    if( val1 == val2 && val3 < val1  && val3 < val2 ) // 2 2 1
        cout << val1 << ", " << val2 << ", " << val3 << endl;

    if( val1 < val2 && val1 < val3  && val2 == val3 ) // 1 2 2
        cout << val2 << ", " << val3 << ", " << val1 << endl;

    if( val1 > val2 && val1 > val3  && val2 == val3 ) // 2 1 1
        cout << val2 << ", " << val3 << ", " << val1 << endl;
*/
    system("pause"); // pausa do programa

    return 0; // programa terminado com sucesso

} // fim main
