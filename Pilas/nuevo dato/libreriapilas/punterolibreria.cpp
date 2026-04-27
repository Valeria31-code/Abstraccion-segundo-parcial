#include <iostream>
#include <stack>
using namespace std;

struct Persona {
    int edad;
    string nombre;
};

int main() {
    stack<Persona> p;
    int op;

    do {
        cout << "\n1.Push 2.Pop 3.Top 4.Mostrar 0.Salir\n";
        cin >> op;

        if (op == 1) {
            Persona per;
            cin >> per.nombre >> per.edad;
            p.push(per);
        }

        if (op == 2) {
            if (p.empty())
                cout << "Pila vacia\n";
            else {
                cout << "Eliminado: " << p.top().nombre << "\n";
                p.pop();
            }
        }

        if (op == 3) {
            if (p.empty())
                cout << "Pila vacia\n";
            else
                cout << p.top().nombre << " - " << p.top().edad << "\n";
        }

        if (op == 4) {
            stack<Persona> aux = p;
            while (!aux.empty()) {
                cout << aux.top().nombre << " - " << aux.top().edad << "\n";
                aux.pop();
            }
        }

    } while (op != 0);
}
