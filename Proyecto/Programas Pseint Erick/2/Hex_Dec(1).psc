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
	Si c="8" Entonces
		s<-8
	FinSi
	Si c="9" Entonces
		s<-9
	FinSi
	Si c="A" Entonces
		s<-10
	FinSi
	Si c="B" Entonces
		s<-11
	FinSi
	Si c="C" Entonces
		s<-12
	FinSi
	Si c="D" Entonces
		s<-13
	FinSi
	Si c="E" Entonces
		s<-14
	FinSi
	Si c="F" Entonces
		s<-15
	FinSi
	Fin SubProceso


Proceso Hex_Dec
	Definir hexa como Cadena
	Definir c Como Caracter
	Definir num, j, size, s Como Entero
	Escribir "Dame tu hexadecimal: "
	Leer hexa
	j<-0
	num <- 0 
	size <- Longitud(hexa)
	Para i <-size-1  Hasta 0 Con Paso -1 Hacer
		c<-Subcadena(hexa,i,i)
		s<-sub_cadena_numero(c)
		Segun s Hacer
			 0:
				 num <- 0
				 Escribir s
			1:
				num <- num +(16^j) 
			2:
				num <- num +(2*16^j)
			3:
				num <- num +(3*16^j)
			4:
				num <- num +(4*16^j)
			5:
				num <- num +(5*16^j)
			6:
				num <- num +(6*16^j)
			7:
				num <- num +(7*16^j)
			8:
				num <- num +(8*16^j)
			9:
				num <- num +(9*16^j)
			10:
				num <- num +(10*16^j)
			11:
				num <- num +(11*16^j)
			12:
				num <- num +(12*16^j)
			13:
				num <- num +(13*16^j)
			14:
				num <- num +(14*16^j)
			15:
				num <- num +(15*16^j)
		Fin Segun
		Escribir "decimal vale ",num
		j <-j+1
	Fin Para
	Escribir num
FinProceso
