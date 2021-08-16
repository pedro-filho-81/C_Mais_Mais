#include <iostream>

using namespace std;

// cria a classe PagamentoBruto
class PagamentoBruto
{
public:
    // protótipo de funções
    void setHorasTrabalhadas( int horas ); // configura as horas trabalhadas
    int getHorasTrabalhadas(); // retorna às horas trabalhadas
    void setValorDaHora( double ); // configura o valor da hora
    double getValorDaHora(); // retorna o valor da hora
    void calcularSalario(); // calcula o valor do salário

private:
    // variáveis da classe
    int horasTrabalhadas;
    double valorDaHora;
    double salario;

}; // fim classe
