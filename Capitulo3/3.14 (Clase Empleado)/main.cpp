#include <iostream>
#include <string>

class Empleado {
private:
    std::string primerNombre;
    std::string apellidoPaterno;
    int salarioMensual;

public:
    // Constructor
    Empleado(std::string nombre, std::string apellido, int salario) {
        primerNombre = nombre;
        apellidoPaterno = apellido;
        salarioMensual = (salario > 0) ? salario : 0;
    }

    // Funciones establecer y obtener para el primer nombre
    void establecerPrimerNombre(std::string nombre) {
        primerNombre = nombre;
    }
    std::string obtenerPrimerNombre() {
        return primerNombre;
    }

    // Funciones establecer y obtener para el apellido paterno
    void establecerApellidoPaterno(std::string apellido) {
        apellidoPaterno = apellido;
    }
    std::string obtenerApellidoPaterno() {
        return apellidoPaterno;
    }

    // Funciones establecer y obtener para el salario mensual
    void establecerSalarioMensual(int salario) {
        salarioMensual = (salario > 0) ? salario : 0;
    }
    int obtenerSalarioMensual() {
        return salarioMensual;
    }

    // Función para obtener el salario anual
    int obtenerSalarioAnual() {
        return salarioMensual * 12;
    }

    // Función para aplicar un aumento del 10% al salario mensual
    void aplicarAumento() {
        salarioMensual *= 1.1; // Aumento del 10%
    }
};

int main() {
    // Crear dos objetos Empleado
    Empleado empleado1("Jonathan", "Gonzalez", 3000);
    Empleado empleado2("Mariana", "Lopez", 4000);

    // Mostrar el salario anual de cada empleado
    std::cout << "Salario anual de " << empleado1.obtenerPrimerNombre() << " " << empleado1.obtenerApellidoPaterno() << ": $" << empleado1.obtenerSalarioAnual() << std::endl;
    std::cout << "Salario anual de " << empleado2.obtenerPrimerNombre() << " " << empleado2.obtenerApellidoPaterno() << ": $" << empleado2.obtenerSalarioAnual() << std::endl;

    // Aplicar un aumento del 10% al salario mensual de cada empleado
    empleado1.aplicarAumento();
    empleado2.aplicarAumento();

    // Mostrar el salario anual actualizado de cada empleado
    std::cout << "Salario anual actualizado de " << empleado1.obtenerPrimerNombre() << " " << empleado1.obtenerApellidoPaterno() << ": $" << empleado1.obtenerSalarioAnual() << std::endl;
    std::cout << "Salario anual actualizado de " << empleado2.obtenerPrimerNombre() << " " << empleado2.obtenerApellidoPaterno() << ": $" << empleado2.obtenerSalarioAnual() << std::endl;

    return 0;
}

