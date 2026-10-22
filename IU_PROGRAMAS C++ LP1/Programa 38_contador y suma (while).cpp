#include <iostream>

using namespace std;

int main() {
    int contador = 1;
    int suma = 0; 
	cout << "CONTADOR Y SUMA (WHILE)" << endl;
    while(contador <= 10) {
        cout << "Numero: " << contador << endl;
        suma = suma + contador; 
        contador = contador + 1;
    }

    cout << "La suma total es: " << suma << endl;

    return 0;
}
