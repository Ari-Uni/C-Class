#include <iostream>
using namespace std;

int main() {
    int n,m, suma=0 ;
    cout << "Ingrese un numero n: ";
    cin >> n;
    cout << "Ingrese un numero m: ";
    cin >> m;

   for (int i = n; i <= m; i++) {
        if (i % 2 == 0) {
            suma += i;
        }
    }

      cout << "La suma de los números pares entre " << n << " y " << m << " es: " << suma << endl;

    return 0;
}

