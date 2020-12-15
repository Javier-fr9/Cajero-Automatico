#include<string>
#include"Cliente.hpp"

#ifndef CUENTADEACCESO_HPP
#define CUENTADEACCESO_HPP

using namespace std;

class CuentaDeAcceso: public Cliente
{
 private:
     Cliente cliente;
     string password;
     
 public:
     CuentaDeAcceso();
     CuentaDeAcceso(Cliente elCliente, string elPassword);


     Cliente getCliente();
     string getPassword();



};
#endif