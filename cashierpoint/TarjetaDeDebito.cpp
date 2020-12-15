#include "TarjetaDeDebito.hpp"

TarjetaDeDebito::TarjetaDeDebito() {}

void TarjetaDeDebito::setBalanceActual(float elbalanceActual)
{
	balanceActual = elbalanceActual;
}

float TarjetaDeDebito::getBalanceActual()
{
	return balanceActual;
}

void TarjetaDeDebito::calculaBalanceActual(float cantidad)
{
	cantidad - balanceActual;
}