#include <iostream>

using namespace std;

int main()
{
    float pasaje=0, suma=0, contarTarifa=0;
    cout << "REGISTRO DE PASAJES EMPRESA RAPIDO DEL SUR" << endl;
    for (int i = 1; i <= 10; i++) {
        cout << "Ingrese el monto pagado por el pasajero " << i << ": ";
        cin >> pasaje;
        suma = suma + pasaje;
        if (pasaje == 15.0) {
            contarTarifa = contarTarifa + 1;
        }
    }

    cout << "El dinero total acumulado en caja es: " << suma << endl;
    cout << "El costo promedio pagado por pasajero es: " << suma / 10 << endl;
    cout << "La cantidad total de pasajes a tarifa completa cobrados: " << contarTarifa << endl;

    return 0;
}
