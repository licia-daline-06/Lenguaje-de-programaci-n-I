#include <iostream>
using namespace std;

int main()
{
    int suma = 0,n= 0;
    cout << "SUAM DE NUEMROS INRESADOS" <<endl;
    do{
        cout<<"Numero :"<<n<<endl;
        cin >> n;
        suma = suma + n;
        n = n + 1;
    } while(n <= 10);

    return 0;
}

