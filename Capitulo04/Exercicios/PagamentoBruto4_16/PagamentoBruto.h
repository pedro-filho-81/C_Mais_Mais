#include <iostream>

using namespace std;

// cria a classe PagamentoBruto
class PagamentoBruto
{
public:
    // prot�tipo de fun��es
    void setHorasTrabalhadas( int horas ); // configura as horas trabalhadas
    int getHorasTrabalhadas(); // retorna �s horas trabalhadas
    void setValorDaHora( double ); // configura o valor da hora
    double getValorDaHora(); // retorna o valor da hora
    void calcularSalario(); // calcula o valor do sal�rio

private:
    // vari�veis da classe
    int horasTrabalhadas;
    double valorDaHora;
    double salario;

}; // fim classe
