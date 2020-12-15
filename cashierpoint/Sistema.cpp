#include "Sistema.hpp"
#include <iostream>

Sistema::Sistema(){posCuentaDeAcceso = 0 ;}

void Sistema::agrega(CuentaDeAcceso laCuentaDeAcceso)
{
    cuentasDeAcceso[posCuentaDeAcceso] = laCuentaDeAcceso;
    posCuentaDeAcceso = posCuentaDeAcceso + 1;
}

void Sistema::validaCliente(CuentaDeAcceso laCuentaDeAcceso)
{
    for(int posicion=0; posicion < 1; posicion ++)
    {
        if (!cuentasDeAcceso[posicion].getPassword().compare(laCuentaDeAcceso.getPassword()))
                cout<<"cliente valido" << endl;

        else 
             cout<<"password invalido" << endl;

    }

    
}

float Sistema::consultaDeSaldo(CuentaBancaria CuentaBancaria)
{
  return CuentaBancaria.getSaldo();
}

float Sistema::retiro(CuentaBancaria CuentaBancaria, DR dr)
{
  CuentaBancaria.getSaldo();
  dr.getImporte();

 return (CuentaBancaria.getSaldo())-(dr.getImporte());
  
}

float Sistema::deposito(CuentaBancaria CuentaBancaria, DR dr)
{
  CuentaBancaria.getSaldo();
  dr.getImporte();

  return (CuentaBancaria.getSaldo())+(dr.getImporte());
}


