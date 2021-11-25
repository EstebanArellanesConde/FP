Algoritmo Conversion_Binario_a_Decimal	
	Definir binario Como Cadena
	Definir valido, terminar Como Logico
	Definir c Como Caracter
	Definir num, pot, size Como Entero	
	
	Repetir
		valido <- Verdadero
		terminar<- Falso
		Leer binario
		size <- Longitud(binario)
		Para i<-1 Hasta size Con Paso  1 Hacer
			c <- Subcadena(binario, i,i)
			Si c<>"0" y c <> "1" Entonces
				valido <- falso
			FinSi	
		FinPara		
	Hasta Que valido = Verdadero
	
	Para i<-size Hasta 1 Con Paso  -1 Hacer
		c <- Subcadena(binario, i,i)
		Si c = "1" Entonces
			num <- num + 2^pot
		FinSi
		pot <- pot + 1
	FinPara
	Escribir "El equivalente de ", binario, " en decimal es ", num
FinAlgoritmo