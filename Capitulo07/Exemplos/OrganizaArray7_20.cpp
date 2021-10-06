/*
    1// Figura 7.20: fig07_20.cpp
    2// Este programa classifica valores de um array em ordem crescente.
    Deitel, Harvey; Paul, Harvey. C++ Como Programar (p. 278). Edi��o do Kindle.
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

// fun��o principal
int main()
{
    // localiza��o geogr�fica
    setlocale( LC_ALL, "portuguese");

    // limpa a tela
    system("cls");

    // cria constante
    const int tamanho = 10;
    int numero[ tamanho ];
    int chave = 0;
    int resultado = 0;

    srand( time( 0 ) );

    // chama afun��o adicionar valores
    adicionarValores( numero, tamanho );

    // chama a fun��o mostrar valores
    mostrarValores( numero, tamanho );

    // pula linha
    cout << endl;

    system("pause"); // pausa do programa

    return 0; // programa terminado com sucesso

} // fim main

// cria a fun��o adicionar valores
void adicionarValores( int vetor[], int tamanho ) // adiciona valores ao vetor
{
    // loop para adicionar valores
    for( int i = 0; i < tamanho; i++ )
        vetor[ i ] = 1 + rand() % 50;

} // fim fun��o adicionarValores

// cria a fun��o mostrar valores
void mostrarValores(int vetor[], int tamanho ) // mostra os valores do vetor
{
    cout << "\nVetor = { ";
    // loop para mostrar os valores do vetor
    for( int i = 0; i < tamanho; i++ )
        cout << vetor[ i ] << " ";
    cout << " };" << endl;

} // fim fun��o mostrar vetor

// cria a fun��o pesquisar valor
int pesquisaLinear( const int vetor[], int tamanho, int chave ) // pesquisa o valor no vetor
{
    // loop para pesquisar no vetor o valor da chave
    for( int i = 0; i < tamanho; i++ )
        // se vetor igual a chave mostre a posi��o
        if( vetor[ i ] == chave )
            return i;

    return -1; // retorne menos 1( quando n�o encontrado)
} // fim fun��o pesquisaLinear

// cria a fun��o organizar vetor
//int organizarVetor( int vetor[], int tamanho ) // para organizar os valores no vetor
