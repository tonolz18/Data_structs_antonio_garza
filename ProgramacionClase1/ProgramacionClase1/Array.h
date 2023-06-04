#pragma once

//Clase para entender la base de cómo hacer nuestras estructuras de datos
class Array
{
public:
	RawArray(int in_Size)
	{
		Size = in_Size;
		//estoy pidiendo
		InitialElement = new int[Size];

		//Internamente "int[Size]" haría:
		int* auxPosition = InitialElement;
		for (int i = 0; i < Size; i++)
		{
			auxPosition++;
			auxPosition = new int;
		}
	}

	// puntero a la primera dirección de los N enteros continuos en memoria
	int* InitialElement;
	// InitialElement++; // nos mueve 4 bytes en memoria
	// si InitialElement está apuntando a x1, y luego hacemos InitialElement++
	// int* auxPosition = InitialElement;
	// al hacer auxPosition++ una vez más nos llevaría al tercer elemento

	int Size;

	// int myArray[5];
	// x1, x2, x3, x4, x5

/*
x1 -> 0-4,
x2 -> 5-8,
x3 -> 9-12,
x4 -> 13-16,
x5 -> 17-20
*/

	myArray[3] = 90;

};

