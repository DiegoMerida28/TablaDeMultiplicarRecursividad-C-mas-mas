#include <iostream>

void tablaMultiplicarRecursiva(int numero, int multiplicador, int limite) {
    if (multiplicador > limite) {
        return;
    }

    std::cout << numero << " x " << multiplicador << " = " << numero * multiplicador << std::endl;

    tablaMultiplicarRecursiva(numero, multiplicador + 1, limite);
}

int main() {
    int numero, limite;

    std::cout << "Ingrese el número para la tabla de multiplicar: ";
    std::cin >> numero;

    std::cout << "Ingrese el límite para la tabla de multiplicar: ";
    std::cin >> limite;

    tablaMultiplicarRecursiva(numero, 1, limite);

    return 0;
}