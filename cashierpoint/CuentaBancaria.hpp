#include<string>
#include "Cliente.hpp"

#ifndef CUENTABANCARIA_HPP
#define CUENTABANCARIA_HPP

using namespace std;
class CuentaBancaria : public Cliente
{
     private:
     string tipoDeCuenta;
     string numDeCuenta;
     float saldo;
     Cliente cliente;

     public:
     CuentaBancaria();
     CuentaBancaria(string elTipoDeCuenta, string elNumDeCuenta, float elSaldo, Cliente elCliente);

    
     string getTipoDeCuenta();
     string getNumDeCuenta();
     float getSaldo();
     Cliente getCliente();

};
#endif