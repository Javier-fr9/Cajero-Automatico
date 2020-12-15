#include "Tarjeta.hpp"

#ifndef TARJETADECREDITO_HPP
#define TARJETADECREDITO_HPP 

class TarjetaDeCredito: public Tarjeta  
{
	private:
		float balanceAlCorte;
        
	public:
		TarjetaDeCredito();
		void setBalanceAlCorte(float elbalanceAlCorte);
        
		float getBalanceAlCorte();
		void calculaBalanceAlCorte(float cantidad);

		
		
};
#endif