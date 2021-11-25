SubProceso s <- sub_cadena_numero ( c )
	Definir s Como Entero
	Si c="0" Entonces
		s<-0
	FinSi
	Si c="1" Entonces
		s<-1
	FinSi
	Si c="2" Entonces
		s<-2
	FinSi
	Si c="3" Entonces
		s<-3
	FinSi
	Si c="4" Entonces
		s<-4
	FinSi
	Si c="5" Entonces
		s<-5
	FinSi
	Si c="6" Entonces
		s<-6
	FinSi
	Si c="7" Entonces
		s<-7
	FinSi
	Fin SubProceso
Algoritmo Octal_Dec
	Definir Octal como Cadena
	Definir c Como Caracter
	Definir num, j, size, s Como Entero
	Escribir "Dame tu Octal: "
	Leer Octal
	j<-0
	num <- 0 
	size <- Longitud(Octal)
	Para i <-size-1  Hasta 0 Con Paso -1 Hacer
		c<-Subcadena(Octal,i,i)
		s<-sub_cadena_numero(c)
		Segun s Hacer
			0:
				num <- num+0
			1:
				num <- num +(8^j) 
			2:
				num <- num +(2*8^j)
			3:
				num <- num +(3*8^j)
			4:
				num <- num +(4*8^j)
			5:
				num <- num +(5*8^j)
			6:
				num <- num +(6*8^j)
			7:
				num <- num +(7*8^j)
		FinSegun
		j<-j+1
	FinPara
	Escribir num
FinAlgoritmo
