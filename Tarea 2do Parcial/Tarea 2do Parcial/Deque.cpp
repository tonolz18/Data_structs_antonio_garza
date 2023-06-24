#include "deque.h"
#include <iostream>

using namespace std;

const int MAX_SIZE = 10;

template <class T>
Deque<T>::Deque() {
    head = 0;
    tail = -1;
}

template <class T>
bool Deque<T>::isFull() {
    return tail == MAX_SIZE - 1;
}

template <class T>
bool Deque<T>::isEmpty() {
    return head > tail;
}

template <class T>
void Deque<T>::FrontEnqueue(T element) {
    if (isFull()) {
        cout << "Error: La cola está llena." << endl;
        return;
    }

    for (int i = tail; i >= head; i--) {
        deque[i + 1] = deque[i];
    }

    deque[head] = element;
    tail++;
}

template <class T>
void Deque<T>::BackDequeue() {
    if (isEmpty()) {
        cout << "Error: La cola está vacía." << endl;
        return;
    }

    tail--;
}

template <class T>
T Deque<T>::Front() {
    if (isEmpty()) {
        cout << "Error: La cola está vacía." << endl;
        return T();
    }

    return deque[head];
}

template <class T>
T Deque<T>::Back() {
    if (isEmpty()) {
        cout << "Error: La cola está vacía." << endl;
        return T();
    }

    return deque[tail];
}

template <class T>
void Deque<T>::Print() {
    if (isEmpty()) {
        cout << "Vacio" << endl;
        return;
    }

    for (int i = head; i <= tail; i++) {
        cout << deque[i];
        if (i != tail) {
            cout << ", ";
        }
    }
    cout << endl;
}

// Declaraciones explícitas de las instanciaciones de la plantilla
template class Deque<char>;
