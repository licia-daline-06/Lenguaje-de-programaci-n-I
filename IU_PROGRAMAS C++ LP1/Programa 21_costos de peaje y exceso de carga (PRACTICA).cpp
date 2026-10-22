#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int categoria, telepeaje;
    float pesoVehiculo; 
    double costoBase = 0.0;
    double descuento = 0.0;
    double recargo = 0.0;
    double totalPagar = 0.0;

    cout << "COSTOS DE PEAJE Y EXCESO DE CARGA" << endl;
    cout << "Seleccione la categoria del vehiculo:" << endl;
    cout << "1: Auto / Camioneta " << endl;
    cout << "2: Autobus " << endl;
    cout << "3: Camion de carga " << endl;
    cout << "OPCION: ";
    cin >> categoria;

    switch (categoria) {
        case 1:
            costoBase = 3.00;
            break;
        case 2:
            costoBase = 6.00;
            break;
        case 3:
            costoBase = 10.00;
            break;
        default:
            cout << "ERROR: Opcion del cliente no valida." << endl;
            return 1;
    }

    cout << "Ingrese el peso total del vehiculo (En toneladas): ";
    cin >> pesoVehiculo;
    if (pesoVehiculo < 0) {
        cout << "ERROR: El peso ingresado no es valido" << endl;
        return 1;
    }

    if (categoria == 3 && pesoVehiculo >= 12) {
        recargo = costoBase * 0.25;
    }

    cout << "¿Utiliza telepeaje? (Ingrese 1 para SI y 0 para NO): ";
    cin >> telepeaje;

    if (telepeaje == 1) {
        descuento = costoBase * 0.15;
    }

    totalPagar = (costoBase - descuento) + recargo;

    cout << fixed << setprecision(2);
    cout << "\n Resumen de consulta " << endl;
    cout << "Costo base: $ " << costoBase << endl;
    cout << "Descuento aplicado por Telepeaje: $ " << descuento << endl;
    cout << "Penalizacion por exceso de peso: $ " << recargo << endl;
    cout << "Total neto a pagar: $ " << totalPagar << endl;

    return 0;
}
