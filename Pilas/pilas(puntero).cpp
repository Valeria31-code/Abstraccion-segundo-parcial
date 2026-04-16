#include <iostream>
using namespace std;

struct Nodo {
    int dato;
    Nodo* siguiente;
};

class PilaPuntero {
private:
    Nodo* tope;

public:
    PilaPuntero() {
        tope = NULL;
    }

    void push(int valor) {
        Nodo* nuevo = new Nodo();
        nuevo->dato = valor;
        nuevo->siguiente = tope;
        tope = nuevo;
    }

    void pop() {
        if (tope == NULL) {
            cout << "Pila vacia\n";
            return;
        }
        Nodo* temp = tope;
        cout << "Eliminado: " << temp->dato << "\n";
        tope = tope->siguiente;
        delete temp;
    }

    int top() {
        if (tope == NULL) {
            cout << "Pila vacia\n";
            return -1;
        }
        return tope->dato;
    }

    void mostrar() {
        Nodo* aux = tope;
        while (aux != NULL) {
            cout << aux->dato << " ";
            aux = aux->siguiente;
        }
        cout << "\n";
    }
};

int main() {
    PilaPuntero p;
    p.push(5);
    p.push(15);
    p.push(25);
    p.mostrar();
    p.pop();
    p.mostrar();
}
