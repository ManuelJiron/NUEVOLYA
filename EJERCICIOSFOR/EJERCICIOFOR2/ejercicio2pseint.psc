Proceso ejercicio_2
	//Desarrollar un programa que imprima los números impares en orden descendente que hay entre 1 y 100.
	Definir numeroImpar Como Entero;
	numeroImpar <- 100;
	Mientras numeroImpar >= 1 Hacer//usamos el bucle mientras que seguira ejecutando cuando el valor sea mayor o igual a 
		Si numeroImpar %2 <> 0 Entonces//aqui si el numero impar dividido por 2 queda en un residuo diferente a 0 entonces es impar pero, si el residuo queda en 0 entonces es par
			Escribir numeroImpar;
		FinSi
		numeroImpar <- numeroImpar - 1;
	FinMientras
FinProceso
