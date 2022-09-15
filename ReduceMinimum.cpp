#include "ReduceGeneric.h"
#include "ReduceMinimum.h"
#include <iostream>

int ReduceMinimum::binaryOperator(int x, int y)
{
	//std::cout << "x: "<<x << " : "  <<  "y: "<< y <<std::endl;
	if (x < y)
	{
		
		return x;
	}
	return y;
}