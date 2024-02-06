Algoritmo SumaPositivaNegativaCero
    Definir a, b, suma como entero;
    
    Escribir "Ingrese el valor de a: ";
    Leer a;
    
    Escribir "Ingrese el valor de b: ";
    Leer b;
    
    suma <- a + b;
    
    Si suma > 0 Entonces;
        Escribir "La suma de a y b es positiva.";
    Sino ;
        Si suma < 0 Entonces;
            Escribir "La suma de a y b es negativa.";
        Sino;
            Escribir "La suma de a y b es cero.";
        FinSi;
    FinSi;
FinAlgoritmo
