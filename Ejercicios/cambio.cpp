#include <iostream>
using namespace std;

int main() {


    int cambio, n, resultado;

cout << "Hola, Prodias ingresar una opcion de cambio:" << endl;
cout << "1. Dolar a Euro:" << endl;
cout << "2. Dolar a Yen:" << endl; 
cout << "3. Dolar a Libra:" << endl;


   
cout << "Ingrese la opcion de cambio: ";
    cin >> cambio;

cout << "Ingrese la cantidad en Dólares: ";
    cin >> n;

switch (cambio) {
case 1:
resultado = (n * 1);
cout << "El resultado es: " << resultado << " Euros" << endl;
case 2:
resultado = (n * 157);
cout << "El resultado es: " << resultado << " Yenes" << endl;
case 3:
resultado = (n * 1);
cout << "El resultado es: " << resultado << " Libras" << endl;
}   

    return 0;
}
