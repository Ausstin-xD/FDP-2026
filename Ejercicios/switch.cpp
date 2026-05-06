#include <iostream>
using namespace std;

int main() {

int n;

cout << "Hola, Podrias ingresar un numero del 1 al 7 para saber el dia de la semana:" ;
cout << "1. Lunes:" << endl;
cout << "2. Martes:" << endl;
cout << "3. Miercoles:" << endl;
cout << "4. Jueves:" << endl;
cout << "5. Viernes:" << endl;
cout << "6. Sabado:" << endl;
cout << "7. Domingo:" << endl;
cout << "8. Salir:" << endl;

cin >> n;

switch (n) {
case 1:
    cout << "El dia es Lunes" << endl;

case 2:
    cout << "El dia es Martes" << endl;

case 3:
    cout << "El dia es Miercoles" << endl;

case 4:
    cout << "El dia es Jueves" << endl;

case 5:
    cout << "El dia es Viernes" << endl;

case 6:
    cout << "El dia es Sabado" << endl;

case 7:
    cout << "El dia es Domingo" << endl;

case 8:
    cout << "Saliendo del programa..." << endl;
return 0; 
}

default:
if (n >= 0 && n < 8)
{cout << "coloque un numero del 1 al 7" << endl;
else
cout << "Error: numero invalido" << endl;
}

return 0;
}  