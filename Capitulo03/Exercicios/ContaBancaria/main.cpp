
#include <iostream>
#include "Conta.h"

using namespace std;

int main()
{
    // cria o objeto da classe Conta
    Conta minhaConta( 1000 );

    // inprime o valor inicial da conta
    cout << "Saldo inicial: R$" << minhaConta.getSaldo() << endl;

    cout << "Hello world!" << endl;
    return 0;
}
