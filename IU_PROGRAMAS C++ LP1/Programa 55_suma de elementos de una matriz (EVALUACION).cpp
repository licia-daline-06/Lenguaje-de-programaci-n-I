#include <iostream>
using namespace std;

int main()
{
    int n, m;
    int suma = 0;
    int matriz[n][m];
    cout << "SUMA DE ELEMENTOS DE UNA MATRIZ" << endl;
    cout << "Ingrese el numero de filas: ";
    cin >> n;
    cout << "Ingrese el numero de columnas: ";
    cin >> m;

    cout << "\nIngrese los elementos de la matriz:" << endl;
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
            cout << "Elemento [" << i << "][" << j << "] : ";
            cin >> matriz[i][j];
            suma = suma + matriz[i][j];
        }
    }
    cout << "\nLA MATRIZ" << endl;
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
            cout << matriz[i][j] << "\t";
        }
        cout << endl;
    }
    cout << "\nLa suma total de los elementos de la matriz es: " << suma << endl;
    return 0;
}
