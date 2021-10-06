/*
    1// Figura 7.20: fig07_20.cpp
    2// Este programa classifica valores de um array em ordem crescente.
    Deitel, Harvey; Paul, Harvey. C++ Como Programar (p. 278). Edição do Kindle.
    Autor: 06/10/2021
*/

// incluir biblioteca
#include <iostream> // para cout e cin
#include <locale> // para setlocale
#include <iomanip> // para setw, fixed, setprecision
#include <ctime> // para srand()

using namespace std;

// prototipos
void adicionarValores( int [], int ); // adiciona valores ao vetor
void mostrarValores(int [], int ); // mostra os valores do vetor
int pesquisaLinear( const int [], int, int ); // pesquisa o valor no vetor
void organizarVetor( int [], int ); // para organizar os valores no vetor

// função principal
int main()
{
    // localização geográfica
    setlocale( LC_ALL, "portuguese");

    // limpa a tela
    system("cls");

    // cria constante
    const int tamanho = 10;
    int numero[ tamanho ];
    int chave = 0;
    int resultado = 0;

    srand( time( 0 ) );

    // chama afunção adicionar valores
    adicionarValores( numero, tamanho );

    // chama a função mostrar valores
    mostrarValores( numero, tamanho );

    // pula linha
    cout << endl;

    system("pause"); // pausa do programa

    return 0; // programa terminado com sucesso

} // fim main

// cria a função adicionar valores
void adicionarValores( int vetor[], int tamanho ) // adiciona valores ao vetor
{
    // loop para adicionar valores
    for( int i = 0; i < tamanho; i++ )
        vetor[ i ] = 1 + rand() % 50;

} // fim função adicionarValores

// cria a função mostrar valores
void mostrarValores(int vetor[], int tamanho ) // mostra os valores do vetor
{
    cout << "\nVetor = { ";
    // loop para mostrar os valores do vetor
    for( int i = 0; i < tamanho; i++ )
        cout << vetor[ i ] << " ";
    cout << " };" << endl;

} // fim função mostrar vetor

// cria a função pesquisar valor
int pesquisaLinear( const int vetor[], int tamanho, int chave ) // pesquisa o valor no vetor
{
    // loop para pesquisar no vetor o valor da chave
    for( int i = 0; i < tamanho; i++ )
        // se vetor igual a chave mostre a posição
        if( vetor[ i ] == chave )
            return i;

    return -1; // retorne menos 1( quando não encontrado)
} // fim função pesquisaLinear

// cria a função organizar vetor
//int organizarVetor( int vetor[], int tamanho ) // para organizar os valores no vetor
