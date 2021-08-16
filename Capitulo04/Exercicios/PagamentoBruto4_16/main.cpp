#include <iostream>
#include "PagamentoBruto.h"

using namespace std;

int main()
{
    // limpa a tela
    system("cls");

    // cria o objeto meuSalario da classe pagamento bruto
    PagamentoBruto meuSalario;

    // com o objeto meuSalario chama a função entre com dados
    meuSalario.entrarComDados();

    system("pause"); // pausa o programa

    // fim do programa
    return 0;

} // fim main
