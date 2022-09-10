/*
    jogo de dados craps
*/
#include <iostream>
#include <clocale>
#include <cstdlib>
#include <ctime>

using namespace std;

int rolaDados(); // protótipo

int main()
{
    setlocale(LC_ALL, "Portuguese");

    // enumerador
    enum Status {CONTINUE, VENCEU, PERDEU };

    int meusPontos; // se não ganhar ou perder na primeira jogada

    Status statusDoJogo; // mostra a situação no jogo

    srand( time( 0 ) );

    int somaDosDados = rolaDados(); // recebe o valor dos dados

    switch( somaDosDados )
    {
        case 7: // se sair na primeira jogada
        case 11: // idem
            statusDoJogo = VENCEU;
            break;

        case 2: // se sair perde a jogada
        case 3: // idem
        case 12: // idem
            statusDoJogo = PERDEU;
            break;

        default: // se você nem venceu, nem perdeu
            statusDoJogo = CONTINUE;
            meusPontos = somaDosDados;
            cout << "meus pontos são: " << meusPontos << endl;
    } // final switch

    // enquanto o jugo não estiver copleto faça
    while( statusDoJogo == CONTINUE )
    {
        somaDosDados = rolaDados();

        if(somaDosDados == meusPontos)
            statusDoJogo = VENCEU;
        else if( somaDosDados == 7)
            statusDoJogo = PERDEU;

    } // final enquanto

    // se o status do jogo igual a venceu
    if( statusDoJogo == VENCEU)
        cout << "Você VENCEU!" << endl;
    else
        cout << "Você PERDEU!" << endl;

    system("pause"); // pausa do programa

    return 0;

} // final principal

// função rola dados
int rolaDados()
{
    int dado1 = 1 + rand() % 6;
    int dado2 = 1 + rand() % 6;

    int somaDados = dado1 + dado2;

    cout << dado1 << " + " << dado2 << " = " << somaDados << endl;

    return somaDados;

} // final rola dados
