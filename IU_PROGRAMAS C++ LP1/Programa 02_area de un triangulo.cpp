// Programa: Area de un Triangulo
#include <iostream>
using namespace std;

int main(){
    float base, altura, area;
    cout << "CALCULO DEL AREA DE UN TRIANGULO" << endl;
    cout << "Ingrese la base: "; cin >> base;
    cout << "Ingrese la altura: "; cin >> altura;
    area = (base * altura) / 2;
    cout << "El area del triangulo es: " << area << endl;
    return 0;
}
