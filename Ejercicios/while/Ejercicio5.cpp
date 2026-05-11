# include <iostream>
using namespace std;
int main() {

    int numero = 0;

    cout << "Ingrese un numero para sumar pareas hasta tu numero: " << endl;
    cin >> numero;



    while (numero) {
        cout << "Numero par anterior es: " << numero - 1 << endl;
        numero--; 
    }
        cout << "Salir del bucle";
        
    return 0;
}