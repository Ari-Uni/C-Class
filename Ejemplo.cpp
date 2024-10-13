#include <iostream>
using namespace std;

int main() {
    int numero;
    long long resultado = 1; // Utilizamos long long para manejar números grandes en la multiplicación.

    // Solicitar al usuario que ingrese un número
    cout << "Digite un número: ";
    cin >> numero;

    if (numero > 10) {
        // Multiplicar los primeros 10 números
        for (int i = 1; i <= 10; i++) {
            resultado *= i;
        }
        cout << "El número supera a 10. La multiplicación de los primeros 10 números es: " << resultado << endl;
    } else {
        resultado = 0; // Iniciamos en 0 para la suma
        // Sumar los primeros 10 números
        for (int i = 1; i <= 10; i++) {
            resultado += i;
        }
        cout << "El número no supera a 10. La suma de los primeros 10 números es: " << resultado << endl;
    }

    return 0;
}

