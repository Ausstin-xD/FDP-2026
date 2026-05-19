# include <iostream>
using namespace std; 

int main() {

int n,m;

cout << "Ingresa un numero para calcualr su tabla de multiplicar: " << endl;
cin >> n;

for (int i = 1; i <= 10; i++)
{
    m=n*i;

    cout << n << " por " << i << " = " << m << endl;
}





   
return 0;
}   