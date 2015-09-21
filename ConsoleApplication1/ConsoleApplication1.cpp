// ConsoleApplication1.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"
#include <iostream>
#include "intArr.h"

int MaxSum(int x,...)
{
	int kol = 0;
	int max = 0;
	int arra[10];
	int* sum = &x;
	for (int i = 0;*sum; i++)
	{
		arra[i] = *sum; 
		*sum++;
		kol++;
		
	}
	for (int i = 0; i < kol; i++)
	{
		if (max < arra[i]) max = arra[i];
	}
	std::cout << "Max sum is : " << max << std::endl;
	return max;
}
int main()
{
	intArray* firstArra = new intArray();
	intArray* secondArra = new intArray();
	intArray* tmp = new intArray();
	delete tmp;
	firstArra->setNum(10);
	firstArra->setArra(1, 2, 3, 4, 5, 6, 7, 8, 9, 10); 
	firstArra->printArra();

	secondArra->setNum(8);
	secondArra->setArra(8, 7, 6, 5, 4, 3, 2, 1);
	secondArra->printArra();

	std::cout << "chenges: " << std::endl;
	firstArra->setEl(3, 42);
	secondArra->setEl(5, 42);
	firstArra->showEl(3);
	secondArra->showEl(5);
	firstArra->even();
	secondArra->odd();

	firstArra->sumDiffVal(0, 9);
	secondArra->subDiffVal(0, 7);

	firstArra->printArra();
	secondArra->printArra();

	int x = firstArra->sum();
	int y = secondArra->sum();
	std::cout << "first array sum is: " << firstArra->sum() << std::endl;
	std::cout << "second array sum is: " << secondArra->sum() << std::endl;

	MaxSum(x, y);
	//firstArra.~intArray();
	//secondArra.~intArray();
	//delete firstArra;
	//delete secondArra;

	system("pause");
	return 0;
}

