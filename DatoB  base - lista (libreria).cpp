#include <iostream>
#include <list>
using namespace std;

int main() {
    list<int> lista;

    lista.push_back(1);
    lista.push_back(2);
    lista.push_back(3);

    for (int x : lista) {
        cout << x << " ";
    }
}
