/*
    Fatora��o
    Feito por: 17/11/2021
*/

#include <iostream>
#include <locale>

using namespace std;

// fun��o principal
int main()
{
    setlocale( LC_ALL, "portuguese"); // localiza��o geogr�fica

    system("cls"); // limpa a tela

    // vari�vel
    long long num, fator;

    // entrada de dados
    cout << "Digite um valor para fatorar: ";
    cin >> num;

    // loop para fatora��o
    for( fator = 2; fator <= num / fator; fator++ )
    {
        while( num % fator == 0 )
        {
            num /= fator;
            cout << num << " / " << fator << endl;
        } // fim while
    } // fim for

    if( num > 1 )
        cout << num << endl;

    cout << endl; // pula uma linha

    system("pause"); // pausa do programa

    return 0; // programa terminado com sucesso

} // fim main
