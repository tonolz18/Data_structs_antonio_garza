#include "Array.h"

RawArray::RawArray(int in_Size)
{
	Size = in_Size;
	//estoy pidiendo
	InitialElement = new int[Size];
}
