Algoritmo PromedioNumeros
    Definir n, i Como Entero
    Definir numero, suma, promedio Como Real
    
    Escribir "Ingrese la cantidad de n�meros (n): "
    Leer n
    
    Si n <= 0 Entonces
        Escribir "Error: La cantidad de n�meros debe ser mayor que 0."
FinSi

suma <- 0


Para i <- 1 Hasta n Con Paso 1 Hacer
	Escribir "Ingrese el n�mero ", i, ": "
	Leer numero
	suma <- suma + numero
FinPara

promedio <- suma / n

Escribir "El promedio de los ", n, " n�meros es: ", promedio
FinAlgoritmo