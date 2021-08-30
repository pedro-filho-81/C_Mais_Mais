/*
    5.19 Calcule o valor de π das séries infinitas
    π = 4 – 4/3  +  4/5  –  4/7  +  4/9  –  4/11
    Imprima uma tabela que mostra o valor aproximado de π depois de cada um
    dos primeiros 1.000 termos dessa série.
    Deitel, Harvey; Paul, Harvey. C++ Como Programar (p. 179). Edição do Kindle.
    Autor: Pedro Filho, 30/08/2021
*/

// incluir biblioteca
#include <iostream>
#include <locale>
#include <iomanip>
#include <cmath>

using namespace std;

// função principal
int main()
{
    // localização geográfica
    setlocale( LC_ALL, "portuguese");

    // limpa a tela
    system("cls");

    // variáveis
    float pi = 0.0;

    // configura o ponto flutuante com 10 digitos
    cout << fixed << setprecision(15) << endl;

    // loop for para achar o pi
    for( int n = 0; n < 1000; n++ )
    {
        // formula de Leibniz
        pi += pow( -1, n ) / ( 2 * n + 1 ) ;

        // imprime o resultado
        cout << n << " " << "PI = " << pi * 4 << endl;
    } // fim for

    // pula linha
    cout << endl;

    system("pause"); // pausa do programa

    return 0; // programa terminado com sucesso

} // fim main
