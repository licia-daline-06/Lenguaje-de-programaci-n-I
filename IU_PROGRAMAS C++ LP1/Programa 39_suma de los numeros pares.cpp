#include <iostream>

using namespace std;

int main() {
    int contador = 1, suma = 0, sumaPar = 0;
    cout << "SUMA DE LOS NUMEROS PARES" << endl;
    
    while(contador <= 10){
        cout << "Numero : " << contador << endl;
        suma = suma + contador;
        contador = contador + 1;
    }
	if (contador % 2 == 0)
	sumaPar=sumaPar + 1;
	
    cout << "La suma es :" << suma << endl;
    cout << "La suma de los numeros pares es " << sumaPar << endl;
    
    return 0;
}
