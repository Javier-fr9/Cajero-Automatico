#include <string>
#include "CuentaDeAcceso.hpp"
#include "CuentaBancaria.hpp"
#include "Movimiento.hpp"
#include "Cliente.hpp"
#include "DR.hpp"

#ifndef SISTEMA_HPP
#define SISTEMA_HPP

using namespace std;

class Sistema

{
private:

 string version;
 int posCuentaDeAcceso;
 Cliente clientes[1];
 CuentaDeAcceso cuentasDeAcceso[2];
 Movimiento movimientos[2];
 

public: 

      Sistema();
      void setVersion(string version);

      string getVersion();

      void validaCliente(CuentaDeAcceso laCuentaDeAcceso);

      void agrega(CuentaDeAcceso laCuentaDeAcceso);

      float consultaDeSaldo(CuentaBancaria cuentaBancaria);
      
      float retiro(CuentaBancaria cuentaBancaria, DR dr);
      float deposito(CuentaBancaria cuentaBancaria, DR dr);




};
#endif








 
      