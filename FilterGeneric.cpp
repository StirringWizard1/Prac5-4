#include "FilterGeneric.h"
#include <vector>
#include <iostream>




std::vector <int> FilterGeneric::filter(std::vector<int> myvec) 
{
	bool check;
	int hi =  myvec.size(); 

	if (pos >= hi)
	{
		 return myvec;
	}

	check = g(myvec.at(pos));

	if (check == false)
	{
		myvec.erase(myvec.begin() + pos);
		pos--;
	}
	pos++; 

	return filter(myvec); 


}