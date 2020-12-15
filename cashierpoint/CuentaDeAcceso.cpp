#include"CuentaDeAcceso.hpp"

CuentaDeAcceso::CuentaDeAcceso(){}

CuentaDeAcceso::CuentaDeAcceso(Cliente elCliente, string elPassword)
{
  cliente = elCliente;
  password = elPassword;
}

Cliente CuentaDeAcceso::getCliente()
{
    return cliente;
}

string CuentaDeAcceso::getPassword()
{
    return password;
}
