#ifndef DEQUE_H 
#define DEQUE_H

#include <iostream> 

template <typename T> 
class Deque
{
private:
    T* InitialElement; // Puntero al primer elemento del Deque
    int _head; // Índice del primer elemento en el Deque
    int _tail; // Índice del último elemento en el Deque
    int _size; // Tamaño máximo del Deque
    int _currentElements; // Número actual de elementos en el Deque
    bool _isDynamic; // Indica si el Deque es dinámico o no

public:
    Deque(int size, bool Dynamic = true); // Constructor con tamaño y dinamicidad como parámetros
    ~Deque(); // Destructor
    void EnqueueBack(T element); // Agrega un elemento al final del Deque
    void FrontDequeue(); // Elimina el primer elemento del Deque
    void FrontEnqueue(T element); // Agrega un elemento al principio del Deque
    void BackDequeue(); // Elimina el último elemento del Deque
    T Front(); // Devuelve el primer elemento del Deque
    T Back(); // Devuelve el último elemento del Deque
    bool Empty(); // Devuelve verdadero si el Deque está vacío, falso en caso contrario
    bool Full(); // Devuelve verdadero si el Deque está lleno, falso en caso contrario
    void Print(); // Imprime los elementos del Deque en la consola
};

#include "deque.cpp"

#endif



