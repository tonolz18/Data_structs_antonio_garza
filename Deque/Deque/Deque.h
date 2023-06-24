#ifndef DEQUE_H
#define DEQUE_H

template <class T>
class Deque {
private:
    T deque[MAX_SIZE];
    int head;
    int tail;

public:
    Deque();
    bool isFull();
    bool isEmpty();
    void FrontEnqueue(T element);
    void BackDequeue();
    T Front();
    T Back();
    void Print();
};

#endif

