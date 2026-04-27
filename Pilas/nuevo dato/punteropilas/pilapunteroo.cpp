#include <iostream>
using namespace std;

struct Persona {
    int edad;
    string nombre;
};

struct Nodo {
    Persona dato;
    Nodo* sig;
};

class PilaPtr {
    Nodo* tope;

public:
    PilaPtr() { tope = NULL; }

    void push(const Persona& p) {
        Nodo* n = new Nodo{p, tope};
        tope = n;
    }

    void pop() {
        if (!tope) {
            cout << "Pila vacia\n";
            return;
        }
        Nodo* temp = tope;
        cout << "Eliminado: " << temp->dato.nombre << "\n";
        tope = tope->sig;
        delete temp;
    }

    void top() {
        if (!tope)
            cout << "Pila vacia\n";
        else
            cout << tope->dato.nombre << " - " << tope->dato.edad << "\n";
    }

    void mostrar() {
        Nodo* aux = tope;
        while (aux) {
            cout << aux->dato.nombre << " - " << aux->dato.edad << "\n";
            aux = aux->sig;
        }
    }
};

int main() {
    PilaPtr p;
    int op;

    do {
        cout << "\n1.Push 2.Pop 3.Top 4.Mostrar 0.Salir\n";
        cin >> op;

        if (op == 1) {
            Persona per;
            cin >> per.nombre >> per.edad;
            p.push(per);
        }
        if (op == 2) p.pop();
        if (op == 3) p.top();
        if (op == 4) p.mostrar();

    } while (op != 0);
}
