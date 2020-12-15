#include"CuentaBancaria.hpp"

CuentaBancaria::CuentaBancaria(){}

CuentaBancaria::CuentaBancaria(string elTipoDeCuenta, string elNumDeCuenta, float elSaldo, Cliente elCliente)
{
  tipoDeCuenta = elTipoDeCuenta;
  numDeCuenta = elNumDeCuenta;  
  saldo = elSaldo;
  cliente = elCliente;

}

string CuentaBancaria::getTipoDeCuenta()
{
    return tipoDeCuenta;
}

string CuentaBancaria::getNumDeCuenta()
{
    return numDeCuenta;
}
float CuentaBancaria::getSaldo()
{
    return saldo;
}

Cliente CuentaBancaria::getCliente()
{
    return cliente;
}



