#include <iostream>
#include <stack>
using namespace std;

int main() {
    stack<int> pila;

    pila.push(100);
    pila.push(200);
    pila.push(300);

    cout << "Tope: " << pila.top() << "\n";

    pila.pop();

    cout << "Nuevo tope: " << pila.top() << "\n";

    while (!pila.empty()) {
        cout << pila.top() << " ";
        pila.pop();
    }
}
