// cria a classe maior valor
#include <iostream>
using namespace std;

// classe MaiorValor
class MaiorValor
{
public:
    // prot�tipos de fun��o
    void setNumero( int ); // configura o n�mero
    int getNumero(); // retorna o n�mero

    void entradaDeDados();

private:
    // cria vari�veis
    int contador = 1;
    int numero = 0;
    double maior = 0;
}; // fim classe
