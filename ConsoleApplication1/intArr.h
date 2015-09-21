
#pragma once
#include "stdafx.h"
#include <iostream>
class intArray {

private:
	int* Arra;
	int num;
public:

	intArray();
	~intArray();
	int getArra();
	void setNum(int x);
	int getNum();
	void	setArra(int val, ...);
	void printArra();
	void showEl(int index);
	void setEl(int index, int value);
	void sumDiffVal(int index, int value);
	void subDiffVal(int index, int value);
	void even();
	void odd();
	int sum();


};