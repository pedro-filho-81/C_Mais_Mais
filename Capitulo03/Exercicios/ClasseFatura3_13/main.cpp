#include <iostream>
#include <locale>
#include "Fatura.h"

using namespace std;

int main()
{
    setlocale(LC_ALL, "portuguese");

    // cria o objeto da fatura
    Fatura minhaFatura( "123", "Televis�o", 2, 321 );
    Fatura minhaFatura1("321", "Celular", 3, 300 );

    // mostra fatura
    cout << "FATURA\n";
    cout << "N�mero: " << minhaFatura.getIdentidade() << endl;
    cout << "Produto: " << minhaFatura.getDescricao() << endl;
    cout << "Quantidade: " << minhaFatura.getQuantidade() << endl;
    cout << "Pre�o R$" << minhaFatura.getPreco() << endl;

    return 0;
}
