#include <string>
#include "Cliente.hpp"

#ifndef MOVIMIENTO_HPP
#define MOVIMIENTO_HPP

using namespace std;

class Movimiento : public Cliente
{
     private:
     Cliente cliente;
     string numDeCuenta;
     string fecha;

     public:
     Movimiento();
     Movimiento(string elNumDeCuenta, string laFecha, Cliente elCliente);

     string getNumDeCuenta();
     string getFecha();
     Cliente getCliente();
     


};
#endif