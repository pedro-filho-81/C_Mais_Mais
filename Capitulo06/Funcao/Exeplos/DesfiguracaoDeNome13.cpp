/*

*/
#include <iostream>
#include <clocale>
#include <cstdlib>

using namespace std;

int quadrado(int x)
{
    return x * x;
}

double quadrado(double x)
{
    return x * x;
}

// função que recebe arguentos de tipos diferentes
// int,  float, char e int &
void qualquerCoisa(int a, float b, char c, int &d)
{
    // fição se corpo
}

// função que recebe arguentos de tipos diversos
// char, int, float e double
int qualquerCoisa2(char a, int b, float &c, double &d)
{
    return 0;
}

int main()
{
    setlocale(LC_ALL, "Portuguese");


    system("pause"); // pausa do programa

    return 0;

} // final principal
