#include "Cajero.hpp"

Cajero::Cajero(){}
Cajero::Cajero(string elCodigo, string elNumDeSucursal, string elBanco)
{
    codigo = elCodigo;
    numDeSucursal = elNumDeSucursal;
    banco = elBanco;
}


string Cajero::getCodigo()
{
    return codigo;
}

string Cajero::getNumDeSucursal()
{
    return numDeSucursal;
}

string Cajero::getBanco()
{
    return banco;
}