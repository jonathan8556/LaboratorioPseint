Algoritmo PromedioNnumero
	Definir n, suma, promedio, numero como real;
    
    Escribir "Ingrese la cantidad de n�meros: ";
    Leer n;
    
    suma = 0;
    
    Para i = 1 Hasta n;
        Escribir "Ingrese el n�mero ", i, ": ";
        Leer numero;
        suma = suma + numero;
    FinPara;
    
    promedio = suma / n;
    
    Escribir "El promedio de los n�meros es: ", promedio;
FinAlgoritmo
