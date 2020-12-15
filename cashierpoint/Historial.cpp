#include "Historial.hpp"
#include "Movimiento.hpp"
#include <iostream>

Historial::Historial(){posicion = 0;}

void Historial::agrega(Movimiento* elMovimiento)
{
 
 movimientos[posicion] = elMovimiento; 
 posicion = posicion +1;
 

}


void Historial::despliega(Historial elMovimiento)
{
  for (int i; i < 2; i++)
  {
    cout<<movimientos[i]<<endl;


  }
  
}

