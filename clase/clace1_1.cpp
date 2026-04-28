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

if (area % 2 == 0)


else{
    cout << "El area calculada es par: " << area << "Por lo tanto, es un número par." << endl;}

else{
    cout << "El area calculada es impar: " << area << "Por lo tanto, es un número impar." << endl;
}











return 0;

}
