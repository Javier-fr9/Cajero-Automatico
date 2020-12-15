#include"Movimiento.hpp"

Movimiento::Movimiento(){}
Movimiento::Movimiento (string elNumDeCuenta, string laFecha, Cliente elCliente)
{
  numDeCuenta = elNumDeCuenta;
  fecha = laFecha;
  cliente = elCliente;
}


 string Movimiento::getNumDeCuenta()
 {
     return numDeCuenta;
 }

 string Movimiento::getFecha()
 {
     return fecha;
 }
 Cliente Movimiento::getCliente()
 {
     return cliente;
 }
