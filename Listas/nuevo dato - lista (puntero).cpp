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

class ListaPuntero {
private:
    Nodo* cabeza;

public:
    ListaPuntero() {
        cabeza = NULL;
    }

    // 🔥 Uso de referencia
    void insertar(const Persona& p) {
        Nodo* nuevo = new Nodo();
        nuevo->dato = p;
        nuevo->siguiente = NULL;

        if (cabeza == NULL) {
            cabeza = nuevo;
        } else {
            Nodo* aux = cabeza;
            while (aux->siguiente != NULL) {
                aux = aux->siguiente;
            }
            aux->siguiente = nuevo;
        }
    }

    void mostrar() {
        Nodo* aux = cabeza;
        while (aux != NULL) {
            cout << aux->dato.nombre << " - " << aux->dato.edad << "\n";
            aux = aux->siguiente;
        }
    }
};

int main() {
    ListaPuntero lista;

    Persona p1 = {19, "Carlos"};
    Persona p2 = {21, "Sofia"};

    lista.insertar(p1);
    lista.insertar(p2);

    lista.mostrar();
}
