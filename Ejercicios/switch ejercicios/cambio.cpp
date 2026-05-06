#include <iostream>
using namespace std;

int main() {


    int cambio, n, resultado, e, y, l;

cout << "Hola, Prodias ingresar una opcion de cambio:" << endl;
cout << "1. Dolar a Euro:" << endl;
cout << "2. Dolar a Yen:" << endl; 
cout << "3. Dolar a Libra:" << endl;
 
cout << "Ingrese la opcion de cambio: " << endl;
    cin >> cambio;

cout << "Ingrese la cantidad en Dolares: " << endl;
    cin >> n;

switch (cambio) {
case 1:  e = (n * 1);
cout << "El resultado es: " << e << " Euros" << endl;
break;

case 2:  y = (n * 157);
cout << "El resultado es: " << y << " Yenes" << endl;
break;

case 3:  l = (n * 1);
cout << "El resultado es: " << l << " Libras" << endl;
break;

default:
cout << "Ingresa una opcion valida (1-3)" << endl;
}   

    return 0;
}
