#include <iostream>
using namespace std;

#define MAX 5

struct Persona {
    int edad;
    string nombre;
};

class PilaArr {
    Persona datos[MAX];
    int tope;

public:
    PilaArr() { tope = -1; }

    void push(Persona p) {
        if (tope == MAX - 1) {
            cout << "Pila llena\n";
            return;
        }
        datos[++tope] = p;
    }

    void pop() {
        if (tope == -1) {
            cout << "Pila vacia\n";
            return;
        }
        cout << "Eliminado: " << datos[tope].nombre << "\n";
        tope--;
    }

    void top() {
        if (tope == -1)
            cout << "Pila vacia\n";
        else
            cout << datos[tope].nombre << " - " << datos[tope].edad << "\n";
    }

    void mostrar() {
        for (int i = tope; i >= 0; i--)
            cout << datos[i].nombre << " - " << datos[i].edad << "\n";
    }
};

int main() {
    PilaArr p;
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
