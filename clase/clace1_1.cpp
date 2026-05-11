#include <iostream>
#include <cmath>

using namespace std;

int main() { 

float pi = 3.141516,r;
int area;

cout << "Bienvenido a calculadora de radio"<< endl;
cout << "Ingrese el valor del radio: " ;
cin >> r;

area = pi * pow(r,2);
cout << area << endl;

if (area % 2 == 0){
    cout << "El area calculada es par: " << endl<< area << "Por lo tanto, es un numero par." << endl;
}
else if (area % 2 == 1){
    cout << "El area calculada es impar: " << endl<< area << "Por lo tanto, es un numero impar." << endl;
}



return 0;
}

