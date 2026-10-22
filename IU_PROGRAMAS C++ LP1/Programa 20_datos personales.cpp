#include <iostream>
#include <string>

using namespace std;

int main() {
	cout << "DATOS PERSONALES" << endl;
	
    string nombre;
    string apellido;
    int edad;

    cout << "Ingresa tu nombre: ";
    cin >> nombre;

    cout << "Ingresa tu apellido: ";
    cin >> apellido;

    cout << "Ingresa tu edad: ";
    cin >> edad;

    cout << "Nombre completo: " << nombre << " " << apellido << endl;
    cout << "Edad: " << edad << " anios" << endl;

    return 0;
}

