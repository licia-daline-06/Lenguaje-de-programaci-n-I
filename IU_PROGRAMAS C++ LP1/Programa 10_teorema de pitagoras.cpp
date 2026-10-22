// Programa: Teorema de Pitagoras
#include <iostream>
#include <cmath>

using namespace std;

int main() {
    double ca, co, hip;
	cout << "TEOREMA DE PITAGORAS" << endl;
    cout << "Ingrese el cateto adyacente: ";
    cin >> ca;

    cout << "Ingrese el cateto opuesto: ";
    cin >> co;

    hip = sqrt(ca * ca + co * co);

    cout << "La hipotenusa es: " << hip << endl;

    return 0;
}
