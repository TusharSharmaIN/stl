/*
 *	test inplace merge sort
 *	@template typename T
 *	@param T first container
 *	@param T second container
 *	@return void
 */
template <typename T>
void testImplaceMerge(T first, T second)
{
	int N = first.size() + second.size();
	
	vector<int> vect(N);
	vector<int>::iterator it;

	sort(first.begin(), first.end());
	sort(second.begin(), second.end());

	it = copy(first.begin(), first.end(), vect.begin());  
	copy(second.begin(), second.end(), it);

	inplace_merge(vect.begin(), vect.end(), vect.end());

	print(vect);
	
}

/*
 *	test sorting algorithms
 *	@template typename T
 *	@param T val container
 *	@return void
 */
template <typename T>
void testSort(T &val)
{
	print(val);	

	sort(val.begin(), val.end());
	print(val);

	sort(val.begin(), val.end(), desc());
	print(val);

	partial_sort(val.begin(), val.begin() + 3, val.end());
	print(val);

	partial_sort(val.begin(), val.begin() + 3, val.end(), desc());
	print(val);	

	nth_element(val.begin(), val.begin() + 4, val.end());
	print(val);

	make_heap(val.begin(), val.end());
	sort_heap(val.begin(), val.end());
	print(val);
	
	vector<int> first = {5,10,15,20,25};
	vector<int> second = {10,20,30,40,50};
	
	testImplaceMerge(first, second);
}
