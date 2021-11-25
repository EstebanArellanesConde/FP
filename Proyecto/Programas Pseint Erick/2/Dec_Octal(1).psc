Proceso Dec_Octal
	Definir num, residuo, size,i Como Entero
	Definir octal, t como Caracter
	Escribir "Dame tu numero decimal"
	Leer num
	t <- ""
	Repetir
		Escribir t
		residuo <- num mod 8
		num <- trunc(num/8)
		Segun residuo Hacer
			0:
				t <- t+"0"
			1:
				t <- t+"1"
			2:
				t <- t+"2"
			3:
				t <- t+"3"
			4:
				t <- t+"4"
			5:
				t <- t+"5"
			6:
				t <- t+"6"
			7:
				t <- t+"7"
			De Otro Modo:
				Escribir "Error"
		Fin Segun
	Hasta Que num ==0
	Escribir "octal invertido vale ",t
	size <- Longitud(t)
	Para i<- size-1 Hasta 0 Con Paso  -1 Hacer
		octal <- octal + Subcadena(t, i, i)
	FinPara
	Escribir "La equivalencia es " + octal
	FinProceso
