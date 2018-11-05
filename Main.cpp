#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

#include "Header.h"

int main()
{
	vector<int> vect;

	vect.push_back(70);
	vect.push_back(50);
	vect.push_back(30);
	vect.push_back(20);
	vect.push_back(80);
	vect.push_back(60);
	vect.push_back(40);
	vect.push_back(10);

//	testHeap(vect);

	testSort(vect);

	
	
	return 0;	
}
