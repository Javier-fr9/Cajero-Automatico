#include "CuentaDeCredito.hpp"

CuentaDeCredito::CuentaDeCredito(){}

CuentaDeCredito::CuentaDeCredito(int elNumDeCuenta, float elBalance)
{
   numDeCuenta = elNumDeCuenta;
   balance = elBalance;
}

void CuentaDeCredito::setNumDeCuenta(int elNumDeCuenta)
{
    numDeCuenta = elNumDeCuenta;
}

void CuentaDeCredito::setBalance(float elBalance)
{
    balance = elBalance;
}

int CuentaDeCredito::getNumDeCuenta()
{
    return numDeCuenta;
}

float CuentaDeCredito::getBalance()
{
    return balance;
}
