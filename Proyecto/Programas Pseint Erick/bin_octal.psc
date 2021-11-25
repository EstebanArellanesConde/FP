SubProceso oct <- conver_bin_oct ( t )
	Definir oct Como Caracter
	Si t="000" Entonces
		oct<-"0"
	FinSi
	Si t="001" Entonces
		oct<-"1"
	FinSi
	Si t="010" Entonces
		oct<-"2"
	FinSi
	Si t="011" Entonces
		oct<-"3"
	FinSi
	Si t="100" Entonces
		oct<-"4"
	FinSi
	Si t="101" Entonces
		oct<-"5"
	FinSi
	Si t="110" Entonces
		oct<-"6"
	FinSi
	Si t="111" Entonces
		oct<-"7"
	FinSi
Fin SubProceso

Proceso bin_octal
	Definir p Como Entero
	Definir bin, otctal,t Como Caracter
	Escribir "Dame tu binario"
	Leer bin
	t<-""
	Si Longitud(bin) mod 3=2 Entonces
	bin<-concatenar( "0",bin)
	FinSi
	Si Longitud(bin) mod 3=1 Entonces
		bin<-concatenar("00", bin)
	FinSi
	Escribir bin
	p<-0
	Para i<-0 Hasta Longitud(bin)-1 Con Paso 1 Hacer
		t<-t+Subcadena(bin,i,i)
		p=p+1
		Escribir t
		Si p=3 Entonces
			octal<-octal+conver_bin_oct(t)
			p<-0
			t<-""
		FinSi
	Fin Para
	Escribir octal
FinProceso
