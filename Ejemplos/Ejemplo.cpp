
#include <iostream>
using namespace std;

int main() {
    int a, b;
    
    cout << "Ingrese el primer numero: ";
    cin >> a;
    cout << "Ingrese el segundo numero: ";
    cin >> b;

    // Operaciones aritméticas
    int suma = a + b;
    int diferecia = a -b;
    int producto = a * b;
    int divicion = a / b;
    int residuo = a % b;

    // Mostrar resultados
    cout << "suma " << suma << endl;
    cout << "diferencia " << diferecia << endl;
    cout << "producto " << producto << endl;
    cout << "divicion " << divicion << endl;
    cout << "residuo de la divicion " << residuo << endl;
    return 0;
}
