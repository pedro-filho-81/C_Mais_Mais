/*
    o que esse programa faz
*/
#include <iostream>
#include <clocale>
#include <cstdlib>

using namespace std;

int misterio(int, int);

int main()
{
    setlocale(LC_ALL, "Portuguese");

    int x, y;

    // entrada de dados
    cout << "Digite dois números inteiros diferentes: ";
    cin >> x >> y;

    cout << "O resultado é " << misterio(x, y) << endl;

    system("pause"); // pausa do programa

    return 0;

} // final principal

int misterio(int a, int b)
{
    if( b == 1 )
        return a;
    else
        return a + misterio(a, b - 1);
} // final misterio
