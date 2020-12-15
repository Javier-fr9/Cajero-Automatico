#include<string>

#ifndef CLIENTE_HPP
#define CLIENTE_HPP

using namespace std;

class Cliente
{
  private:
     string nombre;
     string rfc;
     string domicilio;
     
  public:
  Cliente();
  Cliente(string elNombre, string elRfc, string elDomicilio);

  void setNombre(string elNombre);
  void setRfc(string elRfc);
  void setDomicilio(string elDomicilio);

  string getNombre();
  string getRfc();
  string getDomicilio();
  
};
#endif