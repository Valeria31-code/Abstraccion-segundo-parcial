#include <iostream>
#include <list>
using namespace std;

int main() {
    list<int> lista;
    int n, valor;

    cout << "Cuantos elementos deseas ingresar: ";
    cin >> n;

    // Insertar
    for (int i = 0; i < n; i++) {
        cout << "Dato: ";
        cin >> valor;
        lista.push_back(valor);
    }

    // Mostrar (SIN range-based for)
    cout << "\nLista: ";
    for (list<int>::iterator it = lista.begin(); it != lista.end(); it++) {
        cout << *it << " ";
    }

    // Buscar
    cout << "\n\nQue valor deseas buscar: ";
    cin >> valor;

    bool encontrado = false;

    for (list<int>::iterator it = lista.begin(); it != lista.end(); it++) {
        if (*it == valor) {
            encontrado = true;
            break;
        }
    }

    if (encontrado)
        cout << "El valor SI existe\n";
    else
        cout << "El valor NO existe\n";

    return 0;
}
