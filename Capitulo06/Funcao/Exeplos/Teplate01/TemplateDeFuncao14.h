/*
    encontra o maior valor entre 3 arguentos
    substitui a sobrecarga de função
*/
template <class T> // template <tipo nome>
T  maior(T valor1, T valor2, T valor3)
{
    T maiorValor = valor1;

    if(valor2 > maiorValor)
        maiorValor = valor2;

    if (valor3 > maiorValor)
        maiorValor = valor3;

    return maiorValor;
} // final template
