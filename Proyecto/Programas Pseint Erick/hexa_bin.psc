SubProceso s <-equivalencia2 ( c )
	Definir s Como Caracter
	Si c="0" Entonces
		s<-""
	FinSi
	Si c="1" Entonces
		s<-"1"
	FinSi
	Si c="2" Entonces
		s<-"10"
	FinSi
	Si c="3" Entonces
		s<-"11"
	FinSi
	Si c="4" Entonces
		s<-"100"
	FinSi
	Si c="5" Entonces
		s<-"101"
	FinSi
	Si c="6" Entonces
		s<-"110"
	FinSi
	Si c="7" Entonces
		s<-"111"
	FinSi
	Si c="8" Entonces
		s<-"1000"
	FinSi
	Si c="9" Entonces
		s<-"1001"
	FinSi
	Si c="A" Entonces
		s<-"1010"
	FinSi
	Si c="B" Entonces
		s<-"1011"
	FinSi
	Si c="C" Entonces
		s<-"1100"
	FinSi
	Si c="D" Entonces
		s<-"1101"
	FinSi
	Si c="E" Entonces
		s<-"1110"
	FinSi
	Si c="F" Entonces
		s<-"1111"
	FinSi
Fin SubProceso
SubProceso s <-equivalencia1( c )
	Definir s Como Caracter
	Si c="0" Entonces
		s<-"0000"
	FinSi
	Si c="1" Entonces
		s<-"0001"
	FinSi
	Si c="2" Entonces
		s<-"0010"
	FinSi
	Si c="3" Entonces
		s<-"0011"
	FinSi
	Si c="4" Entonces
		s<-"0100"
	FinSi
	Si c="5" Entonces
		s<-"0101"
	FinSi
	Si c="6" Entonces
		s<-"0110"
	FinSi
	Si c="7" Entonces
		s<-"0111"
	FinSi
	Si c="8" Entonces
		s<-"1000"
	FinSi
	Si c="9" Entonces
		s<-"1001"
	FinSi
	Si c="A" Entonces
		s<-"1010"
	FinSi
	Si c="B" Entonces
		s<-"1011"
	FinSi
	Si c="C" Entonces
		s<-"1100"
	FinSi
	Si c="D" Entonces
		s<-"1101"
	FinSi
	Si c="E" Entonces
		s<-"1110"
	FinSi
	Si c="F" Entonces
		s<-"1111"
	FinSi
Fin SubProceso

Proceso hexa_bin
	Definir hexa, bin,t Como Caracter
	Definir c Como Entero
	Leer hexa
	c<-0
	t<-""
	bin<-""
	Para i<-0 Hasta Longitud(hexa)-1 Con Paso 1 Hacer
		c<-c+1
		t<-t+Subcadena(hexa,i,i)
		Imprimir t
		Si c=1 Entonces
			bin<-bin+equivalencia2(t)
		SiNo
			bin<-bin+equivalencia1(t)
		FinSi
		t<-""
	Fin Para
	Escribir bin
FinProceso
