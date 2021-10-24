/*
    7.12 A classifica��o por borbulhamento descrita no Exerc�cio 7.11 � ineficiente
    para arrays grandes. Fa�a as seguintes modifica��es simples  para aprimorar
    desempenho da classifica��o por borbulhamento:
    a) Depois da primeira passagem, garante-se que o maior n�mero est� no elemento
    de n�mero mais alto do array; ap�s a segunda passagem,  os dois n�meros mais
    altos est�o �no lugar�; e assim por diante. Em vez de fazer nove compara��es em
    cada passagem, modifique a  classifica��o por borbulhamento para fazer oito
    compara��es na segunda passagem, sete na terceira passagem e assim por diante.
    b) Os dados no array j� podem estar na ordem adequada ou ordem quase adequada,
    ent�o por que fazer nove passagens se menos seriam  suficientes?
    Modifique a classifica��o para verificar no fim de cada passagem se alguma troca foi feita.
    Se nenhuma troca tiver sido  feita, ent�o os dados j� devem estar na ordem apropriada;
    portanto, o programa deve terminar. Se trocas foram feitas, ent�o pelo menos  mais uma
    passagem � necess�ria.
    Deitel, Harvey; Paul, Harvey. C++ Como Programar (p. 303). Edi��o do Kindle.
    Autor: Pedri Filho 23/10/2021
*/

#include <iostream>
#include <locale>
#include

// fun��o principal
int main()
{
    // localiza��o geogr�fica
    setlocale( LC_ALL, "portuguese");

    // limpa a tela
    system("cls");

    system("pause"); // pausa do programa

    return 0; // programa terminado com sucesso

} // fim main
