Algoritmo cuatro_digitos
	Mientras n<1000 & n>9999 Hacer
		Si n>=1000 | n<=9999 Entonces
			Escribir "Ingresar un número: "
			Leer numero
		FinSi
	FinMientras
	var1 <- ((numero/1000)-%(numero/1000))
	numero <- (%(numero/1000))
	Escribir var1
	var2 <- ((numero/100)-%(numero/100))
	numero <- (%(numero/100)
	Escribir var2
	var3 <- ((numero/10)-%(numero/10))
	numero <- (%(numero/10))
	Escribir var3
	Escribir numero
FinAlgoritmo
