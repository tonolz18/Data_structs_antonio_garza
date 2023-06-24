#include <iostream>
using namespace std;

const int MAX_SIZE = 10;

template <class T>
class Queue {
private:
    T queue[MAX_SIZE];
    int head;
    int tail;

public:
    Queue() {
        head = 0;
        tail = -1;
    }

    bool isFull() {
        return tail == MAX_SIZE - 1;
    }

    bool isEmpty() {
        return head > tail;
    }

    void FrontEnqueue(T element) {
        if (isFull()) {
            cout << "Error: La cola está llena." << endl;
            return;
        }

        for (int i = tail; i >= head; i--) {
            queue[i + 1] = queue[i];
        }

        queue[head] = element;
        tail++;
    }

    void BackDequeue() {
        if (isEmpty()) {
            cout << "Error: La cola está vacía." << endl;
            return;
        }

        tail--;
    }

    T Front() {
        if (isEmpty()) {
            cout << "Error: La cola está vacía." << endl;
            return T();
        }

        return queue[head];
    }

    T Back() {
        if (isEmpty()) {
            cout << "Error: La cola está vacía." << endl;
            return T();
        }

        return queue[tail];
    }

    void Print() {
        if (isEmpty()) {
            cout << "Vacio" << endl;
            return;
        }

        for (int i = head; i <= tail; i++) {
            cout << queue[i];
            if (i != tail) {
                cout << ", ";
            }
        }
        cout << endl;
    }
};

int main() {
    Queue<char> q;

    q.FrontEnqueue('a'); // Ejemplo A
    q.FrontEnqueue('b');
    q.FrontEnqueue('c');
    q.FrontEnqueue('d');
    q.FrontEnqueue('e');
    q.Print();    // Resultado esperado: "a, b, c, d, e"

    q.FrontEnqueue('f'); // Ejemplo B
    q.BackDequeue();
    q.Print();    // Resultado esperado: "b, c, d, e, f"

    q.FrontEnqueue('e'); // Ejemplo C
    q.BackDequeue();
    q.BackDequeue();
    q.BackDequeue();
    q.BackDequeue();
    q.Print();    // Resultado esperado: "e, f"

    char frontElement = q.Front();
    cout << "Front Element: " << frontElement << endl;

    char backElement = q.Back();
    cout << "Back Element: " << backElement << endl;

    return 0;
}
