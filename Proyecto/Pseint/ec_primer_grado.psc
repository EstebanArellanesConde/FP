Algoritmo ec_primer_grado
	Definir a, b, x Como Real
	Leer a, b
	Si a <> 0 Entonces
		x <- -b/a
		Escribir x
	SiNo
		Si b <> 0 Entonces
			Escribir "Soluci�n imposible"
		SiNo
			Escribir "Soluci�n indeterminada"
		FinSi
	FinSi
FinAlgoritmo
