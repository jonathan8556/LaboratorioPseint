Algoritmo PerimetroyAreacirculo
	Definir radio, perimetro, area como real;
    Definir PI como constante real = 3.1416;
    
    Escribir "Ingrese el radio del círculo: ";
    Leer radio;
    
    perimetro = 2 * PI * radio;
    area = PI * (radio ^ 2);
    
    Escribir "El perímetro del círculo es: ", perimetro;
    Escribir "El área del círculo es: ", area;
FinAlgoritmo
