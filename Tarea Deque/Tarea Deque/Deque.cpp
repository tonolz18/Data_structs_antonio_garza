#include <iostream>
using namespace std;

const int MAX_SIZE = 10;

template <class T>
class Queue {
private:
    T queue[MAX_SIZE]; // Arreglo para almacenar los elementos de la cola
    int head; // �ndice de la cabeza de la cola
    int tail; // �ndice de la cola

public:
    Queue() {
        head = 0; // Inicializar la cabeza en el primer �ndice del arreglo
        tail = -1; // Inicializar la cola en -1 para indicar que est� vac�a
    }

    bool isFull() {
        return tail == MAX_SIZE - 1; // Comprobar si la cola est� llena
    }

    bool isEmpty() {
        return head > tail; // Comprobar si la cola est� vac�a
    }

    void FrontEnqueue(T element) {
        if (isFull()) {
            cout << "Error: La cola est� llena." << endl; // Mostrar un mensaje de error si la cola est� llena
            return;
        }

        // Desplazar los elementos existentes hacia la derecha para hacer espacio para el nuevo elemento
        for (int i = tail; i >= head; i--) {
            queue[i + 1] = queue[i];
        }

        queue[head] = element; // Insertar el nuevo elemento en la cabeza de la cola
        tail++; // Incrementar el �ndice de la cola
    }

    void BackDequeue() {
        if (isEmpty()) {
            cout << "Error: La cola est� vac�a." << endl; // Mostrar un mensaje de error si la cola est� vac�a
            return;
        }

        tail--; // Decrementar el �ndice de la cola para eliminar el �ltimo elemento
    }

    T Front() {
        if (isEmpty()) {
            cout << "Error: La cola est� vac�a." << endl; // Mostrar un mensaje de error si la cola est� vac�a
            return T();
        }

        return queue[head]; // Devolver el elemento en la cabeza de la cola
    }

    T Back() {
        if (isEmpty()) {
            cout << "Error: La cola est� vac�a." << endl; // Mostrar un mensaje de error si la cola est� vac�a
            return T();
        }

        return queue[tail]; // Devolver el �ltimo elemento en la cola
    }

    void Print() {
        if (isEmpty()) {
            cout << "Vacio" << endl; // Mostrar "Vacio" si la cola est� vac�a
            return;
        }

        // Imprimir los elementos de la cola separados por comas
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