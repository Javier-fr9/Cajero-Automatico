#include <string>
#include "Movimiento.hpp"


#ifndef HISTORIAL_HPP
#define HISTORIAL_HPP

using namespace std;

class Historial: public Movimiento
{

  private:

  Movimiento* movimientos[2];
  
  int posicion;


  
   
   
  
  public:

  Historial();
  
  void agrega(Movimiento* elMovimiento);

  int obtenerMovimiento(int elLugar);

  void despliega(Historial elMovimiento);

  




 











};
#endif