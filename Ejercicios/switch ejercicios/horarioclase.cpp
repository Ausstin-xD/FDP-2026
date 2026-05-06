#include <iostream>
using namespace std;

int main() {



int dia;
    cout << "Hola, Podrias ingresar el dia de la semana (1-7):" ;
    cin >> dia;
    
switch (dia) {
case 1:
    { cout << "7:00 - 9:00 AM Precalculo" << endl; }
    { cout << "9:00 - 11:00 AM Elementos de Ciencia" << endl; }
    { cout << "11:00 - 1:00 PM Fundamentos de Programacion" << endl; }
    break;
case 2:
    { cout << "9:00 - 11:00 AM Labo de elementos de ciencia" << endl; }
    { cout << "11:00 - 1:00 PM Matematica Discreta" << endl; }
    { cout << "1:00 - 3:00 PM Labo de fundamentos de programacion" << endl; }
    break;
case 3:
    { cout << "7:00 - 9:00 AM Precalculo" << endl; }
    { cout << "9:00 - 11:00 AM Elementos de Ciencia" << endl; }
    { cout << "11:00 - 1:00 PM Fundamentos de Programacion" << endl; }
    break;
case 4:
    { cout << "11:00 - 1:00 PM Matematica Discreta" << endl; }
    break;
case 5:
    { cout << "7:00 - 8:00 AM Precalculo" << endl; }
    { cout << "8:00 - 9:00 AM Matematica Discreta" << endl; }
    break;
case 6:
    { cout << "Hoy no tienes clases" << endl; }
    break;
case 7:
    { cout << "Hoy no tienes clases" << endl; }
    break;

default:
    { cout << "Ingresa un numero del (1-7)" << endl; }
}
    return 0;
}