#include <iostream>
using namespace std;

int main() {
int res,n;
cout << "Hola, Podrias ingresar un numero:" ;
    
cin >> n;
res= n % 2;

switch (res) {
case 0:
    cout << "El numero es par" << endl;

case 1:
    cout << "El numero es impar" << endl;
    
default:
    cout << "Datos incorrectos" << endl;

    return 0;
}