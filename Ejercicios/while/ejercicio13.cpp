#include <iostream>
using namespace std;

int main() {
    int N, i = 1;
    int a = 0, b = 1, N2;

    cout << "Ingrese un numero, Para calcualr la serie de Fibonacci: ";
    cin >> N;

    cout << "Serie de Fibonacci: ";

    while (i <= N) {

        N2 = a + b;
        a = b;
        b = N2;

        i++;
        
        cout << N2 << " ";
        
    }

    return 0;
}