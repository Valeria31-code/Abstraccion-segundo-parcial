#include <iostream>
using namespace std;

struct Nodo {
    int dato;
    Nodo* siguiente;
};

int main() {
    Nodo* cabeza = NULL;
    Nodo* ultimo = NULL;
    int n, valor;

    cout << "Cuantos elementos deseas ingresar: ";
    cin >> n;

    // Crear lista
    for (int i = 0; i < n; i++) {
        cout << "Dato: ";
        cin >> valor;

        Nodo* nuevo = new Nodo{valor, NULL};

        if (cabeza == NULL) {
            cabeza = nuevo;
            ultimo = nuevo;
        } else {
            ultimo->siguiente = nuevo;
            ultimo = nuevo;
        }
    }

    // Mostrar
    cout << "\nLista: ";
    Nodo* aux = cabeza;
    while (aux != NULL) {
        cout << aux->dato << " ";
        aux = aux->siguiente;
    }

    // Eliminar por valor
    cout << "\n\nQue valor deseas eliminar: ";
    cin >> valor;

    Nodo* actual = cabeza;
    Nodo* anterior = NULL;

    while (actual != NULL && actual->dato != valor) {
        anterior = actual;
        actual = actual->siguiente;
    }

    if (actual == NULL) {
        cout << "Valor no encontrado\n";
    } else {
        if (anterior == NULL)
            cabeza = actual->siguiente;
        else
            anterior->siguiente = actual->siguiente;

        delete actual;
    }

    // Mostrar final
    cout << "\nLista final: ";
    aux = cabeza;
    while (aux != NULL) {
        cout << aux->dato << " ";
        aux = aux->siguiente;
    }

    return 0;
}
