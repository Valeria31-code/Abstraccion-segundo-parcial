#include <iostream>
#include <string>
using namespace std;

#define MAX 5

struct Persona {
    int edad;
    string nombre;
};

int main() {
    Persona lista[MAX];
    int n;

    cout << "Cuantas personas deseas ingresar (max 5): ";
    cin >> n;

    if (n > MAX) n = MAX;

    cin.ignore(); // LIMPIA BUFFER ??

    // Insertar
    for (int i = 0; i < n; i++) {
        cout << "Nombre: ";
        getline(cin, lista[i].nombre);

        cout << "Edad: ";
        cin >> lista[i].edad;
        cin.ignore(); // importante
    }

    // Mostrar
    cout << "\nLista original:\n";
    for (int i = 0; i < n; i++) {
        cout << i << ". " << lista[i].nombre << " - " << lista[i].edad << "\n";
    }

    // Modificar
    int pos;
    cout << "\nQue posicion deseas modificar: ";
    cin >> pos;
    cin.ignore();

    if (pos >= 0 && pos < n) {
        cout << "Nuevo nombre: ";
        getline(cin, lista[pos].nombre);

        cout << "Nueva edad: ";
        cin >> lista[pos].edad;
    } else {
        cout << "Posicion invalida\n";
    }

    // Mostrar final
    cout << "\nLista final:\n";
    for (int i = 0; i < n; i++) {
        cout << lista[i].nombre << " - " << lista[i].edad << "\n";
    }

    return 0;
}
