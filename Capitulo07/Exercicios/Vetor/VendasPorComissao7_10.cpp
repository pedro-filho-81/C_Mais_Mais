/*
    7.10 Utilize um array unidimensional para resolver o seguinte problema.
    Uma empresa paga seu pessoal de vendas por comissão. Os vendedores
    recebem $200 por semana mais 9% de suas vendas brutas por semana.
    Por exemplo, um vendedor que vende $5.000 brutos em uma  semana
    recebe $200 mais 9% de $5.000 ou um total de $650. Escreva um programa
    (utilizando um array de contadores) que determina  quanto o pessoal de vendas
    ganhou em cada um dos seguintes intervalos (suponha que o salário de cada
    vendedor foi truncado para uma  quantidade do tipo inteiro):
    Deitel, Harvey; Paul, Harvey. C++ Como Programar (p. 302). Edição do Kindle.
    Autor: Pedro Filho, 12/10/2021
*/

// incluir biblioteca
#include <iostream> // para cout e cin
#include <locale> // para setlocale
#include <iomanip> // para setw, fixed, setprecision

using namespace std;

// protótipos
void adicionarValores( int, double, double );
void mostrarValores( double, int, double, double, double )

// função principal
int main()
{
    // localização geográfica
    setlocale( LC_ALL, "portuguese");

    // limpa a tela
    system("cls");

    // variável
    const int tamanho = 10;

    // constante
    const double salarioFixo = 200;

    // array
    double pagaDoPessoal[ tamanho ] = { 0 };
    double vendasBrutas = 0;
    double comissao = 0;
    double salarioTotal = 0;
    int vendedor = 0;

    cout << "Valor das vendas brutas: ";
    cin >> vendasBrutas;

    // calcular
    comissao = ( vendasBrutas * 9 ) / 100;
    salarioTotal = salarioFixo + comissao;

    // chama a função adicionarValores
    adicionarValores( pagaDoPessoal, tamanho, vendasBrutas, comissao, salarioTotal );

    // pula linha
    cout << endl;

    system("pause"); // pausa do programa

    return 0; // programa terminado com sucesso

} // fim main

// adicionarValores
void adicionarValores( double vetor, int tamanho, double salario )
{
    size_t i;

    // loop para adicionar valores
    for( i = 0; i < tamanho; i++ )
        vetor[ i ] = salario;

} // fim da função adicionarValores
