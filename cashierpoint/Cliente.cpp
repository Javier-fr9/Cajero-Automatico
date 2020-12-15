#include"Cliente.hpp"

Cliente::Cliente(){}

Cliente::Cliente(string elNombre, string elRfc, string elDomicilio)
{
 nombre = elNombre;
 rfc = elRfc;
 domicilio = elDomicilio;
}

void Cliente::setNombre(string elNombre)
{
   nombre = elNombre;
}

void Cliente::setDomicilio(string elDomicilio)
{
    domicilio = elDomicilio;
}

void Cliente::setRfc(string elRfc)
{
    rfc = elRfc;
}


string Cliente::getNombre()
{
    return nombre;
}
string Cliente::getRfc()
{
    return rfc;
}
string Cliente::getDomicilio()
{
    return domicilio;
}