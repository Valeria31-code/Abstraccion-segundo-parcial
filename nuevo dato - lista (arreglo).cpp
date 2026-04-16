#include <iostream>
using namespace std;

#define MAX 5

struct Persona {
    int edad;
    string nombre;
};

class ListaArreglo {
private:
    Persona datos[MAX];
    int n;

public:
    ListaArreglo() {
        n = 0;
    }

    void insertar(Persona p) {
        if (n == MAX) {
            cout << "Lista llena\n";
            return;
        }
        datos[n++] = p;
    }

    void mostrar() {
        for (int i = 0; i < n; i++) {
            cout << datos[i].nombre << " - " << datos[i].edad << "\n";
        }
    }
};

int main() {
    ListaArreglo lista;

    lista.insertar({20, "Ana"});
    lista.insertar({22, "Luis"});

    lista.mostrar();
}
