#include <iostream>
using namespace std;

/*
Funcion que calcula la cantidad a pagar por concepto de estacionamiento
    de 1 a 5 horas, la hora cuesta $10
    de 6 a 10 horas, la hora cuesta $9
    por mas de 10 horas el costo es de $7
*/
float pago_estacionamiento(int horas)
{
	int cant(0);
	if (horas>=0 && horas<=5)
		cant = horas*10;
	if (horas>=6 && horas<=10)
		cant = horas*9;
	if (horas>11)
		cant = horas*7;

	return cant;
}

void casos_de_prueba(){

    cout << "TEST CASES";
    cout << "Test data" <<"Expected Result" << "Actual Result" << "Pass/Fail"<< endl;

    cout << "5" << "50" << pago_estacionamiento(5) << if (50 == pago_estacionamiento(5)) << endl;
    cout << "-2" << "False" << pago_estacionamiento(-2) << endl;
    cout << "11" << "False" << pago_estacionamiento(11) << endl;




    // Agrega tus casos de prueba



    cout << endl;

}

int main()
{

    casos_de_prueba();

	return 0;
}
