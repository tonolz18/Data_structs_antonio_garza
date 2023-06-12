#include "Array.h"
#include <iostream>
#include <algorithm>



// //* [10 puntos] 1er problema

RawArray::RawArray(int size) {
    this->size = size;
    // Establece el tamaño del vector
    data.resize(size);
}

RawArray::~RawArray() {
}

void RawArray::AssignEveryXElements(int v, int x) {
    for (int i = 0; i < size; i++) {
        if ((i + 1) % x == 0) {
            // Asigna el valor 'v' a los elementos en las posiciones múltiplos de 'x'
            data[i] = v;
        }
    }
}

void RawArray::PrintArray() {
    for (int i = 0; i < size; i++) {
        // Imprime el contenido del vector
        std::cout << data[i] << " ";
    }
    std::cout << std::endl;
}


// //* [10 puntos] segundo problema

// RawArray::RawArray(int* data, int length) {
//     size = length;
//     // Asignar memoria dinámica al arreglo
//     arr = new int[size];   

//     // Copiar los elementos del arreglo proporcionado al arreglo dinámico
//     std::copy(data, data + size, arr);
// }

// RawArray::~RawArray() {
//     // Liberar la memoria asignada al arreglo
//     delete[] arr;   
// }

// void RawArray::SortFunction() {
//      // Utilizar std::sort() para ordenar los elementos del arreglo
//     std::sort(arr, arr + size);  
// }

// int* RawArray::GetArray() {
//     // Devolver el puntero al arreglo
//     return arr;   
// }

// * [10 puntos y 5 puntos extra] tercer y cuarto problema 

// RawArray::RawArray(int* array, int size) {
//     this->size = size;
//     // Creación del arreglo dinámico
//     rawArray = new int[size]; 
//     for (int i = 0; i < size; i++) {
//     // Copia de los elementos al arreglo dinámico
//         rawArray[i] = array[i]; 
//     }
// }

// RawArray::~RawArray() {
//     // Liberación de la memoria asignada para el arreglo
//     delete[] rawArray; 
// }

// int RawArray::GetIndexOf(int x) {
//     for (int i = 0; i < size; i++) {
//         if (rawArray[i] == x) {
//             // Si encuentra el elemento, devuelve su índice
//             return i; 
//         }
//     }
//     // Si no encuentra el elemento, devuelve -1
//     return -1; 
// }

// int RawArray::GetLastOf(int x) {
//     for (int i = size - 1; i >= 0; i--) {
//         if (rawArray[i] == x) {
//             // Si encuentra el elemento, devuelve su último índice
//             return i; 
//         }
//     }
//     // Si no encuentra el elemento, devuelve -1
//     return -1; 
// }


// //! [10 puntos extra] 5to problema
// RawArray::RawArray(int size) {
//     this->size = size;
//     // Redimensiona el vector data para que tenga el tamaño especificado
//     data.resize(size);  
// }

// RawArray::~RawArray() {}

// void RawArray::Init(int value) {
//     for (int i = 0; i < size; i++) {
//     // Inicializa todos los elementos del arreglo con el valor dado
//         data[i] = value;  
//     }
// }

// void RawArray::Insert(RawArray* arrayToInsert, int startIndex) {
//     if (arrayToInsert == nullptr) {
//     // Si el arreglo a insertar es nulo, no se realiza ninguna operación
//         return;  
//     }

//     if (startIndex < 0 || startIndex >= size) {
//     // Si el índice de inicio está fuera de los límites del arreglo actual, no se realiza ninguna operación
//         return;  
//     }

//     if (size - startIndex < arrayToInsert->size) {
//     // Si no hay suficiente espacio en el arreglo actual para insertar el arreglo a insertar, no se realiza ninguna operación
//         return;  
//     }

//     for (int i = 0; i < arrayToInsert->size; i++) {
//     // Inserta los elementos del arreglo a insertar en el arreglo actual a partir del índice de inicio dado
//         data[startIndex + i] = arrayToInsert->data[i];  
//     }
// }

// void RawArray::Print() {
//     for (int i = 0; i < size; i++) {
//     // Imprime los elementos del arreglo
//         std::cout << data[i] << " ";  
//     }
//     std::cout << std::endl;
// }

