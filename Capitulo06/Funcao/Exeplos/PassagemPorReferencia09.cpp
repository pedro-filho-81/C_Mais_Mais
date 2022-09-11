/*
    passage por refer�ncia, criando um apelido
*/
#include <iostream>
#include <clocale>
#include <cstdlib>

using namespace std;

int main()
{
    setlocale(LC_ALL, "Portuguese");

    // vari�veis
    int x = 3;
    int &y = x; // y � o apelido referente de x (&y se refere ao endere�o da vari�vel x )

    cout << "x antes da passage para y = " << x << endl;

    y = 7; // modifica o valor de x

    cout << "\nx depois de odificado por y = " << x << endl;

    system("pause"); // pausa do programa

    return 0;

} // final principal
