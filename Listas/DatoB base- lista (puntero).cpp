#include <iostream>
using namespace std;

struct Nodo {
    int dato;
    Nodo* siguiente;
};

class ListaPuntero {
private:
    Nodo* cabeza;

public:
    ListaPuntero() {
        cabeza = NULL;
    }

    void insertar(int valor) {
        Nodo* nuevo = new Nodo();
        nuevo->dato = valor;
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
            cout << aux->dato << " ";
            aux = aux->siguiente;
        }
        cout << "\n";
    }
};

int main() {
    ListaPuntero l;
    l.insertar(5);
    l.insertar(15);
    l.insertar(25);
    l.mostrar();
}
