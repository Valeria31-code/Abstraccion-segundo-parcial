#include "pila.h"
#include <iostream>

using namespace std;

void PilaEnteros::push(int valor) {
    pila.push(valor);
    cout << "[PilaEnteros] push(" << valor << ")  |  tamano: " << pila.size() << "\n";
}

void PilaEnteros::pop() {
    if (pila.empty())
        cout << "La pila de enteros esta vacia." << "\n";
        return;
    cout << "[PilaEnteros] pop()  |  eliminado: " << pila.top() << "\n";
    pila.pop();
}

int PilaEnteros::top() const {
    if (pila.empty())
        cout << "Error: La pila de enteros esta vacia" << endl;
        return 0;
    return pila.top();
}

int PilaEnteros::size() const {
    return static_cast<int>(pila.size());
}

bool PilaEnteros::isEmpty() const {
    return pila.empty();
}

void PilaEnteros::mostrar() const {
    stack<int> tmp = pila;
    cout << "[PilaEnteros] tope de base: ";
    while (!tmp.empty()) {
        cout << tmp.top() << " ";
        tmp.pop();
    }
    cout << "\n";
}
