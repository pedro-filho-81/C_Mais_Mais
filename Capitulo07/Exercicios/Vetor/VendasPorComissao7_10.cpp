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
void adicionarValores( int [], int );
void mostrarValores( int [], int );
void barraDeAsterisco( int [], int ); // gera saída do gráfico de barras das notas

// função principal
int main()
{
    // localização geográfica
    setlocale( LC_ALL, "portuguese");

    // limpa a tela
    system("cls");

    // variável
    const int tamanho = 10;

    // array
    int pagamentoPessoal[ tamanho ];

    // chama a função adicionar valores
    adicionarValores( pagamentoPessoal, tamanho );
    // chama a função mostrar valores
    mostrarValores( pagamentoPessoal, tamanho );
    // chama a função barra de asterisco
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

    // variáveis
    size_t i;
    double totalDasVendas = 0;
    double comissao = 0;
    double salarioAtual = 0;

    // cabeçalho
    cout << "ENTRADA DE VALORES" << endl;

    // loop para adicionar valores ao vetor
    for( i = 0; i < tamanho; i++ )
    {
        // entrada de dados
        cout << "Vendedor " << i + 1 << " total das vendas: R$ ";
        cin >> totalDasVendas;

        // calcular a comissão e salário atual
        comissao = totalDasVendas * 9 / 100;
        salarioAtual = salarioFixo + comissao;

        // vetor recebe o valor do salário atual dos vendedores
        vetor[ i ] = salarioAtual;

    } // fim for
} // fim da função adicionarValores

// cria a função mostrarValores
void mostrarValores( int vetor[], int tamanho )
{
    // configuração
    cout << fixed << setprecision( 2 ); // duas casas decimais

    // cabeçalho
    cout << "\nFOLHA DE PAGAMENTO" << endl;

    // loop linha
    for( int linha = 0; linha < tamanho; linha++ )
    {
        // imprime o vendedor
        cout << "Vendedor " << setw( 3 ) << linha + 1
                << setw( 5 ) << "R$ " << setw( 7 ) << vetor[ linha ] << endl;
    } // fim for linha
} // fim função

// cria a função outputBahart
void barraDeAsterisco( int vetor[], int tamanho ) // gera saída do gráfico de barras das notas
{
    cout << "\nDISTRIBUIÇÃO DOS VALORES" << endl;

    // cria constanteloo
    const int tamanhoFreq = 11;

    // cria array
    int frequencia[ tamanhoFreq ] = { 0 };

    // loop para a coluna
    for( int i = 0; i < tamanhoFreq; i++ )
        // conta a frequência
        ++frequencia[ vetor[ i ] / 100 ];

    // loop para cada frequência de notas mostra um asterisco
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
} // fim função outpurBarChart
