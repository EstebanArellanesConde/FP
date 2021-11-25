Funcion num <- convertir_binario_a_decimal ( binario )
	Definir num, pot, size Como Entero
	Definir c Como Caracter
	num<-0
	pot<-0
	Escribir  binario
	size <- Longitud(binario) // Calcula la longitud de una cadena		
	Para i<-size Hasta 1 Con Paso -1 Hacer
		c<-Subcadena(binario,i,i) // Regresa una subcadena en este caso el caracter numero i
		Si c = "1" Entonces
			num <- num + 2^pot
		FinSi
		pot <- pot + 1
	FinPara
Fin Funcion

Funcion binario <- leer_binario ()
	// binario es la variable de retorno de tipo cadena
	Definir binario, c Como Caracter	
	Definir valido, terminar Como Logico
	Definir size, i Como Entero
		
	Repetir
		valido <- Verdadero
		Escribir  "Ingresa un número binario"
		Leer binario
		Escribir binario
		size <- Longitud(binario) // Calcula la longitud de una cadena		
		Escribir  size
		terminar<- Falso
		
		Para i<-1 Hasta size Con Paso 1 Hacer
			c<-Subcadena(binario,i,i) // Regresa una subcadena en este caso el caracter numero i				
			Si c<>"0" Y c <> "1" Entonces
				valido <- falso					
			FinSi			
		FinPara
		
	Hasta Que valido=Verdadero	
FinFuncion

Algoritmo Conversion_Binario_a_Decimal_Funciones
	Definir bin como Cadena
	Definir n Como Entero	
	bin <- leer_binario()
	n <- convertir_binario_a_decimal(bin)
	Escribir  "El equivalente decimal de ", bin, " es ", n	
FinAlgoritmo