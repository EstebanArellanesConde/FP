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
Fin SubProceso
SubProceso s <-equivalencia1( c )
	Definir s Como Caracter
	Si c="0" Entonces
		s<-"000"
	FinSi
	Si c="1" Entonces
		s<-"001"
	FinSi
	Si c="2" Entonces
		s<-"010"
	FinSi
	Si c="3" Entonces
		s<-"011"
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
FinFuncion

Proceso oct_bin
	Definir oct, bin,t Como Caracter
	Definir c Como Entero
	Leer oct
	c<-0
	t<-""
	bin<-""
	Para i<-0 Hasta Longitud(oct)-1 Con Paso 1 Hacer
		c<-c+1
		t<-t+Subcadena(oct,i,i)
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