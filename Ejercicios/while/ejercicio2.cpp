#include <iostream>
using namespace std;

int main() {
    int num, suma = 0;

    do {
        cout << "Ingresa un numero (0 para terminar): ";
        cin >> num;

        suma = suma + num;

    } while (num != 0);

    cout << "La suma de los numeros ingresados es: " << suma << endl;

    return 0;
}