// Programa: Conversion °C a °F
#include <iostream>
using namespace std;

int main(){
    float F, C;
    cout << "CONVERSION DE GRADOS C A GRADOS F" << endl;
    cout << "Ingrese grados Celsius: ";
    cin >> C;
    F = (C * 1.8) + 32;
    cout << "La conversion a grados Fahrenheit es: " << F;
    return 0;
}
