Algoritmo PromedioNnumero
	Definir n, suma, promedio, numero como real;
    
    Escribir "Ingrese la cantidad de números: ";
    Leer n;
    
    suma = 0;
    
    Para i = 1 Hasta n;
        Escribir "Ingrese el número ", i, ": ";
        Leer numero;
        suma = suma + numero;
    FinPara;
    
    promedio = suma / n;
    
    Escribir "El promedio de los números es: ", promedio;
FinAlgoritmo
