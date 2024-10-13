Algoritmo PromedioNumeros
    Definir n, i Como Entero
    Definir numero, suma, promedio Como Real
    
    Escribir "Ingrese la cantidad de números (n): "
    Leer n
    
    Si n <= 0 Entonces
        Escribir "Error: La cantidad de números debe ser mayor que 0."
FinSi

suma <- 0


Para i <- 1 Hasta n Con Paso 1 Hacer
	Escribir "Ingrese el número ", i, ": "
	Leer numero
	suma <- suma + numero
FinPara

promedio <- suma / n

Escribir "El promedio de los ", n, " números es: ", promedio
FinAlgoritmo