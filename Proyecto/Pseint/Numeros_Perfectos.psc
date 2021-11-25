Algoritmo Algoritmo_5
	Definir entrada, div, suma_divs Como Entero
	Leer num_entrada
	
	Repetir
		suma_divs <- 0
		div <- -1
		Si div<>num_entrada Entonces
			Repetir
				Si num_entrada mod div = 0 Entonces
					suma_divs <- suma_divs+div
				FinSi
				div <- div + 1
			Hasta Que div > num_entrada-1
		FinSi
		si suma_divs=num_entrada Entonces
			Escribir num_entrada
		FinSi
	Hasta Que num_entrada = 1
	
FinAlgoritmo
