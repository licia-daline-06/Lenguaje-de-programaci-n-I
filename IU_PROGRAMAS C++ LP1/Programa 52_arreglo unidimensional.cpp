#include <iostream>

using namespace std;

int main()
{
   
    cout << "ARREGLO UNIDIMENSIONAL\n";
    int notas[5] = {2, 14, 15, 18, 20};
    
    cout << "Primera nota indice 0: " << notas[0] << endl;
    cout << "Ultima nota indice 4: " << notas[4] << endl;
    
    cout << "LISTA DE TODAS LAS NOTAS";
    for (int i = 0;i<5;i++)
    cout<<"Nota en indice: ["<<i<<"] "<<notas[i]<<endl;

    return 0;
}
