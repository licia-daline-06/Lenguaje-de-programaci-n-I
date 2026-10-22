#include <iostream>
using namespace std;
int main()
{
    int n;
    float suma = 0, notas[n];
    
    cout << "ARREGLO UNIDIMENSIONAL - NOTAS" << endl;
    cout << "Ingrese cuantas notas desea ingresar: ";
    cin >> n;

    for (int i = 0; i < n; i++) {
        cout << "Ingrese la nota " << i << ": ";
        cin >> notas[i];
        suma = suma + notas[i]; 
    }

    cout << "\nLISTA DE TODAS LAS NOTAS" << endl;
    for (int i = 0 ; i < n ; i++) {
        cout << "Nota indice [" << i << "] : " << notas[i] << endl;
    }

    cout << "\nEl promedio de las notas es: " << suma / n << endl;

    return 0;
}
