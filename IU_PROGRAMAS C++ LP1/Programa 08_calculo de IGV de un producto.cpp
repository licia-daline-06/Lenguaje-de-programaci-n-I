// Programa: Calculo del IGV de un Producto
#include <iostream>
using namespace std;

int main() {
    const double IGV = 0.18;
    double precio, igv, precioFinal;
	cout << "CALCULO DE IGV DE UN PRODUCTO" << endl;
    cout << "Ingrese el precio del producto: ";
    cin >> precio;

    igv = precio * IGV;
    precioFinal = precio + igv;

    cout << "El IGV (18%) es: " << igv << endl;
    cout << "El precio final con IGV es: " << precioFinal << endl;

    return 0;
}
