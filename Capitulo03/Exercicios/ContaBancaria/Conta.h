#include <string>
using namespace std;
class Conta
{
public:
    Conta(int);
    void setSaldo( int );
    int getSaldo();
    void creditoParaConta(int);
    void debitoNaConta(int);
    void  saldoAtual();
private:
    int saldoDaConta;
}; // fim classe
