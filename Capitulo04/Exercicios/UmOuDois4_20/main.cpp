/*
    4.20 O programa de resultados de teste da Figura 4.16�Figura 4.18 sup�e que
    qualquer valor inserido pelo usu�rio que n�o for 1 deve ser 2.
    Modifique o aplicativo para
    Deitel, Harvey; Paul, Harvey. C++ Como Programar (p. 136). Edi��o do Kindle.
    Autor: Pedro Filho, 17/08/2021
*/

#include <iostream>
#include <locale>

using namespace std;

int main()
{
    // localizador geogr�fico
    setlocale(LC_ALL, "portuguese");

    // limpa a tela
    system("cls");

    // cria vari�veis
    int numero = 0;
    int contador = 1;
    int aprovados = 0;
    int reprovados = 0;
    int errados = 0;

    // enquanto contador menor ou igual a 10 fa�a
    while( contador <= 10)
    {
        // entrada de dados
        cout << contador << "� Digite 1 para aprovado ou 2 para reprovado: ";
        cin >> numero; // aguarda entrada do usu�rio

        // se numero igual a 1
        if( numero == 1 )
            aprovados++; // aprovados incrementa 1

        if( numero == 2 ) // se n�mero igual a 2
            reprovados++; // reprovados incrementa 1

        // contador incrementa 1
        contador++;

        if( numero > 2 ) // se numero maior que 2
        {
            cout << "Errado! N�mero maior que 2" << endl;
            errados++; // errados incrementa 1
            contador--; // contador decrementa 1
        } // fim if

        if( numero < 1 ) // se numero menor que 1
        {
            cout << "Errado! N�mero menor que 1" << endl;
            errados++; // errados incrementa 1
            contador--; // contador decrementa 1
        } // fim if

    } // fim while contador

    // mostra resultado
    cout << "\nForam cadastrados " << contador - 1 << " Alunos." << endl;
    cout << "Aprovados: " << aprovados << "\nReprovados: " << reprovados << endl;
    cout << "Errados: " << errados << endl;

    // pausa o programa
    system("pause");

    // fim do programa
    return 0;
} // fim main
