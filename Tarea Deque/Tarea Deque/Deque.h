#ifndef DEQUE_H
#define DEQUE_H

template <class T>
class Deque {
private:
    T deque[MAX_SIZE]; // Arreglo para almacenar los elementos del deque
    int head; // �ndice de la cabeza del deque
    int tail; // �ndice de la cola del deque

public:
    Deque(); // Constructor de la clase Deque
    bool isFull(); // Comprobar si el deque est� lleno
    bool isEmpty(); // Comprobar si el deque est� vac�o
    void FrontEnqueue(T element); // Insertar un elemento en la cabeza del deque
    void BackDequeue(); // Eliminar un elemento de la cola del deque
    T Front(); // Obtener el elemento en la cabeza del deque
    T Back(); // Obtener el elemento en la cola del deque
    void Print(); // Imprimir los elementos del deque
};

#endif

