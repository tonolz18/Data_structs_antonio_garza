#include "deque.h"
#include <iostream>

using namespace std;

int main() {
    Deque<char> q;

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
