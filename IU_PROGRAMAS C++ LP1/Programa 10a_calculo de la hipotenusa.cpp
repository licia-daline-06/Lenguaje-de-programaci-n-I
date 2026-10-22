// Programa: Hipotenusa de un Triangulo (version con math.h y pow)
#include <iostream>
#include <math.h>
using namespace std;

int main(){
    float a, b, h;
    cout << "CALCULO DE LA HIPOTENUSA" << endl;
    cout << "Ingrese el valor del cateto a: "; cin >> a;
    cout << "Ingrese el valor del cateto b: "; cin >> b;
    h = sqrt(pow(a,2) + pow(b,2));
    cout << "La Hipotenusa es: " << h << endl;
    return 0;
}
