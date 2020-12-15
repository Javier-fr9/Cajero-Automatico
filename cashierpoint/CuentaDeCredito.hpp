#include<string>
#include"Cliente.hpp"
using namespace std;

class CuentaDeCredito
{
 private:
    Cliente::Cliente;
     int numDeCuenta;
     float balance;

 public:
 CuentaDeCredito();
 CuentaDeCredito(int elNumDeCuenta, float elBalance);
 
 void setBalance(float elBalance);
 void setNumDeCuenta(int elNumDeCuenta);

 float getBalance();
 int getNumDeCuenta();
    

};