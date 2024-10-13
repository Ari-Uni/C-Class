#include <iostream>
using namespace std;

int main() {
    int n, m, suma = 0;

    // Solicitar al usuario los valores de n y m
    cout << "Ingrese el valor de n: ";
    cin >> n;
    cout << "Ingrese el valor de m: ";
    cin >> m;

    // Verificar que n sea menor o igual que m
    if (n > m) {
        cout << "Error: n debe ser menor o igual que m." << endl;
        return 1; // Terminar el programa si n es mayor que m
    }

    // Bucle para sumar los números pares entre n y m
    for (int i = n; i <= m; i++) {
        if (i % 2 == 0) {
            suma += i;
        }
    }

    // Mostrar el resultado
    cout << "La suma de los números pares entre " << n << " y " << m << " es: " << suma << endl;

    return 0;
}

