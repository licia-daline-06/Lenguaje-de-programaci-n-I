#include <iostream>

using namespace std;

int main()
{
    int i=1, n;
    char respuesta;
    cout << "TABLA DE MULTIPLICAR" << endl;
    do {
        cout<<"Tabla de que numero desea imprimir?: ";
        cin>>n;
        for (i=1; i<=10; i++){
			cout<<n<<"x"<<i<<"="<<n*i<<endl;}
        	cout<<"Desea imprimir otra tabla de multiplicacion?(s/n):";
        	cin>>respuesta; 
		} while (respuesta == 'S' || respuesta == 's');
		return 0;	
}
