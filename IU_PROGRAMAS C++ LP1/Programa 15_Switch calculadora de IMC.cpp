#include <iostream>

using namespace std;

int main() {
    float peso, estatura, IMC;
    int opcionRango;

    cout << "CALCULADORA DE INDICE DE MASA CORPORAL (SWITCH)" << endl;
    cout << "Ingrese su peso en kg: ";
    cin >> peso;
    cout << "Ingrese su estatura en metros: ";
    cin >> estatura;

    if (peso <= 0 || estatura <= 0) {
        cout << "ERROR: El peso y la estatura deben ser mayores a 0." << endl;
    } else {
        IMC = peso / (estatura * estatura);
        cout << "Su IMC es: " << IMC << endl;

        if (IMC < 18.5) {
            opcionRango = 1;
        }
        else if (IMC >= 18.5 && IMC <= 24.9) {
            opcionRango = 2;
        }
        else if (IMC >= 25 && IMC <= 29.9) {
            opcionRango = 3;
        }
        else if (IMC >= 30.0 && IMC <= 34.9) {
            opcionRango = 4;
        }
        else {
            opcionRango = 5;
        }
        switch (opcionRango) {
            case 1:
                cout << "Bajo peso" << endl;
                break;
            case 2:
                cout << "Peso Normal" << endl;
                break;
            case 3:
                cout << "Sobrepeso" << endl;
                break;
            case 4:
                cout << "Obesidad grado I" << endl;
                break;
            case 5:
                cout << "Obesidad de grado II" << endl;
                break;
            default:
                cout << "No se pudo clasificar el IMC" << endl;
                break;
        }
    }

    return 0;
}

