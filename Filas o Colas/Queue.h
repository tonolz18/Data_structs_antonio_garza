#pragma once

template <typename T>
class Queue
{
private:
	// Variables que tiene que tener:
	// Donde vamos a guardar los datos.
	T* InitialElement;
	int _head;
	int _tail;
	int _size; // cuanta memoria está pedida actualmente

	// bool _isDynamic;

public:
	// Constructor
	Queue(int size): _size(size)
	{
		InitialElement = new T[_size];

	}

	// Destructor
	~Queue()
	{
		delete[] InitialElement;
	}

	// Añadir

	// Quitar

	//Imprimir // No es exactamente igual que la de Stack ni la de RawArray
	void Print()
	{
		for (int i = 0; i < _size; i++)
		{

		}
	}
};
