#include <iostream>

class Cuenta {
private:
    int saldo;

public:
    // Constructor que recibe un saldo inicial y lo inicializa
    Cuenta(int saldoInicial) {
        if (saldoInicial >= 0) {
            saldo = saldoInicial;
        } else {
            saldo = 0;
            std::cout << "Error: El saldo inicial es inválido. Se estableció en 0." << std::endl;
        }
    }

    // Función para abonar un monto al saldo
    void abonar(int monto) {
        saldo += monto;
    }

    // Función para cargar un monto del saldo
    void cargar(int monto) {
        if (monto > saldo) {
            std::cout << "El monto a cargar excede el saldo de la cuenta." << std::endl;
        } else {
            saldo -= monto;
        }
    }

    // Función para obtener el saldo actual
    int obtenerSaldo() {
        return saldo;
    }
};

int main() {
    // Crear dos objetos Cuenta con saldos iniciales
    Cuenta cuenta1(1000);
    Cuenta cuenta2(500);

    // Evaluar las funciones miembro de la clase Cuenta
    cuenta1.abonar(500);
    cuenta2.cargar(200);

    std::cout << "Saldo de cuenta1: $" << cuenta1.obtenerSaldo() << std::endl;
    std::cout << "Saldo de cuenta2: $" << cuenta2.obtenerSaldo() << std::endl;

    return 0;
}
