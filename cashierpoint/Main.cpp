#include "Cliente.hpp"
#include "CuentaDeAcceso.hpp"
#include "CuentaBancaria.hpp"
#include "Movimiento.hpp"
#include "DR.hpp"
#include "Historial.hpp"
#include "Sistema.hpp"

#include "Tarjeta.hpp"
#include "TarjetaDeCredito.hpp"
#include "TarjetaDeDebito.hpp"

#include <iostream>
#include <stdlib.h>
#include <string>

using namespace std;

int main(void)
{
    cout<<"-CLIENTE 1"<<endl;

	Cliente cliente1;
	cliente1.setNombre("bob");
    cliente1.setDomicilio("av. del ahuehuete 152");
	cliente1.setRfc("12345HJSLK");

	cout<<"Nombre: "<<cliente1.getNombre()<<endl;
	cout<<"Domicilio: "<<cliente1.getDomicilio()<<endl;
	cout<<"Rfc: "<<cliente1.getRfc()<<endl;

	cout<<"-CUENTA DE ACCESO"<<endl;

	CuentaDeAcceso cuentaDeAcceso1(cliente1, "3636");
	cout<<"Password: " <<cuentaDeAcceso1.getPassword()<<endl;
	cout<<"Nombre: "<< cuentaDeAcceso1.getCliente().getNombre()<<endl;

	cout<<"-CUENTA BANCARIA"<<endl;

	CuentaBancaria cuentaBancaria1("credito", "12345678", 3000.00, cliente1);
    cout<<"Tipo De Cuenta: "<<cuentaBancaria1.getTipoDeCuenta()<<endl;
    cout<<"Numero De Cuenta: "<<cuentaBancaria1.getNumDeCuenta()<<endl;
	cout<<"Saldo: "<<cuentaBancaria1.getSaldo()<<endl;
	cout<<"Nombre: "<<cuentaBancaria1.getCliente().getNombre()<<endl;

	cout<<"-TARJETA DE CREDITO"<<endl;

	TarjetaDeCredito tc1;
	tc1.setNumEnPlastico("345667");
	tc1.setNumDeSeguridad("808");
	tc1.setBalanceAlCorte(12700.32);
	cout << "Balance al corte: "<<tc1.getBalanceAlCorte() << endl;
	cout << "# plastico: "<< tc1.getNumEnPlastico() << endl;
	cout << "# de seguridad: " << tc1.getNumDeSeguridad() << endl;

	cout<<"-TARJETA DE DEBITO"<<endl;

	TarjetaDeDebito td1;
	td1.setBalanceActual(3425.67);
	td1.setNumEnPlastico("453212");
	cout << "Balance actual: "<<td1.getBalanceActual() << endl;
	cout << "# de plastico: "<<td1.getNumEnPlastico() << endl;

	cout<<"-MOVIMIENTOS"<<endl;

    DR deposito1("deposito",2350.00);
	cout<<"Tipo De Movimiento: "<< deposito1.getTipoDeMovimiento()<<endl;
	cout<<"Importe: "<< deposito1.getImporte()<<endl;

    DR retiro1("retiro", 250.00);
	cout<<"Tipo De Movimiento: "<<retiro1.getTipoDeMovimiento()<<endl;
	cout<<"Importe: "<<retiro1.getImporte()<<endl;

	cout<<"----------------------------------------------------------------------------------------------------"<<endl;

	cout<<"-CLIENTE 2"<<endl;

	Cliente cliente2;
	cliente2.setNombre("David");
	cliente2.setDomicilio("electric avenue 115");
	cliente2.setRfc("WKH4994893");

	cout<<"Nombre: "<<cliente2.getNombre()<<endl;
    cout<<"Domicilio: "<<cliente2.getDomicilio()<<endl;
	cout<<"RFC: "<<cliente2.getRfc()<<endl;

	cout<<"-CUENTA DE ACCESO"<<endl;
    
	CuentaDeAcceso cuentaDeAcceso2(cliente2, "2105");
	cout<< "Password: "<< cuentaDeAcceso2.getPassword()<<endl;
	cout<< "Nombre: "<<cuentaDeAcceso2.getCliente().getNombre()<<endl;

	cout<<"-CUENTA BANCARIA"<<endl;

	CuentaBancaria cuentaBancaria2("debito", "87654321", 4800.00, cliente2);
   
    cout<<"Tipo de cuenta: "<<cuentaBancaria2.getTipoDeCuenta()<<endl;
    cout<<"Numero de cuenta: "<<cuentaBancaria2.getNumDeCuenta()<<endl;
	cout<<"Saldo: "<<cuentaBancaria2.getSaldo()<<endl;
	cout<< "Nombre: "<<cuentaBancaria2.getCliente().getNombre()<<endl;
	
	cout<<"-TARJETA DE CREDITO"<<endl;

	TarjetaDeCredito tc2;
	tc2.setNumEnPlastico("21246527");
	tc2.setNumDeSeguridad("457");
	tc2.setBalanceAlCorte(18500.00);
	cout << "Balance al corte: "<<tc2.getBalanceAlCorte() << endl;
	cout << "# plastico:: "<< tc2.getNumEnPlastico() << endl;
	cout << "# de seguridad: " << tc2.getNumDeSeguridad() << endl;
	
	cout<<"-TARJETA DE DEBITO"<<endl;

	TarjetaDeDebito td2;
	td2.setBalanceActual(4850.00);
	td2.setNumEnPlastico("729458");
	cout << "Balance actual: "<<td2.getBalanceActual() << endl;
	cout << "# de plastico: "<<td2.getNumEnPlastico() << endl;

	cout<<"-MOVIMIENTOS"<<endl;
	
	DR deposito2("deposito",5500.00);
	cout<<"Tipo De Movimiento: "<< deposito2.getTipoDeMovimiento()<<endl;
	cout<<"Importe: "<< deposito2.getImporte()<<endl;

    DR retiro2("retiro", 2500.00);
	cout<<"Tipo De Movimiento: "<<retiro2.getTipoDeMovimiento()<<endl;
	cout<<"Importe: "<<retiro2.getImporte()<<endl;

    cout<<"----------------------------------------------------------------------------------------------------"<<endl;

    cout<<"-SISTEMA"<<endl;
	
    Sistema sistema1, sistema2;

	sistema1.agrega(cuentaDeAcceso1);
	sistema2.agrega(cuentaDeAcceso2);

	sistema1.validaCliente(cuentaDeAcceso1);
	sistema2.validaCliente(cuentaDeAcceso2);

	cout<<"-DEPOSITO EN EFECTIVO"<<endl;

	cout<< "Importe (cliente 1): "<<deposito1.getImporte()<<endl;
	cout<< "Saldo(cliente 1)" <<sistema1.deposito(cuentaBancaria1, deposito1)<<endl;
	cout<< "Importe (cliente 2): "<< deposito2.getImporte()<<endl;
	cout<< "Saldo (cliente 2): "<<sistema2.deposito(cuentaBancaria2, deposito2)<<endl;

    cout<<"-RETIRO EN EFECTIVO"<<endl;

	cout<< "Importe (cliente 1): "<<retiro1.getImporte()<<endl;
	cout<<"Saldo (Cliente 1): "<<sistema1.retiro(cuentaBancaria1, retiro1)<<endl;
	cout<< "Importe (cliente 2): "<<retiro2.getImporte()<<endl;
	cout<< "Saldo (cliente 2): "<<sistema2.retiro(cuentaBancaria2, retiro2)<<endl;

	cout<<"-CONSULTA DE SALDO"<<endl;

	cout<< "Saldo (cliente 1): "<<(sistema1.consultaDeSaldo(cuentaBancaria1)-retiro1.getImporte())+deposito1.getImporte()<<endl;
	cout<< "Saldo (cliente 2): "<<(sistema1.consultaDeSaldo(cuentaBancaria2)-retiro2.getImporte())+deposito2.getImporte()<<endl;
	


	return EXIT_SUCCESS;
}
