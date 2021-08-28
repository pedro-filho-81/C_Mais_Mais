/*
    5.12 Escreva um programa que utiliza instruções for para imprimir os seguintes
    padrões separadamente, um embaixo do outro. Utilize loops  for para gerar os padrões.
    Todos os asteriscos (*) devem ser impressos por uma única instrução na forma
    cout << ‘*’; (isso faz com  que os asteriscos sejam impressos lado a lado).
    [Dica: Os últimos dois padrões requerem que cada linha inicie com um número
    apropriado  de espaços em branco. Crédito extra: Combine seu código dos quatro
    problemas separados em um único programa que imprime todos  os quatro padrões
    lado a lado usando inteligentemente os loops for aninhados.]
    Deitel, Harvey; Paul, Harvey. C++ Como Programar (p. 178). Edição do Kindle.
    Autor: Pedro Filho, 28/08/2021
*/

// incluir biblioteca
#include <iostream>
#include <locale>

using namespace std;

// função principal
int main()
{
    // localização geográfica
    setlocale( LC_ALL, "portuguese");

    // limpa a tela
    system("cls");

    // pula linha
    cout << endl;

    system("pause"); // pausa do programa

    return 0; // programa terminado com sucesso

} // fim main
