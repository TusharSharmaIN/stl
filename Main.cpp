#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

#include "Header.h"

int main()
{
	vector<int> vect;

	vect.push_back(7);
	vect.push_back(5);
	vect.push_back(3);
	vect.push_back(2);
	vect.push_back(8);
	vect.push_back(6);
	vect.push_back(4);
	vect.push_back(1);

//	testHeap(vect);

//	testSort(vect);

	testPartition(vect);
	
	return 0;	
}
