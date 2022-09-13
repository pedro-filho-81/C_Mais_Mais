#include <iostream>
#include <clocale>
#include "../Teplate01/TemplateDeFuncao14.h"

using namespace std;

int main()
{
    setlocale(LC_ALL, "portuguese");

    // variáveis inteiras
    int a, b, c;

    cout << "Digite 3 valores inteiros: ";
    cin >> a >> b >> c;
    cout << "O maior valor inteiro = " << maior(a, b, c) << endl;

    double x, y, z;

    cout << "\nDigite 3 valores reais: ";
    cin >> x >> y >> z;
    cout << "O maior valor real = " << maior(x, y, z) << endl;

    char l1, l2, l3;

    cout << "\nDigite 3 letras: ";
    cin >> l1 >> l2 >> l3;
    cout << "O maior valor = " << maior(l1, l2, l3) << endl;

    system("pause");

    return 0;
}
