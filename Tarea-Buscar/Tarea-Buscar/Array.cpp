#include "array.h"
#include <iostream>

// Constructor
RawArray::RawArray(int size) {
    this->size = size;
    rawArray = new int[size];

    Init();
}

// Destructor
RawArray::~RawArray() {
    delete[] rawArray;
}

// Función para buscar un valor en el RawArray
bool RawArray::BuscarValor(int valorX) const {
    for (int i = 0; i < size; i++) {
        if (rawArray[i] == valorX) {
            return true;
        }
    }

    return false;
}

// Otras funciones miembro
void RawArray::Init() {
    std::cout << "Ingresa los valores del arreglo:" << std::endl;
    for (int i = 0; i < size; i++) {
        std::cin >> rawArray[i];
    }
}

void RawArray::Print() const {
    for (int i = 0; i < size; i++) {
        std::cout << rawArray[i] << " ";
    }
    std::cout << std::endl;
}