# include <iostream>
using namespace std;

int main() {
    int n,a=0,b=1,n2,f;
    cout << "Ingresa un numero para mostras los numeros de la serie de fibonacci: " << endl;
    cin >> n;

    for (int i = 0; i <= n; i++)
    {
        n2 = a + b;
        a = b;
        b = n2;
        cout << n2 << " "<<endl;
    }
    
cout << "La serie de Fibonacci: " << n2 << endl;



    return 0;
}