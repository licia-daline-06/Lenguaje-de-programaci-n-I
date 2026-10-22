#include <iostream>

using namespace std;

int main()
{
    float peso, suma=0, maximo=0, minimo=0, contarDefecto=0, botellasValidas=0;;
    cout << "CONTROL DE CALIDAD DE BOTELLAS" << endl;
    
    for (int i = 1; i <= 8; i++) {
        cout << "Ingrese el peso de la botella " << i << ": ";
        cin >> peso;
        if (peso <= 0) {
            cout << "Error: El peso debe ser mayor a 0" << endl;
            i = i - 1;
            continue;
        }
        suma = suma + peso;
        botellasValidas = botellasValidas + 1;
        if (peso < 490) {
            contarDefecto = contarDefecto + 1;
        }
        if (peso > maximo) {
            maximo = peso;
        }
        if (peso < minimo) {
            minimo = peso;
        }
    }
    cout << "El peso total acumulado es: " << suma << endl;
    cout << "El peso promedio es: " << suma / 8 << endl;
    cout << "Cantidad de botellas con defecto por bajo peso : " << contarDefecto << endl;
    cout << "El peso maximo es: " << maximo << endl;
    cout << "El peso minimo  es: " << minimo << endl;

    return 0;
}
