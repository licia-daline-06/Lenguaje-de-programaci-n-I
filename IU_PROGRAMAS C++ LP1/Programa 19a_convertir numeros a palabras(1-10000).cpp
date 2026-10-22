#include <iostream>

using namespace std;

int main() {
    int numero;
    cout << "CONVERTIR NUMEROS A PALABRAS (1 - 10000)" << endl;
    cout << "\nIngrese un numero entre 1 y 10000: ";
    cin >> numero;

    if (numero < 1 || numero > 10000) {
        cout << "ERROR: El numero ingresado esta fuera del rango permitido (1 - 10000)." << endl;
    } else {
        cout << "El numero en palabras es: ";

        if (numero == 10000) {
            cout << "Diez Mil" << endl;
        } else {
            int miles = numero / 1000;
            int residuoMiles = numero % 1000;
            
            int cientos = residuoMiles / 100;
            int residuoCientos = residuoMiles % 100;

            if (miles > 0) {
                switch (miles) {
                    case 1: cout << "Mil"; break;
                    case 2: cout << "Dos Mil"; break;
                    case 3: cout << "Tres Mil"; break;
                    case 4: cout << "Cuatro Mil"; break;
                    case 5: cout << "Cinco Mil"; break;
                    case 6: cout << "Seis Mil"; break;
                    case 7: cout << "Siete Mil"; break;
                    case 8: cout << "Ocho Mil"; break;
                    case 9: cout << "Nueve Mil"; break;
                }
                if (residuoMiles > 0) cout << " ";
            }

            if (cientos > 0) {
                if (cientos == 1 && residuoCientos == 0) {
                    cout << "Cien";
                } else {
                    switch (cientos) {
                        case 1: cout << "Ciento"; break;
                        case 2: cout << "Doscientos"; break;
                        case 3: cout << "Trescientos"; break;
                        case 4: cout << "Cuatrocientos"; break;
                        case 5: cout << "Quinientos"; break;
                        case 6: cout << "Seiscientos"; break;
                        case 7: cout << "Setecientos"; break;
                        case 8: cout << "Ochocientos"; break;
                        case 9: cout << "Novecientos"; break;
                    }
                }
                if (residuoCientos > 0) cout << " ";
            }

            if (residuoCientos >= 10 && residuoCientos <= 29) {
                switch (residuoCientos) {
                    case 10: cout << "Diez"; break;
                    case 11: cout << "Once"; break;
                    case 12: cout << "Doce"; break;
                    case 13: cout << "Trece"; break;
                    case 14: cout << "Catorce"; break;
                    case 15: cout << "Quince"; break;
                    case 16: cout << "Dieciseis"; break;
                    case 17: cout << "Diecisiete"; break;
                    case 18: cout << "Dieciocho"; break;
                    case 19: cout << "Diecinueve"; break;
                    case 20: cout << "Veinte"; break;
                    case 21: cout << "Veintiuno"; break;
                    case 22: cout << "Veintidos"; break;
                    case 23: cout << "Veintitres"; break;
                    case 24: cout << "Veinticuatro"; break;
                    case 25: cout << "Veinticinco"; break;
                    case 26: cout << "Veintiseis"; break;
                    case 27: cout << "Veintisiete"; break;
                    case 28: cout << "Veintiocho"; break;
                    case 29: cout << "Veintinueve"; break;
                }
            } else if (residuoCientos > 0) {
                int decenas = residuoCientos / 10;
                int unidades = residuoCientos % 10;

                switch (decenas) {
                    case 3: cout << "Treinta"; break;
                    case 4: cout << "Cuarenta"; break;
                    case 5: cout << "Cincuenta"; break;
                    case 6: cout << "Sesenta"; break;
                    case 7: cout << "Setenta"; break;
                    case 8: cout << "Ochenta"; break;
                    case 9: cout << "Noventa"; break;
                }

                if (decenas >= 3 && unidades > 0) {
                    cout << " y ";
                }

                switch (unidades) {
                    case 1: cout << "Uno"; break;
                    case 2: cout << "Dos"; break;
                    case 3: cout << "Tres"; break;
                    case 4: cout << "Cuatro"; break;
                    case 5: cout << "Cinco"; break;
                    case 6: cout << "Seis"; break;
                    case 7: cout << "Siete"; break;
                    case 8: cout << "Ocho"; break;
                    case 9: cout << "Nueve"; break;
                }
            }
            cout << endl;
        }
    }

    cout << "\nPresione ENTER para finalizar." << endl;
    cin.ignore();
    cin.get();
    return 0;
}
