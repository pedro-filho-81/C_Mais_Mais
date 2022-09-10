/*
    regras de escopo
*/
#include <iostream>
#include <clocale>
#include <cstdlib>

using namespace std;

// protótipos de função
void usaVariavelLocal( void );
void usaVariavelLocalStatic( void );
void usaVariavelGlobal( void );

// variável global
int x = 1;

int main()
{
    setlocale(LC_ALL, "Portuguese");

    // variável local em main
    int x = 5;

    cout << "Variável local em main: " << x << endl;

    // inicia novo escopo
    {
        int x = 7; // variável local

        cout << "Variável local dentro de um escopo em main: " << x << endl;
    } // final escopo

    // exibe a variável local dentro de main
    cout << "Variável local dentro de main: " << x << endl;

    // prieira chamada das funções
    usaVariavelLocal( );
    usaVariavelLocalStatic(  );
    usaVariavelGlobal( );

    // segunda chamada das funções
    usaVariavelLocal(  );
    usaVariavelLocalStatic( );
    usaVariavelGlobal( );

    cout << "Exibe a variável local em main depois das funções: " << x << endl;

    system("pause"); // pausa do programa

    return 0;

} // final principal

// usaVariavelLocal
void usaVariavelLocal()
{
    int x = 25;

    cout << "\nVariável x na função usaVariávelLocal(): " << x << endl;
    ++x;
    cout << " Variável x na função usaVariávelLocal(): " << x
            << " depois do increento" << endl;
} // final usaVariavelLocal

// usaVariavelLocalStatic
void usaVariavelLocalStatic()
{
    static int x = 50;

    cout << "\nVariável x na função usaVariavelLocalStatic: " << x << endl;
    ++x; // increenta x
    cout << "Variável x na função usaVariavelLocalStatic: " << x
            << " Depois do increento."  << endl;
} // final usaVariavelLocalStatic

// função usaVariavelGlobal
void usaVariavelGlobal()
{
    cout << "\nUsa a variável global: " << x << endl;
    x *= 10;
    cout << "Usa a variável global: " << x
            << " Depois da ultiplicação por 10" <<  endl;
} // final usaVariavelGlobal
