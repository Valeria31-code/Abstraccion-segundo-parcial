#include <iostream>
using namespace std;

struct Persona {
    int edad;
    string nombre;
};

struct Nodo {
    Persona dato;
    Nodo* siguiente;
};

int main() {
    Nodo* cabeza = NULL;
    Nodo* ultimo = NULL;
    int n;

    cout << "Cuantas personas deseas ingresar: ";
    cin >> n;

    // Insertar
    for (int i = 0; i < n; i++) {
        Persona p;
        cout << "Nombre: ";
        cin >> p.nombre;
        cout << "Edad: ";
        cin >> p.edad;

        Nodo* nuevo = new Nodo;
        nuevo->dato = p;
        nuevo->siguiente = NULL;

        if (cabeza == NULL) {
            cabeza = nuevo;
            ultimo = nuevo;
        } else {
            ultimo->siguiente = nuevo;
            ultimo = nuevo;
        }
    }

    // Mostrar
    cout << "\nLista:\n";
    Nodo* aux = cabeza;
    while (aux != NULL) {
        cout << aux->dato.nombre << " - " << aux->dato.edad << "\n";
        aux = aux->siguiente;
    }

    // Eliminar por nombre
    string nombre;
    cout << "\nQue nombre deseas eliminar: ";
    cin >> nombre;

    Nodo* actual = cabeza;
    Nodo* anterior = NULL;

    while (actual != NULL && actual->dato.nombre != nombre) {
        anterior = actual;
        actual = actual->siguiente;
    }

    if (actual == NULL) {
        cout << "No encontrado\n";
    } else {
        if (anterior == NULL)
            cabeza = actual->siguiente;
        else
            anterior->siguiente = actual->siguiente;

        delete actual;
    }

    // Mostrar final
    cout << "\nLista final:\n";
    aux = cabeza;
    while (aux != NULL) {
        cout << aux->dato.nombre << " - " << aux->dato.edad << "\n";
        aux = aux->siguiente;
    }

    return 0;
}
