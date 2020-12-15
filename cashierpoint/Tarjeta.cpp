#include "Tarjeta.hpp"



Tarjeta::Tarjeta() {}
Tarjeta::Tarjeta (string elNumEnPlastico, string elNumDeSeguridad, string elNumDeCuenta, Cliente elCliente, string laVigencia)


{
	numEnPlastico = elNumEnPlastico;
	numDeSeguridad = elNumDeSeguridad;
}


void Tarjeta::setNumEnPlastico(string elNumEnPlastico)
{
	numEnPlastico = elNumEnPlastico;
}

void Tarjeta::setNumDeSeguridad(string elNumDeSeguridad)
{
	numDeSeguridad = elNumDeSeguridad;
}

void Tarjeta::setNumDeCuenta(string elNumDeCuenta)
{
	numDeCuenta = elNumDeCuenta;
}

void Tarjeta::setCliente(Cliente elCliente)
{
  cliente = elCliente;
}

void Tarjeta::setVigencia(string laVigencia)
{
  vigencia = laVigencia;
}


string Tarjeta::getNumEnPlastico()
{
	return numEnPlastico;
}

string Tarjeta::getNumDeSeguridad()
{
	return numDeSeguridad;
}

string Tarjeta::getNumDeCuenta()
{
	return numDeCuenta;
}

Cliente Tarjeta::getCliente()
{
	return cliente;
}

string Tarjeta::getVigencia()
{
	return vigencia;
}
