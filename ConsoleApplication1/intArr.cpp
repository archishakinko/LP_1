#include"stdafx.h"
#include"intArr.h"
#include <iostream>



intArray::intArray()
{
	Arra = new int[num];
}
intArray::~intArray()
{
	delete[]  Arra;
	std::cout << "cleaned" << std::endl;
}

int intArray::getArra()
{
	return *Arra;
}
void intArray::setNum(int x)
{
	num = x;
}
int intArray::getNum()
{
	return num;
}

void	 intArray::setArra(int val, ...)
{

	int* ptrVal = &val;
	int i = 0;/*
			  while (*ptrVal)
			  {
			  Arra[i] = *ptrVal;
			  ++i;
			  ptrVal++;

			  }*/
	for (i = 0; i < num; i++)
	{
		Arra[i] = *ptrVal;
		ptrVal++;
		std::cout << Arra[i] << " ";
	}

	if (i > num)
	{
		std::cout << " Array is foul!!" << std::endl;
	}

}
void  intArray::printArra()
{
	for (int i = 0; i < num; i++)
	{
		std::cout << Arra[i] << " " << std::endl;
	}

}
void  intArray::showEl(int index)
{
	std::cout << "element #" << index << " is: " << Arra[index] << std::endl;
}
void  intArray::setEl(int index, int value)
{
	Arra[index] = value;
}
void  intArray::sumDiffVal(int index, int value)
{
	Arra[index] = Arra[index] + value;
}
void  intArray::subDiffVal(int index, int value)
{
	Arra[index] = Arra[index] - value;
}
void  intArray::even()
{
	for (int i = 0; i < num; i++)
	{
		if (i % 2) std::cout << Arra[i] << std::endl;
	}
}
void  intArray::odd()
{
	for (int i = 0; i < num; i++)
	{
		if (i / 2) std::cout << Arra[i] << std::endl;
	}
}
int  intArray::sum()
{
	int summa = 0;
	for (int i = 0; i < num; i++)
	{
		summa = summa + Arra[i];
	}
	return summa;
}