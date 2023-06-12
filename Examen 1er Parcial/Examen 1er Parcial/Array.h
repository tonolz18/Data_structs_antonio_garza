#ifndef ARRAY_H
#define ARRAY_H

#include <vector>

//* [10 puntos] 1er problema

class RawArray {
private:
    // Vector para almacenar los elementos del arreglo
    std::vector<int> data;
    // Tamaño del arreglo
    int size;
public:
    // Constructor que inicializa el vector con el tamaño dado
    RawArray(int size);
    ~RawArray(); // Destructor

    // Asigna el valor 'v' a 1 de cada 'x' elementos del vector
    void AssignEveryXElements(int v, int x);
    // Imprime el contenido del vector
    void PrintArray();
};



//* [10 puntos]segundo problema

// class RawArray {
// private:
//      // Puntero al array
//     int* arr;   
//     // Tamaño del array
//     int size;   

// public:
//     // Constructor
//     RawArray(int* data, int length);  
//      // Destructor
//     ~RawArray();    
//     // Función de ordenamiento                  
//     void SortFunction();  
//      // Método para obtener el arreglo             
//     int* GetArray();                  
// };




 //* [10 puntos y 5 puntos extra] tercer y cuarto problema 


// class RawArray {
// private:
// // Puntero al arreglo dinámico
//     int* rawArray; 
//     // Tamaño del arreglo
//     int size;     

// public:
//     // Constructor
//     RawArray(int* array, int size); 
//     // Destructor
//     ~RawArray();                    
//     // Método para obtener el índice de un elemento
//     int GetIndexOf(int x);
//     // Método para obtener el último índice de un elemento       
//     int GetLastOf(int x);        
// };



// ! [10 puntos extra] 5to problema
// class RawArray {
// private:

//     // Vector para almacenar los elementos del arreglo
//     std::vector<int> data;  
//     // Tamaño del arreglo
//     int size;  

// public:
//     // Constructor que recibe el tamaño del arreglo
//     RawArray(int size);  
//     // Destructor
//     ~RawArray();  


//     //Inicializa todos los elementos del arreglo con el valor dado
//     void Init(int value);  
//     // Inserta otro arreglo en el arreglo actual a partir de un índice dado
//     void Insert(RawArray* arrayToInsert, int startIndex);  
//     // Imprime los elementos del arreglo
//     void Print();  
//     // Devuelve un vector con los índices de los elementos con valor x
//     std::vector<int> GetIndicesOf(int x);  
//     // Suma elemento por elemento los elementos del arreglo actual con otro arreglo
//     RawArray AddArrays(const RawArray& other);
// };





// //* [20 puntos] 6to problema

// class RawArray {
// private:
//     // Puntero para almacenar los elementos del arreglo
//     int* elements; 
//     // Tamaño del arreglo
//     int size; 
// public:
//     RawArray(int size); // Constructor
//     ~RawArray(); // Destructor
//     // Inicializa todos los elementos del arreglo con un valor dado
//     void Init(int value); 
//     // Agrega los elementos de otro arreglo al final de este arreglo
//     void AppendArray(const RawArray& arrayToAppend); 
//     // Imprime los elementos del arreglo
//     void Print() const; 
// };



//! [20 puntos] 7mo problema 

// class RawArray {
// private:
//     std::vector<int> data;

// public:
//     // Constructor que inicializa el tamaño del RawArray
//     RawArray(int size);

//     // Inicializa todos los elementos del RawArray con el valor dado
//     void Init(int value);

//     // Modifica el tamaño del RawArray
//     void SetSize(int newSize);

//     // Imprime los elementos del RawArray
//     void Print();
// };




 //* [30 puntos] 8vo problema

// class RawArray {
// private:
// // Puntero al arreglo dinámico
//     int* data;  
//     // Tamaño del arreglo
//     int size;   

// public:
//     // Constructor
//     RawArray(int size);    
//     // Destructor
//     ~RawArray();           

//     // Inicializar el arreglo con un valor dado
//     void Init(int value);   

//     // Insertar elementos en el arreglo                     
//     void Insert(const RawArray& arrayToInsert, int startIndex);

//     // Anexar elementos al final del arreglo  
//     void AppendArray(RawArray& arrayToAppend);

//     // Imprimir el contenido del arreglo     
//     void Print();                                  
// };



//* [ 10 puntos extra] 9no problema

// class RawArray {
// public:
//     // Constructor
//     RawArray(int size);

//     // Inicializar el arreglo con un valor específico
//     void Init(int value);

//     // Sumar los elementos de este RawArray con otro RawArray y retornar el resultado
//     RawArray SumArrays(const RawArray& array) const;

//     // Agregar los elementos de otro RawArray al final de este RawArray
//     void AppendArray(RawArray& arrayToAppend);

//     // Imprimir el contenido del RawArray
//     void Print() const;

//     // Destructor
//     ~RawArray();

// private:
//     // Puntero para almacenar los elementos del arreglo
//     int* data;  
//     // Tamaño del arreglo
//     int size;   
// };





#endif 
