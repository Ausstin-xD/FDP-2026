#include <iostream>
using namespace std;

int main() {
    int N, i = 1, suma = 0;

    cout << "Ingrese un numero, para sumar los numeros pares hasta ese numero: ";
    cin >> N;

    while (i <= N) {
        if (i % 2 == 0) {
            suma = suma + i;
        }
        i++;
    }

    cout << "La suma de los numeros pares es: " << suma << endl;

    return 0;
}