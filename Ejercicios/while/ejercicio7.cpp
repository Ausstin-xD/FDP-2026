# include <iostream>
using namespace std;

int main() {
     int contador = 0;

    cout << "Ingresa un numero para la cuenta regresiva: " << endl;
    cin >> contador;

    while (contador >= 0) {
        cout << "Cuenta regresiva: " << contador << endl;
        contador--; 
    }
        
    return 0;}