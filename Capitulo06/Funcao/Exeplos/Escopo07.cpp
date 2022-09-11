/*
    regras de escopo
*/
#include <iostream>
#include <clocale>
#include <cstdlib>

using namespace std;

// prot�tipos de fun��o
void usaVariavelLocal( void );
void usaVariavelLocalStatic( void );
void usaVariavelGlobal( void );

// vari�vel global
int x = 1;

int main()
{
    setlocale(LC_ALL, "Portuguese");

    // vari�vel local em main
    int x = 5;

    cout << "Vari�vel local em main: " << x << endl;

    // inicia novo escopo
    {
        int x = 7; // vari�vel local

        cout << "Vari�vel local dentro de um escopo em main: " << x << endl;
    } // final escopo

    // exibe a vari�vel local dentro de main
    cout << "Vari�vel local dentro de main: " << x << endl;

    // prieira chamada das fun��es
    usaVariavelLocal( );
    usaVariavelLocalStatic(  );
    usaVariavelGlobal( );

    // segunda chamada das fun��es
    usaVariavelLocal(  );
    usaVariavelLocalStatic( );
    usaVariavelGlobal( );

    cout << "Exibe a vari�vel local em main depois das fun��es: " << x << endl;

    system("pause"); // pausa do programa

    return 0;

} // final principal

// usaVariavelLocal
void usaVariavelLocal()
{
    int x = 25;

    cout << "\nVari�vel x na fun��o usaVari�velLocal(): " << x << endl;
    ++x;
    cout << " Vari�vel x na fun��o usaVari�velLocal(): " << x
            << " depois do increento" << endl;
} // final usaVariavelLocal

// usaVariavelLocalStatic
void usaVariavelLocalStatic()
{
    static int x = 50;

    cout << "\nVari�vel x na fun��o usaVariavelLocalStatic: " << x << endl;
    ++x; // increenta x
    cout << "Vari�vel x na fun��o usaVariavelLocalStatic: " << x
            << " Depois do increento."  << endl;
} // final usaVariavelLocalStatic

// fun��o usaVariavelGlobal
void usaVariavelGlobal()
{
    cout << "\nUsa a vari�vel global: " << x << endl;
    x *= 10;
    cout << "Usa a vari�vel global: " << x
            << " Depois da ultiplica��o por 10" <<  endl;
} // final usaVariavelGlobal
