#include <iostream>
using namespace std;

#define MAX 5

int main() {
    int lista[MAX];
    int n;

    cout << "Cuantos elementos deseas ingresar (max 5): ";
    cin >> n;

    if (n > MAX) n = MAX;

    // Entrada de datos
    for (int i = 0; i < n; i++) {
        cout << "Elemento [" << i << "]: ";
        cin >> lista[i];
    }

    // Mostrar
    cout << "\nLista original: ";
    for (int i = 0; i < n; i++) {
        cout << lista[i] << " ";
    }

    // Modificar por posición
    int pos, nuevo;
    cout << "\n\nQue posicion deseas modificar: ";
    cin >> pos;

    if (pos >= 0 && pos < n) {
        cout << "Nuevo valor: ";
        cin >> nuevo;
        lista[pos] = nuevo;
    } else {
        cout << "Posicion invalida\n";
    }

    // Mostrar final
    cout << "\nLista final: ";
    for (int i = 0; i < n; i++) {
        cout << lista[i] << " ";
    }

    return 0;
}
