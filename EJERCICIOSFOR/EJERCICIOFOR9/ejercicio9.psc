Proceso Ejercicio9pseint
		Definir f1, c1, f2, c2, i, j, k Como Entero;
		Definir matriz1, matriz2, matrizResultante Como Entero;
		
		Escribir "Ingrese el número de filas de la primera matriz: ";
		Leer f1;
		Escribir "Ingrese el número de columnas de la primera matriz: ";
		Leer c1;
		
				Escribir "Ingrese el número de filas de la segunda matriz: ";
		Leer f2;
		Escribir "Ingrese el número de columnas de la segunda matriz: ";
		Leer c2;
		
		Si c1 <> f2 Entonces
			Escribir "Las dimensiones de las matrices no son compatibles para la multiplicación.";
		Sino
			Para i <- 1 Hasta f1 Con Paso 1 Hacer
				Para j <- 1 Hasta c2 Con Paso 1 Hacer
					matrizResultante <- 0;
				Fin Para
			Fin Para
			
			Para i <- 1 Hasta f1 Con Paso 1 Hacer
				Para j <- 1 Hasta c1 Con Paso 1 Hacer
					Escribir "Ingrese el elemento (", i, ",", j, ") de la primera matriz: ";
					Leer matriz1;
				Fin Para
			Fin Para
			
			Para i <- 1 Hasta f2 Con Paso 1 Hacer
				Para j <- 1 Hasta c2 Con Paso 1 Hacer
					Escribir "Ingrese el elemento (", i, ",", j, ") de la segunda matriz: ";
					Leer matriz2;
				Fin Para
			Fin Para
	
			Para i <- 1 Hasta f1 Con Paso 1 Hacer
				Para j <- 1 Hasta c2 Con Paso 1 Hacer
					Para k <- 1 Hasta c1 Con Paso 1 Hacer
						matrizResultante <- matrizResultante + matriz1 * matriz2;
					Fin Para
				Fin Para
			Fin Para
			
			Escribir "La matriz resultante de la multiplicación es:";
			Para i <- 1 Hasta f1 Con Paso 1 Hacer
				Para j <- 1 Hasta c2 Con Paso 1 Hacer
					Escribir matrizResultante;
				Fin Para
				Escribir "";
			Fin Para
		Fin Si
FinAlgoritmo