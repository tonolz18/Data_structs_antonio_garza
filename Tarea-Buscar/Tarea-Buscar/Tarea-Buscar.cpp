// Tarea-Buscar.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

// Búsqueda
// Es decir, iterar en los N elementos del RawArray en busca de un valor X, si algúno de los elementos es igual a X, retornar verdadero, si no, retornar falso.

#include <iostream>

bool buscarValor(int* rawArray, int N, int X) {
    // Iterar a través de los N elementos del RawArray
    for (int i = 0; i < N; i++) {

        // Comprobar si el elemento actual es igual al valor buscado (X)
        if (rawArray[i] == X) {
            // Si hay una coincidencia, retornar verdadero
            return true;
        }
    }
    // Si no se encuentra ninguna coincidencia, retornar falso
    return false;
}

int main()
{
    int N;
    std::cout << "Ingrese el tamaño del RawArray: ";

    // Solicitar al usuario ingresar el tamaño del RawArray
    std::cin >> N;

    // Asignar memoria dinámica para el RawArray con tamaño N
    int* rawArray = new int[N];

    std::cout << "Ingrese los " << N << " elementos del RawArray: ";
    for (int i = 0; i < N; i++) {

        // Solicitar al usuario ingresar los N elementos del RawArray uno por uno
        std::cin >> rawArray[i];
    }

    int X;
    std::cout << "Ingrese el valor a buscar: ";

    // Solicitar al usuario ingresar el valor a buscar
    std::cin >> X;

    // Llamar a la función buscarValor
    bool encontrado = buscarValor(rawArray, N, X);

    if (encontrado) {
        std::cout << "El valor " << X << " se encuentra en el RawArray." << std::endl;
    }
    else {
        std::cout << "El valor " << X << " no se encuentra en el RawArray." << std::endl;
    }

    // Liberar la memoria asignada para el RawArray
    delete[] rawArray;

    return 0;

}