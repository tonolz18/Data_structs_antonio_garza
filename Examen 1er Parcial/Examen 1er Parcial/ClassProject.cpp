#include <iostream>
#include "Array.h"


// //* [10 puntos] 1er problema
int main() {
    int arraySize = 10;
    // Crea una instancia de RawArray usando memoria dinámica
    RawArray* rawArray = new RawArray(arraySize);

    int v1 = 5;
    int x1 = 2;
    // Asigna el valor 5 a 1 de cada 2 elementos
    rawArray->AssignEveryXElements(v1, x1);
    // Imprime el arreglo resultante: [0, 5, 0, 5, 0, 5, 0, 5, 0, 5]
    rawArray->PrintArray();

    int v2 = 4;
    int x2 = 3;
    // Asigna el valor 4 a 1 de cada 3 elementos
    rawArray->AssignEveryXElements(v2, x2);
    // Imprime el arreglo resultante: [0, 5, 4, 5, 0, 5, 4, 5, 0, 5]
    rawArray->PrintArray();

    // Libera la memoria asignada al objeto RawArray
    delete rawArray;

    return 0;
}




// //* [10 puntos] 2do problema

// int main() {
//     int data[] = {5, 3, 2, 1, 0, 4};
//     int length = sizeof(data) / sizeof(data[0]);
// // Crear un objeto RawArray y pasar el arreglo y su longitud al constructor
//     RawArray myArray(data, length);

//     // Llamar a la función de ordenamiento 
//     myArray.SortFunction();   

// // Obtener el arreglo ordenado mediante el método GetArray()
//     int* sortedArray = myArray.GetArray();   

//     // Mostrar el arreglo ordenado de menor a mayor en la consola
//     std::cout << "Arreglo ordenado de menor a mayor: ";
//     for (int i = 0; i < length; i++) {
//         std::cout << sortedArray[i] << " ";
//     }
//     std::cout << std::endl;

//     // Mostrar el arreglo ordenado de mayor a menor en la consola
//     std::cout << "Arreglo ordenado de mayor a menor: ";
//     for (int i = length - 1; i >= 0; i--) {
//         std::cout << sortedArray[i] << " ";
//     }
//     std::cout << std::endl;

//     return 0;
// }

// //* [10 puntos y 5 puntos extra] tercer y cuarto problema 

// int main() {
//     // Arreglo de ejemplo
//     int array[] = {5, 3, 2, 1, 0, 4}; 
//     // Tamaño del arreglo
//     int size = sizeof(array) / sizeof(array[0]); 

//     // Creación de la instancia de la clase Array
//     RawArray myArray(array, size); 

//     // Llamada al método GetIndexOf
//     int index = myArray.GetIndexOf(1); 
//     std::cout << "Index of 1: " << index << std::endl;

//     index = myArray.GetIndexOf(4);
//     std::cout << "Index of 4: " << index << std::endl;

//     index = myArray.GetIndexOf(5);
//     std::cout << "Index of 5: " << index << std::endl;

//     index = myArray.GetIndexOf(6);
//     std::cout << "Index of 6: " << index << std::endl;

//     int array2[] = {9, 2, 1, 0, 2, 0};
//     size = sizeof(array2) / sizeof(array2[0]);

//     RawArray myArray2(array2, size);

//     index = myArray2.GetIndexOf(2);
//     std::cout << "Index of 2: " << index << std::endl;

//     // Llamada al método GetLastOf
//     index = myArray2.GetLastOf(2); 
//     std::cout << "Last index of 2: " << index << std::endl;

//     return 0;
// }




// //! [10 puntos extra] 5to problema

// int main() {
//     // Crea un objeto RawArray de tamaño 5
//     RawArray myArray = RawArray(5);  
//     // Inicializa todos los elementos con el valor 0
//     myArray.Init(0);  


//     // Crea un objeto RawArray de tamaño 3
//     RawArray toBeInserted = RawArray(3);  
//     // Inicializa todos los elementos con el valor 1
//     toBeInserted.Init(1);  

//     // Índice de inicio para insertar el arreglo toBeInserted en myArray
//     int currentStartIndex = 3;  
//     // Inserta el arreglo toBeInserted en myArray a partir de currentStartIndex
//     myArray.Insert(&toBeInserted, currentStartIndex);  
//     // Imprime los elementos de myArray
//     myArray.Print();  

//     // Valor para buscar en el arreglo
//     int x = 1;  
//     // Obtiene los índices de los elementos con valor x en myArray
//     std::vector<int> indices = myArray.GetIndicesOf(x);  
//     std::cout << "Indices of " << x << ": ";
//     for (int i = 0; i < indices.size(); i++) {
//         std::cout << indices[i] << " ";
//     }
//     std::cout << std::endl;

//  return 0;
// }


// //* [20 puntos] 6ta problema

// int main() {
//     // Crea un objeto RawArray con tamaño 4
//     RawArray myArray(4); 
//     // Inicializa todos los elementos del arreglo con el valor 4
//     myArray.Init(4); 
//     // Crea otro objeto RawArray con tamaño 3
//     RawArray otherArray(3); 
//     // Inicializa todos los elementos del segundo arreglo con el valor 3
//     otherArray.Init(3); 

//     // Agrega los elementos del segundo arreglo al final del primer arreglo
//     myArray.AppendArray(otherArray); 

//     // Imprime los elementos del arreglo resultante
//     myArray.Print(); 

//     return 0;
// }

// // ! [20 puntos] 7mo problema
// int main() {
//     // Crea un objeto RawArray con tamaño 5
//     RawArray myArray(5);

//     // Inicializa todos los elementos del RawArray con valor 0
//     myArray.Init(0);

//     myArray.SetSize(9);
//     // Imprime los elementos del RawArray
//     myArray.Print();  

//     myArray.SetSize(3);
//     // Imprime los elementos del RawArray
//     myArray.Print(); 

//     myArray.SetSize(5);
//     // Imprime los elementos del RawArray
//     myArray.Print();

//     return 0;
// }


// //* [30 puntos] 8va problema

// int main() {
//     // Crear un objeto RawArray con tamaño 5
//     RawArray myArray = RawArray(5);  
//     // Inicializar el arreglo con ceros
//     myArray.Init(0);                

//     // Crear un objeto RawArray con tamaño 3
//     RawArray toBeInserted = RawArray(3);  
//     // Inicializar el arreglo con unos
//     toBeInserted.Init(1);                 

//     int currentStartIndex = 3;
//     // Insertar el arreglo toBeInserted en myArray en el índice dado
//     myArray.Insert(toBeInserted, currentStartIndex); 
//     // Imprimir el contenido de myArray 
//     myArray.Print();                                  

//     // Crear un objeto RawArray con tamaño 2
//     RawArray arrayToAppend = RawArray(2); 
//     // Inicializar el arreglo con doses 
//     arrayToAppend.Init(2);                 

//     // Anexar el arreglo arrayToAppend al final de myArray
//     myArray.AppendArray(arrayToAppend);  
//     // Imprimir el contenido de myArray  
//     myArray.Print();                       

//     return 0;
// }

//* [10 puntos extra] 9na pregunta

// int main() {
//     RawArray arrayA(3);
//     arrayA.Init(3);

//     RawArray arrayB(3);
//     arrayB.Init(2);

//     RawArray result = arrayB.SumArrays(arrayA);
//     result.Print();  // Imprime [5, 5, 5]


//     arrayB.AppendArray(arrayA);
//     arrayB.Print();  // Imprime [2, 2, 2, 3, 3, 3]

//     return 0;
// }

