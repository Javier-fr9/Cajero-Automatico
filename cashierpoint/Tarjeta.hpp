#include <string>
#include "Cliente.hpp"

#ifndef TARJETA_HPP
#define TARJETA_HPP


using namespace std;
class Tarjeta: public Cliente
{
	private:
		string numEnPlastico;
		string numDeSeguridad;
		string numDeCuenta;
		Cliente cliente;
		string vigencia;
		
	public:
	    Tarjeta();
	    Tarjeta(string elNumEnPlastico, string elNumDeSeguridad, string elNumDeCuenta,Cliente elCliente, string laVigencia);

		void setNumEnPlastico(string elNumEnPlastico);
		void setNumDeSeguridad(string elNumDeSeguridad);
		void setNumDeCuenta(string elNumDeCuenta);
		void setCliente(Cliente elCliente);
		void setVigencia(string laVigencia);
	

		

		string getNumEnPlastico();
		string getNumDeSeguridad();
		string getNumDeCuenta();
		Cliente getCliente();
		string getVigencia();

};

#endif







