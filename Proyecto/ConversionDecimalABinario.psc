Algoritmo Conversion_decimal_a_binario
	Definir t, i, j, num, size Como Entero
	Definir temporal, binario Como Caracter
	temporal <-""
	Leer num
	Repetir
		t <- num mod 2
		num <- trunc(num/2) // Obteniendo la división entera
		Si t= 1 Entonces
			temporal<-temporal+"1"
		SiNo
			temporal<- temporal + "0"
		FinSi		
	Hasta Que num = 1 o num= 0
	Si num = 1 Entonces
		temporal<-temporal +"1"
	FinSi
	size <- Longitud(temporal)	
	Para i<- size Hasta 1 Con Paso  -1 Hacer
		binario <- binario + Subcadena(temporal, i, i)		
	FinPara
	Escribir "El equivalente de ", num " en binario es ", binario
	
	
FinAlgoritmo