/*

*/
#include <iostream>
#include <clocale>
#include <cstdlib>
#include <iomanip>

using namespace std;

int main()
{
    setlocale(LC_ALL, "Portuguese");

    // vari�veis
    int frequence1 = 0;
    int frequence2 = 0;
    int frequence3 = 0;
    int frequence4 = 0;
    int frequence5 = 0;
    int frequence6 = 0;
    int face = 0; // armazena o �ltimo valor lan�ado

    srand( time( 0 ) );

    // loop para lan�ar os dados
    for(int i = 0; i < 600000; i++)
    {
        // face recebe o valor do dado
        face = 1 + rand() % 6;  // gera n�mero aleat�rio entre 1 e 6

        // deterina o valor do lan�amento
        switch(face)
        {
            case 1:
                ++frequence1;
                break;
            case 2:
                ++frequence2;
                break;
            case 3:
                ++frequence3;
                break;
            case 4:
                ++frequence4;
                break;
            case 5:
                ++frequence5; //
                break;
            case 6:
                ++frequence6;
                break;
            default:
                cout << "Valor inv�lido!";
        } // final switch
    } // final for

    // exibir resultado
    cout << "Face" << setw(13) << "Frequ�ncia" << endl;
    cout << "   1" << setw(13) << frequence1 << endl;
    cout << "   2" << setw(13) << frequence2 << endl;
    cout << "   3" << setw(13) << frequence3 << endl;
    cout << "   4" << setw(13) << frequence4 << endl;
    cout << "   5" << setw(13) << frequence5 << endl;
    cout << "   6" << setw(13) << frequence6 << endl;

    system("pause"); // pausa do programa

    return 0;

} // final principal
