Algoritmo ec_segundo_grado
	Definir a, b, c como Real
	Definir x1, x2, r, i como Real
	Leer a, b, c
	Si a=0 Entonces
		Escribir "No es ecuación de segundo grado"
	SiNo
		d <- b*b-4*a*c
		Si d>0 Entonces
			x1 <- (-b+raiz(d))/(2*a)
			x2 <- (-b-raiz(d))/(2*a)
			Escribir x1, x2
		SiNo
			Si d=0 Entonces
				x1 <- -b/(2*a)
				x2 <- x1
				Escribir x1, x2
			SiNo
				r <- (-b)/(2*a)
				i <- raiz(abs(d))/(2*a)
				Escribir "x1=",r,"+",i
				Escribir "x2=",r,"-",i
			FinSi
		FinSi
	FinSi
FinAlgoritmo
