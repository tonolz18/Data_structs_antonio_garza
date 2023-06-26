#include <iostream>
#include "deque.h"

int main()
{
    Deque<char> deque(5);  // Crea un objeto Deque de tipo char con tamaño 5

    deque.EnqueueBack('a');
    deque.EnqueueBack('b');
    deque.EnqueueBack('c');
    deque.EnqueueBack('d');
    deque.EnqueueBack('e');

    deque.Print();  // Salida: a, b, c, d, e

    deque.BackDequeue();
    deque.Print();  // Salida: e, a, b, c, d

    std::cout << "Front element: " << deque.Front() << '\n';  // Imprime el elemento del frente del deque
    std::cout << "Back element: " << deque.Back() << '\n';  // Imprime el elemento de la parte posterior del deque

    return 0;
}

