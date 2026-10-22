#include <iostream>

using namespace std;

int main() 
{
	float consumo=0, suma=0, contaraltoConsumo;
	cout << "REGISTRO DE CONSUMO EN (kWh) EN 7 DIAS" <<endl;
	for (int i = 1; i <= 7; i++) {
        cout << "Ingrese el consumo en kWh del dia " << i << ": ";
        cin >> consumo;
        suma = suma + consumo;
        if (consumo > 15.0) {
            contaraltoConsumo = contaraltoConsumo + 1;
        }
    }

    cout << "El consumo acumulado total de la semana es: " << suma << endl;
    cout << "El consumo promedio diario es: " << suma / 7 << endl;
    cout << "La cantidad de dias con exceso de consumo es: " << contaraltoConsumo << endl;

    return 0;
}
