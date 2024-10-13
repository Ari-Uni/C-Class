Proceso CalcularPromedio
    Definir n, suma, numero, promedio Como Real
    Definir i Como Entero

    Escribir "Ingrese la cantidad de números a promediar: "
    Leer n
    
    suma <- 0
    
    Para i <- 1 Hasta n Con Paso 1 Hacer
        Escribir "Ingrese el número ", i, ": "
        Leer numero
        suma <- suma + numero
    FinPara

    promedio <- suma / n
    
    Escribir "El promedio es: ", promedio
FinProceso