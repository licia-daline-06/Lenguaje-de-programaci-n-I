#include <iostream>

using namespace std;

int main()
{
    cout << "EJEMPLO CONTINUE Y BREAK" << endl;
    for(int i = 1; i <= 10; i++) {
        if(i == 3) {
            continue;
        }
        if(i == 8) {
            break;  
        }
        
        cout << "Numero " << i << endl;
    }
    return 0;
}
