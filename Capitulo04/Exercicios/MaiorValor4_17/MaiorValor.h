// cria a classe maior valor
#include <iostream>
using namespace std;

// classe MaiorValor
class MaiorValor
{
public:
    // protótipos de função
    void setNumero( int ); // configura o número
    int getNumero(); // retorna o número

    void entradaDeDados();

private:
    // cria variáveis
    int contador = 1;
    int numero = 0;
    double maior = 0;
}; // fim classe
