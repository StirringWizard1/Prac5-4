#include "ReduceGeneric.h"
#include "ReduceGCD.h"
#include <math.h>
#include <iostream>


int ReduceGCD::binaryOperator(int x, int y)
{
	//std::cout << "entered" << std::endl;
	//std::cout << "x: " << x << ":  y: " << y<< std::endl;
	int small=0;
	int large=0;
	int GCD=0;
	int T1 = abs(x);
	int T2 = abs(y);
	GCD = small +large;
		// std::cout << "x: " << T1 << ":  y: " << T2 << std::endl;

	if( T1<T2)
	{
		large = T2;
		small = T1;
	}
	else if (T1 > T2)
	{
		large =T1;
		small = T2;
	}
	else if (T1 == T2)
	{
		//std::cout << GCD << std::endl;
		return T1;
	}

	// std::cout << "Large: " << large << ":  small: " << small << std::endl;
	for (int i = 1; i <= small; i++)
	{
		if (small%i==0 && large%i == 0)
			{
				// std::cout << "GCD: " <<i << std::endl;
				GCD = i;
			}
	}
	//std::cout << GCD << std::endl;
	return GCD;


}