#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int noches = 0, hues = 0, tipohabitacion = 0, plan = 0;
    double costoCategoria = 0.0;
    double descuento = 0.0;
    double Multahues = 0.0;
    double plancom = 0.0;
    double totalPagar = 0.0;
    double totalfinal = 0.0;

    cout << "TARIFICADOR DE RESERVAS DE HOTEL" << endl;

    cout << "Ingrese el numero de noches de estadia: ";
    cin >> noches;

    if (noches <= 0) {
        cout << "ERROR: El numero de noches debe ser un valor positivo." << endl;
        return 1;
    }

    cout << "Ingrese el numero de huespedes: ";
    cin >> hues;

    if (hues < 1) {
        cout << "ERROR: El numero de huespedes debe ser al menos 1." << endl;
        return 1;
    }

    cout << "Plan de alimentacion (1 = Solo desayuno, 2 = Pension Completa: Almuerzo y Cena): ";
    cin >> plan;

    if (plan != 1 && plan != 2) {
        cout << "ERROR: Plan de alimentacion no valido." << endl;
        return 1;
    }

    cout << "Seleccione el tipo de habitacion:" << endl;
    cout << "1: Habitacion Estandar " << endl;
    cout << "2: Habitacion Doble " << endl;
    cout << "3: Suite Ejecutiva " << endl;
    cout << "OPCION: ";
    cin >> tipohabitacion;

    switch (tipohabitacion) {
        case 1:
            costoCategoria = 50.00;
            break;
        case 2:
            costoCategoria = 80.00;
            break;
        case 3:
            costoCategoria = 140.00;
            break;
        default:
            cout << "ERROR: Tipo de habitacion no valida." << endl;
            return 1;
    }

    if (tipohabitacion == 1 && hues > 1) {
        Multahues = (hues - 1) * 15.0;
    } else if (tipohabitacion == 2 && hues > 2) {
        Multahues = (hues - 2) * 15.0;
    } else if (tipohabitacion == 3 && hues > 3) {
        Multahues = (hues - 3) * 15.0;
    }

    if (plan == 2) {
        plancom = 25.0 * hues;
    } else {
        plancom = 0.0;
    }

    totalPagar = (costoCategoria + plancom + Multahues) * noches;

    if (noches > 5) {
        descuento = totalPagar * 0.12;
    } else {
        descuento = 0.0;
    }

    totalfinal = totalPagar - descuento;

    cout << fixed << setprecision(2);
    cout << "\nDESGLOSE DE LA RESERVA" << endl;

    if (tipohabitacion == 1) {
        cout << "Tipo de habitacion: Habitacion Estandar" << endl;
    } else if (tipohabitacion == 2) {
        cout << "Tipo de habitacion: Habitacion Doble" << endl;
    } else if (tipohabitacion == 3) {
        cout << "Tipo de habitacion: Suite Ejecutiva" << endl;
    }

    cout << "Subtotal de alojamiento: S/. " << costoCategoria * noches << endl;
    cout << "Recargo por huespedes adicionales: S/. " << Multahues * noches << endl;
    cout << "Costo de alimentacion: S/. " << plancom * noches << endl;
    cout << "Descuento por estadia larga (12%): S/. " << descuento << endl;
    cout << "Monto total a pagar: S/. " << totalfinal << endl;

    return 0;
}
