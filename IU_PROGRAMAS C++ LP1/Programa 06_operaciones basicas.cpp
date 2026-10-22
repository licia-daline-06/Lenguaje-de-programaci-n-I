// Programa: Operaciones Basicas (+,-,*,/)
#include <iostream>
using namespace std;

int main() {
    float num1, num2, suma, resta, multiplicacion, division;
	cout << "CALCULO DE OPERACIONES BASICAS" << endl;
    cout << "Ingresa el primer numero: ";
    cin >> num1;
    cout << "Ingresa el segundo numero: ";
    cin >> num2;

    suma = num1 + num2;
    resta = num1 - num2;
    multiplicacion = num1 * num2;
	division = num1 / num2;
	
    cout << "\nEl resultado de la suma es: " << suma << endl;
    cout << "El resultado de la resta es: " << resta << endl;
    cout << "El resultado de la multiplicacion es: " << multiplicacion << endl;
	cout << "El resultado de la division es: " << division << endl;

    return 0;
}
