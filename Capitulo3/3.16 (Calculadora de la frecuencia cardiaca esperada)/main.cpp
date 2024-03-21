#include <iostream>
#include <string>

class FrecuenciasCardiacas {
private:
    std::string primerNombre;
    std::string apellido;
    int mesNacimiento;
    int diaNacimiento;
    int anoNacimiento;

public:
    // Constructor que recibe los datos de la persona
    FrecuenciasCardiacas(std::string nombre, std::string apellidos, int mes, int dia, int ano) {
        primerNombre = nombre;
        apellido = apellidos;
        mesNacimiento = mes;
        diaNacimiento = dia;
        anoNacimiento = ano;
    }

    // Funciones establecer y obtener para el primer nombre
    void establecerPrimerNombre(std::string nombre) {
        primerNombre = nombre;
    }
    std::string obtenerPrimerNombre() {
        return primerNombre;
    }

    // Funciones establecer y obtener para el apellido
    void establecerApellido(std::string apellidos) {
        apellido = apellidos;
    }
    std::string obtenerApellido() {
        return apellido;
    }

    // Funciones establecer y obtener para el mes de nacimiento
    void establecerMesNacimiento(int mes) {
        mesNacimiento = mes;
    }
    int obtenerMesNacimiento() {
        return mesNacimiento;
    }

    // Funciones establecer y obtener para el d�a de nacimiento
    void establecerDiaNacimiento(int dia) {
        diaNacimiento = dia;
    }
    int obtenerDiaNacimiento() {
        return diaNacimiento;
    }

    // Funciones establecer y obtener para el a�o de nacimiento
    void establecerAnoNacimiento(int ano) {
        anoNacimiento = ano;
    }
    int obtenerAnoNacimiento() {
        return anoNacimiento;
    }

    // Funci�n para obtener la edad de la persona
    int obtenerEdad() {
        // Pedir al usuario la fecha actual
        int mesActual, diaActual, anoActual;
        std::cout << "Ingrese la fecha actual (mes d�a a�o): ";
        std::cin >> mesActual >> diaActual >> anoActual;

        // Calcular la edad
        int edad = anoActual - anoNacimiento;
        if (mesActual < mesNacimiento || (mesActual == mesNacimiento && diaActual < diaNacimiento)) {
            edad--;
        }
        return edad;
    }

    // Funci�n para obtener la frecuencia cardiaca m�xima
    int obtenerFrecuenciaCardiacaMaxima() {
        return 220 - obtenerEdad();
    }

    // Funci�n para obtener la frecuencia cardiaca esperada
    std::pair<int, int> obtenerFrecuenciaCardiacaEsperada() {
        int maximo = obtenerFrecuenciaCardiacaMaxima();
        return std::make_pair(maximo * 0.5, maximo * 0.85);
    }
};

int main() {
    std::string nombre, apellido;
    int mes, dia, ano;

    // Solicitar informaci�n de la persona
    std::cout << "Ingrese el primer nombre: ";
    std::cin >> nombre;
    std::cout << "Ingrese el apellido: ";
    std::cin >> apellido;
    std::cout << "Ingrese el mes de nacimiento: ";
    std::cin >> mes;
    std::cout << "Ingrese el d�a de nacimiento: ";
    std::cin >> dia;
    std::cout << "Ingrese el a�o de nacimiento: ";
    std::cin >> ano;

    // Crear un objeto de la clase FrecuenciasCardiacas
    FrecuenciasCardiacas persona(nombre, apellido, mes, dia, ano);

    // Imprimir la informaci�n de la persona
    std::cout << "\nInformaci�n de la persona:" << std::endl;
    std::cout << "Nombre: " << persona.obtenerPrimerNombre() << " " << persona.obtenerApellido() << std::endl;
    std::cout << "Fecha de nacimiento: " << persona.obtenerMesNacimiento() << "/" << persona.obtenerDiaNacimiento() << "/" << persona.obtenerAnoNacimiento() << std::endl;

    // Calcular e imprimir la edad de la persona
    int edad = persona.obtenerEdad();
    std::cout << "Edad: " << edad << " a�os" << std::endl;

    // Calcular e imprimir la frecuencia cardiaca m�xima de la persona
    int frecuenciaMaxima = persona.obtenerFrecuenciaCardiacaMaxima();
    std::cout << "Frecuencia cardiaca m�xima: " << frecuenciaMaxima << " pulsos por minuto" << std::endl;

    // Calcular e imprimir el rango de frecuencia cardiaca esperada de la persona
    auto rangoEsperado = persona.obtenerFrecuenciaCardiacaEsperada();
    std::cout << "Rango de frecuencia cardiaca esperada: " << rangoEsperado.first << " - " << rangoEsperado.second << " pulsos por minuto" << std::endl;

    return 0;
}
