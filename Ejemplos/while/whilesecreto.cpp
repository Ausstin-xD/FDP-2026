# include <iostream>
using namespace std;

int main() {

    int numeroSecreto = 42;
    int intento;

    cout << "Adivina el numero secreto: " << endl;
    cout << "Ingresa un numero del 1 al 100: " << endl;
    cin >> intento;

    cin >> intento;
    while (intento != numeroSecreto) {
        if (intento > numeroSecreto) {
            cout << "El número es demasiado alto. Inténtalo de nuevo: ";
        } else {
            cout << "El número es demasiado bajo. Inténtalo de nuevo: ";
        }
        cin >> intento; 
    }

    cout << "¡Felicidades! Has adivinado el número secreto." << endl;
    
    return 0;
}