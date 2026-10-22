#include <iostream>

using namespace std;

int main() {
    int donante;
    int receptor;

    cout << "COMPATIBILIDAD SANGUINEA " << endl << endl;
    cout << "1. Tipo A" << endl;
    cout << "2. Tipo B" << endl;
    cout << "3. Tipo AB" << endl;
    cout << "4. Tipo O" << endl << endl;

    cout << "Ingresa la opcion del DONANTE (1-4): ";
    cin >> donante;

    cout << "Ingresa la opcion del RECEPTOR (1-4): ";
    cin >> receptor;

    cout << endl << "RESULTADO " << endl;

    switch (donante) {
        
        case 1:
            switch (receptor) {
                case 1:
                case 3:
                    cout << "COMPATIBLE: El tipo A dona a A y AB." << endl;
                    break;
                case 2:
                case 4:
                    cout << "INCOMPATIBLE: El tipo A no puede donar a esa opcion." << endl;
                    break;
                default:
                    cout << "Opcion de receptor no valida." << endl;
                    break;
            }
            break;
        case 2: 
            switch (receptor) {
                case 2:
                case 3:
                    cout << "COMPATIBLE: El tipo B dona a B y AB." << endl;
                    break;
                case 1:
                case 4:
                    cout << "INCOMPATIBLE: El tipo B no puede donar a esa opcion." << endl;
                    break;
                default:
                    cout << "Opcion de receptor no valida." << endl;
                    break;
            }
            break;
        case 3: 
            switch (receptor) {
                case 3:
                    cout << "COMPATIBLE: El tipo AB dona a AB." << endl;
                    break;
                case 1:
                case 2:
                case 4:
                    cout << "INCOMPATIBLE: El tipo AB solo dona a su mismo grupo." << endl;
                    break;
                default:
                    cout << "Opcion de receptor no valida." << endl;
                    break;
            }
            break;
        case 4: /
            switch (receptor) {
                case 1:
                case 2:
                case 3:
                case 4:
                    cout << "COMPATIBLE: El tipo O es donante universal." << endl;
                    break;
                default:
                    cout << "Opcion de receptor no valida." << endl;
                    break;
            }
            break;

        default:
            cout << "Opcion de donante no valida." << endl;
            break;
    }

    return 0;
}
