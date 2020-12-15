#include "TarjetaDeCredito.hpp"

TarjetaDeCredito::TarjetaDeCredito() {}

void TarjetaDeCredito::setBalanceAlCorte(float elbalanceAlCorte)
{
	balanceAlCorte = elbalanceAlCorte;
}

float TarjetaDeCredito::getBalanceAlCorte()
{
	return balanceAlCorte;
}

void TarjetaDeCredito::calculaBalanceAlCorte(float cantidad)
{
	setBalanceAlCorte(cantidad);
}


