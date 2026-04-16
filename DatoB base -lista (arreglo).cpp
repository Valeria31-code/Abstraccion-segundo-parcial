#include <iostream>
using namespace std;

#define MAX 5

class ListaArreglo {
private:
    int datos[MAX];
    int n;

public:
    ListaArreglo() {
        n = 0;
    }

    void insertar(int valor) {
        if (n == MAX) {
            cout << "Lista llena\n";
            return;
        }
        datos[n++] = valor;
    }

    void mostrar() {
        for (int i = 0; i < n; i++) {
            cout << datos[i] << " ";
        }
        cout << "\n";
    }
};

int main() {
    ListaArreglo l;
    l.insertar(10);
    l.insertar(20);
    l.insertar(30);
    l.mostrar();
}

