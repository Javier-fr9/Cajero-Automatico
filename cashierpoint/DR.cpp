#include "DR.hpp"

DR::DR(){}

DR::DR(string elTipoDeMovimiento, float elImporte)
{
  tipoDeMovimiento = elTipoDeMovimiento;
importe = elImporte;

}

string DR::getTipoDeMovimiento()
{
    return tipoDeMovimiento;
}

float DR::getImporte()
{
    return importe;
}