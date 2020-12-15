#include <string>

#ifndef CAJERO_HPP
#define CAJERO_HPP

using namespace std;

class Cajero
{
    private:
         string codigo;
         string numDeSucursal;
         string banco;
    public:
        Cajero();
        Cajero(string elCodigo, string elNumDeSucursal, string elBanco);

        string getCodigo();
        string getNumDeSucursal();
        string getBanco();


};
#endif