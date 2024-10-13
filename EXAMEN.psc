Algoritmo CalculadoraBásica
	Definir SUM,REST,MULTI,DIV Como Real
	Definir n,n1,n2 Como Entero
	Escribir "Seleccione una operación"
	Escribir "1.Suma"
	Escribir "2.Resta"
	Escribir "3.Multiplicación"
	Escribir "4.División"
	Leer n
	Segun n Hacer
		Caso 1:
			Escribir "Ingrese el primer número: "
			Leer n1
			Escribir "Ingrese el segundo número: "
			Leer n2
			SUM = n1+n2
			Escribir "La suma de " n1  " + " n2  " es: " SUM
		Caso 2:
			Escribir "Ingrese el primer número: "
			Leer n1
			Escribir "Ingrese el segundo número: "
			Leer n2
			REST = n1-n2
			Escribir "La resta de " n1  " - " n2  " es: " REST
		Caso 3:
			Escribir "Ingrese el primer número: "
			Leer n1
			Escribir "Ingrese el segundo número: "
			Leer n2
			MULTI = n1*n2
			Escribir "La multiplicación de " n1  " * " n2  " es: " MULTI
		Caso 4:
			Escribir "Ingrese el primer número: "
			Leer n1
			Escribir "Ingrese el segundo número: "
			Leer n2
			DIV = n1/n2
			Escribir "La división de " n1  " entre " n2  " es: " DIV
		De Otro Modo:      
			Escribir "Error: La operación no es váida."
	Fin Segun
FinAlgoritmo
