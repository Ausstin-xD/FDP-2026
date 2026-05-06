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
   { cout << "El dia es Lunes" << endl; }
break;
case 2:
    { cout << "El dia es Martes" << endl; }
break;
case 3:
    { cout << "El dia es Miercoles" << endl; }
break;
case 4:
    { cout << "El dia es Jueves" << endl; }
break;
case 5:
    { cout << "El dia es Viernes" << endl; }
break;
case 6:
    { cout << "El dia es Sabado" << endl; }
break;
case 7:
    { cout << "El dia es Domingo" << endl; }
break;
case 8:
    { cout << "Saliendo del programa..." << endl; }
    return 0;

default:
    { cout << "Opcion no valida, por favor ingresa un numero del 1 al 8." << endl; }

}
return 0;
}  