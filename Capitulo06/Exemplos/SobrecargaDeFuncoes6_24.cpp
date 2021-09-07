/*
    1// Figura 6.23: fig06_23.cpp
    2// Utilizando o operador unário de resolução de escopo.
    Deitel, Harvey; Paul, Harvey. C++ Como Programar (p. 216). Edição do Kindle.
*/

// incluir biblioteca
#include <iostream> // para cout e cin
#include <locale> // para setlocale
#include <iomanip> // para setw, fixed, setprecision

using namespace std;

// cria a função quadrado com inteiros
int quadrado( int x )
{
    // retorna x
    return x * x;
} // fim função quadrado

// cria a função quadrado com double
double quadrado( double y )
{
    // retorna o quadrado
    return y * y;
} // fim função quadrado


// função principal
int main()
{
    // localização geográfica
    setlocale( LC_ALL, "portuguese");

    // limpa a tela
    system("cls");

    // cabeçalho
    cout << "SOBRECARGA DE FUNÇÃO" << endl;

    // imprime o quadrado do número inteiro
    cout << "O quadrado de 7 é " << quadrado( 7 ) << endl;

    // imprime o quadrado do número real
    cout << "O quadrado de 7,5 é " << quadrado( 7.5 ) << endl;

    // pula linha
    cout << endl;

    system("pause"); // pausa do programa

    return 0; // programa terminado com sucesso

} // fim main
