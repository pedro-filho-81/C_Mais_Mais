/*
    7.10 Utilize um array unidimensional para resolver o seguinte problema.
    Uma empresa paga seu pessoal de vendas por comiss�o. Os vendedores
    recebem $200 por semana mais 9% de suas vendas brutas por semana.
    Por exemplo, um vendedor que vende $5.000 brutos em uma  semana
    recebe $200 mais 9% de $5.000 ou um total de $650. Escreva um programa
    (utilizando um array de contadores) que determina  quanto o pessoal de vendas
    ganhou em cada um dos seguintes intervalos (suponha que o sal�rio de cada
    vendedor foi truncado para uma  quantidade do tipo inteiro):
    Deitel, Harvey; Paul, Harvey. C++ Como Programar (p. 302). Edi��o do Kindle.
    Autor: Pedro Filho, 12/10/2021
*/

// incluir biblioteca
#include <iostream> // para cout e cin
#include <locale> // para setlocale
#include <iomanip> // para setw, fixed, setprecision

using namespace std;

// prot�tipos
void adicionarValores( int [], int );
void mostrarValores( int [], int );
void barraDeAsterisco( int [], int ); // gera sa�da do gr�fico de barras das notas

// fun��o principal
int main()
{
    // localiza��o geogr�fica
    setlocale( LC_ALL, "portuguese");

    // limpa a tela
    system("cls");

    // vari�vel
    const int tamanho = 10;

    // array
    int pagamentoPessoal[ tamanho ];

    // chama a fun��o adicionar valores
    adicionarValores( pagamentoPessoal, tamanho );
    // chama a fun��o mostrar valores
    mostrarValores( pagamentoPessoal, tamanho );
    // chama a fun��o barra de asterisco
    barraDeAsterisco( pagamentoPessoal, tamanho );

    // pula linha
    cout << endl;

    system("pause"); // pausa do programa

    return 0; // programa terminado com sucesso

} // fim main

// adicionarValores
void adicionarValores( int vetor[], int tamanho )
{
    const int salarioFixo = 200;

    // vari�veis
    size_t i;
    double totalDasVendas = 0;
    double comissao = 0;
    double salarioAtual = 0;

    // cabe�alho
    cout << "ENTRADA DE VALORES" << endl;

    // loop para adicionar valores ao vetor
    for( i = 0; i < tamanho; i++ )
    {
        // entrada de dados
        cout << "Vendedor " << i + 1 << " total das vendas: R$ ";
        cin >> totalDasVendas;

        // calcular a comiss�o e sal�rio atual
        comissao = totalDasVendas * 9 / 100;
        salarioAtual = salarioFixo + comissao;

        // vetor recebe o valor do sal�rio atual dos vendedores
        vetor[ i ] = salarioAtual;

    } // fim for
} // fim da fun��o adicionarValores

// cria a fun��o mostrarValores
void mostrarValores( int vetor[], int tamanho )
{
    // configura��o
    cout << fixed << setprecision( 2 ); // duas casas decimais

    // cabe�alho
    cout << "\nFOLHA DE PAGAMENTO" << endl;

    // loop linha
    for( int linha = 0; linha < tamanho; linha++ )
    {
        // imprime o vendedor
        cout << "Vendedor " << setw( 3 ) << linha + 1
                << setw( 5 ) << "R$ " << setw( 7 ) << vetor[ linha ] << endl;
    } // fim for linha
} // fim fun��o

// cria a fun��o outputBahart
void barraDeAsterisco( int vetor[], int tamanho ) // gera sa�da do gr�fico de barras das notas
{
    cout << "\nDISTRIBUI��O DOS VALORES" << endl;

    // cria constanteloo
    const int tamanhoFreq = 11;

    // cria array
    int frequencia[ tamanhoFreq ] = { 0 };

    // loop para a coluna
    for( int i = 0; i < tamanhoFreq; i++ )
        // conta a frequ�ncia
        ++frequencia[ vetor[ i ] / 100 ];

    // loop para cada frequ�ncia de notas mostra um asterisco
    for( int conta = 0; conta < tamanhoFreq; conta++ )
    {
        if( conta == 10 )
            cout << "          R$ 1000: ";
        else
            cout << "  R$ " << ( conta ) * 100 << " -" << " R$ " << ( ( conta ) * 100 ) + 99 << ":  ";

        // loop para mostrar o asteriscos
        for( int stars = 0; stars < frequencia[ conta ]; stars++ )
        {
            cout << "*";
        } // fim for asterisco

        cout << endl; // pula uma linha

    } // fim for conta
} // fim fun��o outpurBarChart
