#include "FilterGeneric.h"
#include "FilterNonPositive.h"
#include <vector>


int FilterNonPositive::g(int x)
{
	if (x < 0)
	{
		return true;
	}
	
	return false;
}