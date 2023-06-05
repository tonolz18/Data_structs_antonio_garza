#ifndef ARRAY_H
#define ARRAY_H

class RawArray {
private:
    int* rawArray;
    int size;

public:
    // Constructor
    RawArray(int size);

    // Destructor
    ~RawArray();

    // Funci?n para buscar un valor en el RawArray
    bool BuscarValor(int valorX) const;

    // Otras funciones miembro
    void Init();
    void Print() const;
};

#endif // ARRAY_H
