SubProceso a <- equivalencia ( t )
	Definir a Como Caracter
	Si t="0000" Entonces
		a<-"0"
	FinSi
	Si t="0001" Entonces
		a<-"1"
	FinSi
	Si t="0010" Entonces
		a<-"2"
	FinSi
	Si t="0011" Entonces
		a<-"3"
	FinSi
	Si t="0100" Entonces
		a<-"4"
	FinSi
	Si t="0101" Entonces
		a<-"5"
	FinSi
	Si t="0110" Entonces
		a<-"6"
	FinSi
	Si t="0111" Entonces
		a<-"7"
	FinSi
	Si t="1000" Entonces
		a<-"8"
	FinSi
	Si t="1001" Entonces
		a<-"9"
	FinSi
	Si t="1010" Entonces
		a<-"A"
	FinSi
	Si t="1011" Entonces
		a<-"B"
	FinSi
	Si t="1100" Entonces
		a<-"C"
	FinSi
	Si t="1101" Entonces
		a<-"D"
	FinSi
	Si t="1110" Entonces
		a<-"E"
	FinSi
	Si t="1111" Entonces
		a<-"F"
	FinSi
Fin SubProceso
Proceso bin_hexa
	Definir bin, hexa,t Como Caracter
	Definir p Como Entero
	Leer bin
	t<-""
	p<-0
	Si Longitud(bin) mod 4=3 Entonces
		bin<-concatenar("0",bin)
	FinSi
	Si Longitud(bin) mod 4=2 Entonces
		bbin<-concatenar( "00",bin)
	FinSi
	Si Longitud(bin) mod 4=1 Entonces
		bin<-concatenar("000",bin)
	FinSi
	Escribir bin
	Para i<-0 Hasta Longitud(bin)-1 Con Paso 1 Hacer
		t<-t+Subcadena(bin,i,i)
		p=p+1
		Escribir t
		Si p=4 Entonces
			hexa<-hexa+equivalencia(t)
			p<-0
			t<-""
		FinSi
		
	Fin Para
	Escribir hexa
FinProceso
