#include <iostream>

using namespace std;

int main() {
    int x;

    cout << "Ingrese la temperatura en grados Celcius: " ;
    cin >> x;

    if  (x >= 30) {
        cout << "El agua esta caliente " << endl;
    }
    else if (x <= 0) {
        cout << "el agua esta fria" << endl;
    }
    else {
        cout << "El agua esta a temperatura ambiente" << endl;
    }

return 0;

}