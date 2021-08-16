/*
    4.17 O processo de localizar o maior número (isto é, o máximo de um grupo de valores)
    é freqüentemente utilizado em aplicativos de computador. Por exemplo, um programa
    que determina o vencedor de uma competição de vendas insere o número de unidades
    vendidas por  vendedor. O vendedor que vende mais unidades ganha a competição.
    Escreva um programa em pseudocódigo, e então um programa em  C++, que utiliza uma
    instrução while para determinar e imprimir o maior número dos dez números inseridos pelo
    usuário. Seu programa  deve utilizar três variáveis, como segue:  counter: Um contador para
    contar até 10 (isto é, monitorar quantos números foram inseridos e determinar quando todos
    os  10 números foram processados).  number: A entrada numérica atual para
    o programa.  largest: O maior número encontrado até agora.
    Deitel, Harvey; Paul, Harvey. C++ Como Programar (p. 135). Edição do Kindle.
    Autor Pedro Filho, 16/06/2021.
*/

#include <iostream>
#include "MaiorValor.h"

using namespace std;

void MaiorValor::setNumero( int num );
{
    // se o número maior que zero
    if( num > 0 )
    {
        numero = num;
    }
}
