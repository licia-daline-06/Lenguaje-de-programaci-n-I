#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int destino, expres, tipoCliente;
    float pesoTotal, tarifa = 0.0;
    double costoBase = 0.0;
    double sobrePesado = 0.0;
    double recargoExpres = 0.0;
    double descuento = 0.0;
    double subtotal = 0.0;
    double montoTotal = 0.0;

    cout << "TARIFICADOR DE ENVIOS NACIONALES E INTERNACIONALES" << endl;
    cout << "Seleccione la zona de destino:" << endl;
    cout << "1: Local / Urbana " << endl;
    cout << "2: Nacional " << endl;
    cout << "3: America del Sur " << endl;
    cout << "4: Internacional / Resto del Mundo " << endl;
    cout << "Opcion: ";
    cin >> destino;

    switch (destino) {
        case 1:
            tarifa = 5.00;
            break;
        case 2:
            tarifa = 10.00;
            break;
        case 3:
            tarifa = 20.00;
            break;
        case 4:
            tarifa = 35.00;
            break;
        default:
            cout << "ERROR: Zona de destino no valida." << endl;
            return 1;
    }

    cout << "Ingrese el peso total del paquete (en kg): ";
    cin >> pesoTotal;
    if (pesoTotal <= 0 || pesoTotal > 50) {
        cout << "ERROR: El peso debe ser mayor a 0 kg y no superante a 50 kg." << endl;
        return 1;
    }

    cout << "Requiere servicio de entrega expres? (1: Si / 0: No): ";
    cin >> expres;
    if (expres != 0 && expres != 1) {
        cout << "ERROR: Opcion de servicio expres no valida." << endl;
        return 1;
    }

    cout << "Tipo de cliente (1: Corporativo / 0: Particular): ";
    cin >> tipoCliente;
    if (tipoCliente != 0 && tipoCliente != 1) {
        cout << "ERROR: Opcion de tipo de cliente no valida." << endl;
        return 1;
    }

    costoBase = pesoTotal * tarifa;

    if (pesoTotal > 15) {
        sobrePesado = 12.00;
    }

    if (expres == 1) {
        recargoExpres = costoBase * 0.25;
    } else {
        recargoExpres = 0.0;
    }

    subtotal = costoBase + sobrePesado + recargoExpres;

    if (tipoCliente == 1) {
        descuento = subtotal * 0.10;
    } else {
        descuento = 0.0;
    }

    montoTotal = subtotal - descuento;

    cout << fixed << setprecision(2);
    cout << "\n RESUMEN TOTAL A PAGAR" << endl;
    cout << "Costo base por peso: S/ " << costoBase << endl;
    cout << "Sobretasa por carga pesada: S/ " << sobrePesado << endl;
    cout << "Recargo por servicio expres: S/ " << recargoExpres << endl;
    cout << "Subtotal: S/ " << subtotal << endl;
    cout << "Descuento corporativo: S/ " << descuento << endl;
    cout << "Monto total a pagar: S/ " << montoTotal << endl;

    return 0;
}

