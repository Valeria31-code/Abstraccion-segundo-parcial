#include <iostream>
#include <list>
using namespace std;

struct Persona {
    int edad;
    string nombre;
};

int main() {
    list<Persona> lista;

    lista.push_back({18, "Ana"});
    lista.push_back({23, "Luis"});

    for (const Persona& p : lista) {
        cout << p.nombre << " - " << p.edad << "\n";
    }
}
