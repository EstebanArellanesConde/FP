Proceso Dec_Hexa
	Definir num, residuo, size,i Como Entero
	Definir hexa, t como Caracter
	Escribir "Dame tu numero decimal"
	Leer num
	t <- ""
	Repetir
		Escribir t
		residuo <- num mod 16
		num <- trunc(num/16) //residuo entra a la estructura swich
		Segun residuo Hacer
			0:
				t <- t+"0" //t es una cadena temporal ya que esta al reves 
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
			8:
				t <- t+"8"
			9:
				t <- t+"9"
			10:
				t <- t+"A"
			11:
				t <- t+"B"
			12:
				t <- t+"C"
			13:
				t <- t+"D"
			14:
				t <- t+"E"
			15:
				t <- t+"F"
			De Otro Modo:
				Escribir "Error" //no sabia que poner xd
		Fin Segun
	Hasta Que num ==0
	Escribir t
	size <- Longitud(t)
	Para i<- size Hasta 0 Con Paso  -1 Hacer //Aqui revertimos la cadena hexa
		hexa <- hexa + Subcadena(t, i, i)
	FinPara//
	Escribir "La equivalencia es " + hexa
FinProceso
