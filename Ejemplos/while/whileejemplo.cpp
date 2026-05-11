# include <iostream>
using namespace std;
int main() {

    int contador = 0;

    cout << "Ingrese un numero para iniciar el contador: " << endl;
    cin >> contador;

    while (contador <= 5) {
        cout << "El numero es: " << contador << endl;
        contador++; 
    }
        cout << "Salir del bucle";
        
    return 0;
}