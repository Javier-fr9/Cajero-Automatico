#include <string>
#include "Movimiento.hpp"

#ifndef DR_HPP
#define DR_HPP

using namespace std;

class DR: public Movimiento
{
 private:
     string tipoDeMovimiento;    
     float importe;

 public:
     DR();
    DR(string elTipoDeMovimiento, float elImporte);

    string getTipoDeMovimiento();
    float getImporte();

   
     

};
#endif