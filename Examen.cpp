#include <iostream>
using namespace std;

int main() {
    int n;
    double suma = 0, numero;

    // Solicitar al usuario la cantidad de números a promediar
    cout << "Ingrese la cantidad de números (n): ";
    cin >> n;

    // Verificar que n sea positivo
    if (n <= 0) {
        cout << "Error: la cantidad de números debe ser mayor que 0." << endl;
        return 1;
    }

    // Bucle para ingresar los n números y sumarlos
    for (int i = 1; i <= n; i++) {
        cout << "Ingrese el número " << i << ": ";
        cin >> numero;
        suma += numero; // Sumar cada número a la variable 'suma'
    }

    // Calcular el promedio
    double promedio = suma / n;

    // Mostrar el resultado
    cout << "El promedio de los " << n << " números es: " << promedio << endl;

    return 0;
}
