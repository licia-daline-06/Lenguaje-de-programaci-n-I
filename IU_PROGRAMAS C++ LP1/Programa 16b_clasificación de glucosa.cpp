#include <iostream>

using namespace std;

int main() {
    int glucosa;

    cout << "CLASIFICACION DE GLUCOSA EN SANGRE " << endl;
    cout << "\nIngrese el nivel de glucosa en mg/dL: ";
    cin >> glucosa;

    if (glucosa < 0 || glucosa > 500) {
        cout << "ERROR: El valor ingresado esta fuera de rango permitido." << endl;
    } 
    else {
        cout << "El diagnostico es: ";

        if (glucosa >= 70 && glucosa <= 99) {
            cout << "Glucosa Normal" << endl;
        }
        else {
            switch (glucosa) {
                case 0 ... 69:
                    cout << "Hipoglucemia " << endl;
                    break;

                case 100 ... 125:
                    cout << "Prediabetes" << endl;
                    break;

                default:
                    cout << "Diabetes" << endl;
                    break;
            }
        }
    }

    return 0;
}
