/*
    6.22 Escreva uma fun��o que exibe na margem esquerda da tela um quadrado
    s�lido de asteriscos cujo lado � especificado no par�metro do  tipo inteiro side.
    Por exemplo, se side for 4, a fun��o exibir� o seguinte:
    Deitel, Harvey; Paul, Harvey. C++ Como Programar (p. 243). Edi��o do Kindle.
    Autor: Pedro Filho, 15/09/2021
*/

// incluir biblioteca
#include <iostream> // para cout e cin
#include <locale> // para setlocale
#include <iomanip> // para setw, fixed, setprecision

using namespace std;

// fun��o principal
int main()
{
    // localiza��o geogr�fica
    setlocale( LC_ALL, "portuguese");

    // limpa a tela
    system("cls");

    //loop para linhas
    for( int i = 1; i <= 4; i++ )
    {
        // loop para as colunas
        for( int j = 1; j <= 4; j++ )
        {
            // imprime os asteriscos
            cout << '*';
        } // fim for coluna

        // pula uma linha
        cout << endl;
    } // fim for linha

    // pula linha
    cout << endl;

    system("pause"); // pausa do programa

    return 0; // programa terminado com sucesso

} // fim main
