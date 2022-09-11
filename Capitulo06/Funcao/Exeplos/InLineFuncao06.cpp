/*
    função inLine
*/
#include <iostream>
#include <clocale>
#include <cstdlib>

using namespace std;

// A função declarada no início serve como protótipo
inline double cubo( const double valor)
{
    return valor * valor * valor;
}

int main()
{
    setlocale(LC_ALL, "Portuguese");

    double vl = 0;

    cout << "Digite um valor: ";
    cin >> vl;

    double resposta = cubo(vl);

    cout << "O cubo de " << vl << " é " << resposta << endl;

    system("pause"); // pausa do programa

    return 0;

} // final principal
