#include "CuentaDeDebito.hpp"



CuentaDeDebito::CuentaDeDebito(){}

CuentaDeDebito::CuentaDeDebito(int elNumDeCuenta, float elBalance)
{
 numDeCuenta = elNumDeCuenta;
 balance = elBalance;
}

void CuentaDeDebito::setNumDeCuenta(int elNumDeCuenta)
{
    numDeCuenta = elNumDeCuenta;
}

void CuentaDeDebito::setBalance(float elBalance)
{
    balance = elBalance;
}

int CuentaDeDebito::getNumDeCuenta()
{
    return numDeCuenta;
}

float CuentaDeDebito::getBalance()
{
    return balance;
}
