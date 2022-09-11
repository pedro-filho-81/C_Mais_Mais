/*
    usa argumento padrão na função
*/
#include <iostream>
#include <clocale>
#include <cstdlib>

using namespace std;

// protótipo
int volumeDaCaixa( int tamanho = 1, int largura = 1, int altura = 1);

int main()
{
    setlocale(LC_ALL, "Portuguese");

    cout << "O valor padrão do volume da caixa é = "
            << volumeDaCaixa() << endl;
    cout << "O valor do volume da caixa com tamanho = 10 é "
            << volumeDaCaixa(10) << endl;
    cout << "O valor do volue da caixa com tamanho = 10, largura = 5 é "
            << volumeDaCaixa(10, 5) << endl;
    cout << "O valor do volume da caixa com tamanho = 10, largura = 5, e altura = 3 é "
            << volumeDaCaixa(10, 5, 3) << endl;

    system("pause"); // pausa do programa

    return 0;

} // final principal

int volumeDaCaixa(int tamanho, int largura, int altura)
{
    return tamanho * altura * largura;
} // final volumeDaCaixa
