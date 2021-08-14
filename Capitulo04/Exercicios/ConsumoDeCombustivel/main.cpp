
#include <iostream>
#include <locale>

#include "Consumo.h" // inclui a classe Consumo no programa principal

using namespace std;

int main()
{
    // localização geográfica
    setlocale( LC_ALL, "portuguese");

    // limpa a tela
    system("cls");

    // cria o objeto da classe Consumo
    Consumo meuConsumo( 287, 13 );

    // mostra o consumo
    meuConsumo.consumoKmPorLitros( 287, 13 );

    // pausa o programa
    system("pause");

    // fim do programa
    return 0;
} // fim main
