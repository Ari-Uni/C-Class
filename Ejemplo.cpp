#include <iostream>
using namespace std;

int main() {
    int numero;
    long long resultado = 1; // Utilizamos long long para manejar n�meros grandes en la multiplicaci�n.

    // Solicitar al usuario que ingrese un n�mero
    cout << "Digite un n�mero: ";
    cin >> numero;

    if (numero > 10) {
        // Multiplicar los primeros 10 n�meros
        for (int i = 1; i <= 10; i++) {
            resultado *= i;
        }
        cout << "El n�mero supera a 10. La multiplicaci�n de los primeros 10 n�meros es: " << resultado << endl;
    } else {
        resultado = 0; // Iniciamos en 0 para la suma
        // Sumar los primeros 10 n�meros
        for (int i = 1; i <= 10; i++) {
            resultado += i;
        }
        cout << "El n�mero no supera a 10. La suma de los primeros 10 n�meros es: " << resultado << endl;
    }

    return 0;
}

