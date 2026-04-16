#include <iostream>
using namespace std;

#define MAX 5

class PilaArreglo {
private:
    int datos[MAX];
    int tope;

public:
    PilaArreglo() {
        tope = -1;
    }

    void push(int valor) {
        if (tope == MAX - 1) {
            cout << "Pila llena\n";
            return;
        }
        datos[++tope] = valor;
    }

    void pop() {
        if (tope == -1) {
            cout << "Pila vacia\n";
            return;
        }
        cout << "Eliminado: " << datos[tope--] << "\n";
    }

    int top() {
        if (tope == -1) {
            cout << "Pila vacia\n";
            return -1;
        }
        return datos[tope];
    }

    void mostrar() {
        for (int i = tope; i >= 0; i--) {
            cout << datos[i] << " ";
        }
        cout << "\n";
    }
};

int main() {
    PilaArreglo p;
    p.push(10);
    p.push(20);
    p.push(30);
    p.mostrar();
    p.pop();
    p.mostrar();
}
