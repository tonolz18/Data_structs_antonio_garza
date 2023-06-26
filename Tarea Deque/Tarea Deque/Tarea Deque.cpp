#include <iostream>

template <typename T>
class Deque
{
private:
    T* InitialElement;  // Puntero al primer elemento del deque
    int _head;          // Índice del frente del deque
    int _tail;          // Índice de la parte posterior del deque
    int _size;          // Tamaño actual del deque
    int _currentElements;  // Número actual de elementos en el deque
    bool _isDynamic;    // Bandera que indica si el deque es dinámico

public:
    // Constructor
    Deque(int size, bool Dynamic = true) : _size(size), _isDynamic(Dynamic)
    {
        InitialElement = new T[_size];
        _head = 0;
        _tail = 0;
        _currentElements = 0;
    }

    // Destructor
    ~Deque()
    {
        delete[] InitialElement;
    }

    // Inserta un elemento al final del deque
    void EnqueueBack(T element)
    {
        if (Full())  // Verifica si el deque está lleno
        {
            if (_isDynamic)  // Si es dinámico, se duplica el tamaño del deque
            {
                T* AuxPointer = new T[_size * 2];  // Se crea un nuevo arreglo de mayor tamaño
                for (int i = 0; i < _currentElements; i++)
                {
                    AuxPointer[i] = InitialElement[(i + _head) % _size];  // Se copian los elementos existentes al nuevo arreglo
                }

                delete[] InitialElement;  // Se libera la memoria del arreglo original
                InitialElement = AuxPointer;  // El puntero del arreglo apunta al nuevo arreglo
                _size = _size * 2;  // Se actualiza el tamaño del deque
                _head = 0;  // Se actualiza el índice del frente
                _tail = _currentElements;  // Se actualiza el índice de la parte posterior
            }
            std::cout << "Deque llena" << '\n';  // Mensaje de deque lleno
        }

        InitialElement[_tail] = element;  // Se agrega el elemento al final del deque
        if (_tail == _size - 1)
        {
            _tail = 0;  // Si _tail llega al final del arreglo, se reinicia al inicio
        }
        else
        {
            _tail++;  // Se incrementa _tail
        }

        _currentElements++;  // Se incrementa el número de elementos en el deque
    }

    // Elimina el elemento del frente del deque
    void FrontDequeue()
    {
        if (Empty())  // Verifica si el deque está vacío
        {
            std::cout << "ERROR, tratando de quitar elementos de la Deque, pero no hay. Underflow." << '\n';  // Mensaje de deque vacío
            return;
        }

        _head++;  // Se incrementa _head
        _head = _head % _size;  // Se ajusta _head si llega al final del arreglo
        _currentElements--;  // Se decrementa el número de elementos en el deque

        if (_isDynamic)
        {
            if (_currentElements <= _size / 4)  // Si el número de elementos es menor o igual a un cuarto del tamaño
            {
                T* AuxPointer = new T[_size / 2];  // Se crea un nuevo arreglo con la mitad del tamaño actual
                for (int i = 0; i < _currentElements; i++)
                {
                    AuxPointer[i] = InitialElement[(i + _head) % _size];  // Se copian los elementos existentes al nuevo arreglo
                }

                delete[] InitialElement;  // Se libera la memoria del arreglo original
                InitialElement = AuxPointer;  // El puntero del arreglo apunta al nuevo arreglo
                _size = _size / 2;  // Se actualiza el tamaño del deque
                _head = 0;  // Se actualiza el índice del frente
                _tail = _currentElements;  // Se actualiza el índice de la parte posterior
            }
        }
    }

    // Inserta un elemento al frente del deque
    void FrontEnqueue(T element)
    {
        if (Full())  // Verifica si el deque está lleno
        {
            if (_isDynamic)  // Si es dinámico, se duplica el tamaño del deque
            {
                T* AuxPointer = new T[_size * 2];  // Se crea un nuevo arreglo de mayor tamaño
                for (int i = 0; i < _currentElements; i++)
                {
                    AuxPointer[i] = InitialElement[(i + _head) % _size];  // Se copian los elementos existentes al nuevo arreglo
                }

                delete[] InitialElement;  // Se libera la memoria del arreglo original
                InitialElement = AuxPointer;  // El puntero del arreglo apunta al nuevo arreglo
                _size = _size * 2;  // Se actualiza el tamaño del deque
                _head = 0;  // Se actualiza el índice del frente
                _tail = _currentElements;  // Se actualiza el índice de la parte posterior
            }
            else
            {
                std::cout << "Deque llena" << '\n';  // Mensaje de deque lleno
                return;
            }
        }

        _head--;  // Se decrementa _head
        if (_head < 0)
            _head = _size - 1;  // Si _head es menor que cero, se ajusta al final del arreglo

        InitialElement[_head] = element;  // Se agrega el elemento al frente del deque
        _currentElements++;  // Se incrementa el número de elementos en el deque
    }

    // Elimina el elemento de la parte posterior del deque
    void BackDequeue()
    {
        if (Empty())  // Verifica si el deque está vacío
        {
            std::cout << "ERROR, tratando de quitar elementos de la Deque, pero no hay. Underflow." << '\n';  // Mensaje de deque vacío
            return;
        }

        _tail--;  // Se decrementa _tail
        if (_tail < 0)
            _tail = _size - 1;  // Si _tail es menor que cero, se ajusta al final del arreglo

        _currentElements--;  // Se decrementa el número de elementos en el deque
    }

    // Devuelve el elemento del frente del deque
    T Front()
    {
        if (Empty())  // Verifica si el deque está vacío
            return T();  // Si está vacío, se devuelve un valor por defecto de tipo T

        return InitialElement[_head];  // Devuelve el elemento del frente del deque
    }

    // Devuelve el elemento de la parte posterior del deque
    T Back()
    {
        if (Empty())  // Verifica si el deque está vacío
            return T();  // Si está vacío, se devuelve un valor por defecto de tipo T

        int backIndex = _tail - 1;
        if (backIndex < 0)
            backIndex = _size - 1;  // Si backIndex es menor que cero, se ajusta al final del arreglo

        return InitialElement[backIndex];  // Devuelve el elemento de la parte posterior del deque
    }

    // Verifica si el deque está vacío
    bool Empty()
    {
        if (_currentElements == 0)
            return true;

        return false;
    }

    // Verifica si el deque está lleno
    bool Full()
    {
        if (_size == _currentElements)
            return true;

        return false;
    }

    // Imprime los elementos del deque
    void Print()
    {
        for (int i = 0; i < _currentElements; i++)
        {
            std::cout << InitialElement[(i + _head) % _size];  // Imprime los elementos en orden
            if (i != _currentElements - 1)
                std::cout << ", ";
        }
        std::cout << '\n';
    }
};

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

