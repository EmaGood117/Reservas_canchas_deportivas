#include <iostream>
using namespace std;

int main() {
    int canchas[3] = {0, 0, 0}; // 0 = disponible, 1 = ocupada
    int eleccion;
    int pago;

    cout << "Reservas de cancha " << endl;

    // Mostrar estado de canchas
    cout << "Estado actual de las canchas:" << endl;
    for (int i = 0; i < 3; i++) {
        cout << "Cancha " << (i + 1) << endl;
        if (canchas[i] == 0) {
            cout << "Disponible" << endl;
        } else {
            cout << "Ocupada" << endl;
        }
    }

    cout << endl << "Ingrese el numero de cancha que desea reservar (1-3): ";
    cin >> eleccion;

    if (eleccion < 1 || eleccion > 3) {
        cout << "Numero de cancha invalido." << endl;
        return 0;
    }

    if (canchas[eleccion - 1] == 1) {
        cout << "La cancha " << eleccion << " ya esta ocupada." << endl;
    } else {
        cout << "La cancha " << eleccion << " esta disponible." << endl;
        cout << "Seleccione metodo de pago:" << endl;
        cout << "1. QR" << endl;
        cout << "2. Tarjeta" << endl;
        cout << "Ingrese su opcion: ";
        cin >> pago;

        if (pago == 1) {
            cout << "Pago por QR realizado correctamente." << endl;
        } else if (pago == 2) {
            cout << "Pago con tarjeta realizado correctamente." << endl;
        } else {
            cout << "Metodo de pago invalido." << endl;
            return 0;
        }

        canchas[eleccion - 1] = 1;
        cout << "Reserva confirmada para la cancha " << eleccion << "." << endl;
    }

    cout << endl << "Gracias" << endl;

    return 0;
}
