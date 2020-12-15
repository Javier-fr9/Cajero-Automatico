#include<string>
#include"Cliente.hpp"

#ifndef CUENTADEDEBITO_HPP
#define CUENTADEDEBITO_HPP

using namespace std;

class CuentaDeDebito
{
 private:
    Cliente::Cliente;
     int numDeCuenta;
     float balance;

 public:
 CuentaDeDebito();
 CuentaDeDebito(int elNumDeCuenta, float elBalance);

 void setNumDeCuenta(int elNumDeCuenta);
 void setBalance(float elBalance);

 int getNumDeCuenta();
 float getBalance();
    

};
#endif