// std::vector<int> RawArray::GetIndicesOf(int x) {
//     std::vector<int> indices;
//     for (int i = 0; i < size; i++) {
//         if (data[i] == x) {
//     // Agrega el índice al vector si el elemento en esa posición es igual a x
//             indices.push_back(i);  
//         }
//     }
//     if (indices.empty()) {
//     // Si no se encontraron elementos con valor x, se agrega -1 al vector
//         indices.push_back(-1); 
//     }
//     // Devuelve el vector de índices
//     return indices;
// }



// //* [20 puntos] 6to problema

// RawArray::RawArray(int size) {
//     this->size = size;
//     // Asigna memoria dinámicamente para almacenar los elementos del arreglo
//     elements = new int[size]; 
// }

// RawArray::~RawArray() {
//     // Libera la memoria asignada para los elementos del arreglo
//     delete[] elements; 
// }

// void RawArray::Init(int value) {
//     for (int i = 0; i < size; i++) {
//     // Inicializa cada elemento del arreglo con el valor dado
//         elements[i] = value; 
//     }
// }

// void RawArray::AppendArray(const RawArray& arrayToAppend) {
//     // Calcula el nuevo tamaño del arreglo
//     int newSize = size + arrayToAppend.size; 
//     // Crea un nuevo arreglo con el nuevo tamaño
//     int* newArray = new int[newSize]; 

//     // Copia los elementos del arreglo original al nuevo arreglo
//     for (int i = 0; i < size; i++) {
//         newArray[i] = elements[i];
//     }

//     // Agrega los elementos del arreglo a añadir al final del nuevo arreglo
//     for (int i = 0; i < arrayToAppend.size; i++) {
//         newArray[size + i] = arrayToAppend.elements[i];
//     }
//     // Libera la memoria del arreglo original
//     delete[] elements; 
//     // Actualiza el puntero para apuntar al nuevo arreglo
//     elements = newArray; 
//     // Actualiza el tamaño del arreglo
//     size = newSize; 
// }

// void RawArray::Print() const {
//     std::cout << "[";

//     // Imprime los elementos del arreglo separados por comas
//     for (int i = 0; i < size; i++) {
//         std::cout << elements[i];
//         if (i < size - 1) {
//             std::cout << ", ";
//         }
//     }

//     std::cout << "]" << std::endl;
// }

// // ! [20 puntos] 7mo problema

// RawArray::RawArray(int size) {
//     // Inicializa el tamaño del RawArray usando resize de la clase vector
//     data.resize(size);
// }

// void RawArray::Init(int value) {
//     for (int i = 0; i < data.size(); i++) {
//         // Asigna el valor dado a cada elemento del RawArray
//         data[i] = value;
//     }
// }

// void RawArray::SetSize(int newSize) {
//     if (newSize > data.size()) {
//         // Redimensiona el RawArray aumentando su tamaño
//         data.resize(newSize);
//     } else if (newSize < data.size()) {
//         // Redimensiona el RawArray reduciendo su tamaño
//         data.resize(newSize);
//     }
// }

// void RawArray::Print() {
//     std::cout << "[";
//     for (int i = 0; i < data.size(); i++) {
//         if (i != 0) {
//             std::cout << ", ";
//         }
//         // Imprime cada elemento del RawArray
//         std::cout << data[i];
//     }
//     std::cout << "]" << std::endl;
// }

// //* [30 puntos] 8vo problema

// RawArray::RawArray(int size) {

//     this->size = size;
//     // Crear un nuevo arreglo dinámico de tamaño "size"
//     data = new int[size];  
// }

// RawArray::~RawArray() {
//     delete[] data;  // Liberar la memoria del arreglo dinámico
// }

// void RawArray::Init(int value) {
//     for (int i = 0; i < size; i++) {
//         // Inicializar todos los elementos del arreglo con "value"
//         data[i] = value;  
//     }
// }

// void RawArray::Insert(const RawArray& arrayToInsert, int startIndex) {
//     // Calcular el nuevo tamaño del arreglo
//     int newSize = size + arrayToInsert.size; 
//     // Crear un nuevo arreglo dinámico con el nuevo tamaño   
//     int* newData = new int[newSize];            

