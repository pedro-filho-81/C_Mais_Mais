#include <iostream>
#include <locale>
#include "Fatura.h"

using namespace std;

int main()
{
    setlocale(LC_ALL, "portuguese");

    // cria o objeto da fatura
    Fatura minhaFatura( "123", "Televisão", 2, 321 );
    Fatura minhaFatura1("321", "Celular", 3, 300 );

    // mostra fatura
    cout << "FATURA\n";
    cout << "Número: " << minhaFatura.getIdentidade() << endl;
    cout << "Produto: " << minhaFatura.getDescricao() << endl;
    cout << "Quantidade: " << minhaFatura.getQuantidade() << endl;
    cout << "Preço R$" << minhaFatura.getPreco() << endl;

    return 0;
}
