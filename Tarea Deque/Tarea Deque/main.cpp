#include "deque.h" // Incluir el archivo de encabezado que define la clase Deque
#include <iostream>

using namespace std;

int main() {
    Deque<char> q; // Crear una instancia de la clase Deque

    q.FrontEnqueue('a'); // Ejemplo A: Insertar 'a' en la cabeza del deque
    q.FrontEnqueue('b'); // Insertar 'b' en la cabeza del deque
    q.FrontEnqueue('c'); // Insertar 'c' en la cabeza del deque
    q.FrontEnqueue('d'); // Insertar 'd' en la cabeza del deque
    q.FrontEnqueue('e'); // Insertar 'e' en la cabeza del deque
    q.Print();    // Imprimir los elementos del deque. Resultado esperado: "a, b, c, d, e"

    q.FrontEnqueue('f'); // Ejemplo B: Insertar 'f' en la cabeza del deque
    q.BackDequeue(); // Eliminar el elemento de la cola del deque
    q.Print();    // Imprimir los elementos del deque. Resultado esperado: "b, c, d, e, f"

    q.FrontEnqueue('e'); // Ejemplo C: Insertar 'e' en la cabeza del deque
    q.BackDequeue(); // Eliminar el elemento de la cola del deque
    q.BackDequeue(); // Eliminar el elemento de la cola del deque
    q.BackDequeue(); // Eliminar el elemento de la cola del deque
    q.BackDequeue(); // Eliminar el elemento de la cola del deque
    q.Print();    // Imprimir los elementos del deque. Resultado esperado: "e, f"

    char frontElement = q.Front(); // Obtener el elemento en la cabeza del deque
    cout << "Front Element: " << frontElement << endl; // Imprimir el elemento en la cabeza del deque

    char backElement = q.Back(); // Obtener el elemento en la cola del deque
    cout << "Back Element: " << backElement << endl; // Imprimir el elemento en la cola del deque

    return 0;
}
