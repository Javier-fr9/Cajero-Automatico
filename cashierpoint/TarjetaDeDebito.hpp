#include "Tarjeta.hpp"

#ifndef TARJETADEDEBITO_HPP
#define TARJETADEDEBITO_HPP

class TarjetaDeDebito: public Tarjeta  
{
	private:
		float balanceActual;

	public:
		TarjetaDeDebito();
		void setBalanceActual(float elbalanceActual);
		float getBalanceActual();
		void calculaBalanceActual(float cantidad);
};
#endif