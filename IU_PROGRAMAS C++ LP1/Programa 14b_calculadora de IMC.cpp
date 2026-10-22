
#include <iostream>
#include <cmath>
using namespace std;

int main() {
    float peso, estatura, IMC;
	cout << "CALCULADORA DE IMC (version con if/else anidados y pow)"
    cout << "Ingrese su peso (kg): ";
    cin >> peso;
    cout << "Ingrese su estatura (m): ";
    cin >> estatura;

    if (peso <= 0 || estatura <= 0) {
        cout << "\nLos datos no pueden tomar valores negativos o cero\n";
    }
    else {
        IMC = peso / pow(estatura, 2);

        if (IMC < 18.5) {
            cout << "\nEl sujeto pertenece a la categoria de bajo peso\n";
        }
        else {
            if (IMC >= 18.5 && IMC <= 24.9) {
                cout << "\nEl sujeto pertenece a la categoria de peso normal\n";
            }
            else {
                if (IMC >= 25.0 && IMC <= 29.9) {
                    cout << "\nEl sujeto pertenece a la categoria de sobrepeso\n";
                }
                else {
                    if (IMC >= 30.0 && IMC <= 34.9) {
                        cout << "\nEl sujeto pertenece a la categoria de Obesidad grado I\n";
                    }
                    else {
                        if (IMC >= 35.0 && IMC <= 39.9) {
                            cout << "\nEl sujeto pertenece a la categoria de Obesidad grado II\n";
                        }
                        else {
                            cout << "\nEl sujeto pertenece a la categoria de Obesidad grado III\n";
                        }
                    }
                }
            }
        }
    }

    return 0;
}