//     // Copiar los elementos antes del índice de inicio
//     for (int i = 0; i < startIndex; i++) {
//         newData[i] = data[i];
//     }

//     // Copiar los elementos a insertar
//     for (int i = 0; i < arrayToInsert.size; i++) {
//         newData[startIndex + i] = arrayToInsert.data[i];
//     }

//     // Copiar los elementos después del índice de inicio
//     for (int i = startIndex; i < size; i++) {
//         newData[i + arrayToInsert.size] = data[i];
//     }

//     // Liberar la memoria del arreglo original
//     delete[] data;  
//     // Actualizar el puntero de datos para apuntar al nuevo arreglo   
//     data = newData; 
//     // Actualizar el tamaño del arreglo   
//     size = newSize;    
// }

// void RawArray::AppendArray(RawArray& arrayToAppend) {
//     // Calcular el nuevo tamaño del arreglo
//     int newSize = size + arrayToAppend.size; 
//     // Crear un nuevo arreglo dinámico con el nuevo tamaño   
//     int* newData = new int[newSize];            

//     // Copiar los elementos del arreglo original
//     for (int i = 0; i < size; i++) {
//         newData[i] = data[i];
//     }

//     // Copiar los elementos del arreglo a anexar
//     for (int i = 0; i < arrayToAppend.size; i++) {
//         newData[size + i] = arrayToAppend.data[i];
//     }

//     // Liberar la memoria del arreglo original
//     delete[] data;
//     // Actualizar el puntero de datos para apuntar al nuevo arreglo     
//     data = newData; 
//     // Actualizar el tamaño del arreglo   
//     size = newSize;    
// }

// void RawArray::Print() {
//     std::cout << "[";

//     // Imprimir cada elemento del arreglo
//     for (int i = 0; i < size; i++) {
//         std::cout << data[i];
//         if (i != size - 1) {
//             std::cout << ", ";
//         }
//     }

//     std::cout << "]\n";
// }


// //* [10 puntos extra] 9no problema

//     // Constructor
// RawArray::RawArray(int size) : size(size) {
//     // Asignar memoria dinámica para almacenar los elementos
//     data = new int[size];  
// }

// // Inicializar el arreglo con un valor específico
// void RawArray::Init(int value) {
//     for (int i = 0; i < size; i++) {
//         data[i] = value;
//     }
// }

// // Sumar los elementos de este RawArray con otro RawArray y retornar el resultado
// RawArray RawArray::SumArrays(const RawArray& array) const {
//     RawArray result(size);  // Crear un nuevo RawArray para almacenar el resultado

//     for (int i = 0; i < size; i++) {
//          // Sumar elemento por elemento
//         result.data[i] = data[i] + array.data[i]; 
//     }

//     return result;
// }

// // Agregar los elementos de otro RawArray al final de este RawArray
// void RawArray::AppendArray(RawArray& arrayToAppend) {
//     // Calcular el nuevo tamaño del arreglo
//     int newSize = size + arrayToAppend.size; 
//     // Crear un nuevo arreglo con el nuevo tamaño 
//     int* newData = new int[newSize];          

//     // Copiar los elementos existentes de este RawArray al nuevo arreglo
//     for (int i = 0; i < size; i++) {
//         newData[i] = data[i];
//     }

//     // Agregar los elementos del otro RawArray al final del nuevo arreglo
//     for (int i = size, j = 0; i < newSize; i++, j++) {
//         newData[i] = arrayToAppend.data[j];
//     }

//     // Liberar la memoria del arreglo original
//     delete[] data;  
//     // Actualizar el puntero para apuntar al nuevo arreglo
//     data = newData; 
//     // Actualizar el tamaño del arreglo
//     size = newSize; 
// }

// // Imprimir el contenido del RawArray
// void RawArray::Print() const {
//     std::cout << "[";

//     for (int i = 0; i < size; i++) {
//         std::cout << data[i];

//         if (i != size - 1) {
//             std::cout << ", ";
//         }
//     }

//     std::cout << "]" << std::endl;
// }

//     // Destructor
// RawArray::~RawArray() {
//     // Liberar la memoria asignada dinámicamente al destruir el objeto
//     delete[] data;  
// }