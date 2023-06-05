#include "array.h"
#include <iostream>

int main() {
    // Obtener el tamaño del arreglo desde la entrada estándar
    int size;
    std::cout << "Ingresa el tamaño del arreglo: ";
    std::cin >> size;

    // Crear una instancia de la clase RawArray
    RawArray myArray(size);

    // Mostrar los elementos del arreglo
    std::cout << "Los elementos del arreglo son: ";
    myArray.Print();

    // Valor a buscar
    int valorBuscado;
    std::cout << "Ingresa el valor a buscar: ";
    std::cin >> valorBuscado;

    // Llamar a la función BuscarValor y mostrar el resultado
    bool encontrado = myArray.BuscarValor(valorBuscado);
    if (encontrado) {
        std::cout << "El valor " << valorBuscado << " ha sido encontrado." << std::endl;
    }
    else {
        std::cout << "El valor " << valorBuscado << " no ha sido encontrado." << std::endl;
    }

    return 0;
}
