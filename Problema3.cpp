#include <iostream>
using namespace std;

int main() {
    int n; // Solicitar al usuario que ingrese el valor de n
    cout << "Ingrese un n�mero n: ";
    cin >> n;

    cout << " \n Los multiplos de 3 desde 1 hasta " << n << ":";

    for (int i =1; i <= n; i++) { // Bucle para encontrar y mostrar los m�ltiplos de 3
        if (i % 3 == 0) {
            cout << i << " "; // Imprimir los m�ltiplos de 3
        }
    }

    cout << endl;

    return 0;
}

