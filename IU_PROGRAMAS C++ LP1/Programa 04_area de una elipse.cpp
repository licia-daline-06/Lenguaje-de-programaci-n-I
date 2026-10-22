// Programa: Area de una Elipse
#include <iostream>
using namespace std;

int main() {
    const double PI = 3.14159265358979;
    double sMayor, sMenor, area;
	cout << "CALCULO DEL AREA DE UNA ELIPSE" <<endl;
    cout << "Ingrese el semieje mayor: ";
    cin >> sMayor;
    cout << "Ingrese el semieje menor: ";
    cin >> sMenor;

    area = PI * sMayor * sMenor;

    cout << "El area de la elipse es: " << area << endl;

    return 0;
}
