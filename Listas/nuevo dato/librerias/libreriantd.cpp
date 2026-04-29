#include <iostream>
#include <list>
#include <string>
using namespace std;

struct Persona {
    int edad;
    string nombre;
};

int main() {
    list<Persona> lista;
    int n;

    cout << "Cuantas personas deseas ingresar: ";
    cin >> n;

    cin.ignore(); // ?? importante para getline

    // Insertar
    for (int i = 0; i < n; i++) {
        Persona p;

        cout << "Nombre: ";
        getline(cin, p.nombre);

        cout << "Edad: ";
        cin >> p.edad;
        cin.ignore();

        lista.push_back(p);
    }

    // Mostrar
    cout << "\nLista:\n";
    for (list<Persona>::iterator it = lista.begin(); it != lista.end(); it++) {
        cout << it->nombre << " - " << it->edad << "\n";
    }

    // Buscar
    string nombre;
    cout << "\nQue nombre deseas buscar: ";
    getline(cin, nombre);

    bool encontrado = false;

    for (list<Persona>::iterator it = lista.begin(); it != lista.end(); it++) {
        if (it->nombre == nombre) {
            cout << "Encontrado: " << it->nombre << " - " << it->edad << "\n";
            encontrado = true;
        }
    }

    if (!encontrado)
        cout << "No encontrado\n";

    return 0;
}
