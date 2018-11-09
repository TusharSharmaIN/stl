/*
 *	test stable secret run algorithms
 *	@template typename T
 *	@param T val container
 *	@return void
 */
template <typename T>
void testSecretRun_Stable(T &val)
{
	print(val);	

	stable_sort(val.begin(), val.end());
	print(val);

	stable_partition(val.begin(), val.end(), isOdd());
	print(val);
}
/*
 *	test is secret run algorithms
 *	@template typename T
 *	@param T val container
 *	@return void
 */
template <typename T>
void testSecretRun_Is(T &val)
{
	print(val);
	
	sort(val.begin(), val.end());
	print(val);
	bool checkSorted = is_sorted(val.begin(), val.end());
	if(checkSorted)	cout<<"Sorted\n";

	partition(val.begin(), val.end(), isOdd());
	print(val);
	bool checkPartitioned = is_partitioned(val.begin(), val.end(), isOdd());
	if(checkPartitioned) cout<<"Partitioned\n";

	make_heap(val.begin(), val.end());
	print(val);
	bool checkHeap = is_heap(val.begin(), val.end());
	if(checkHeap) cout<<"Heap\n";

}

/*
 *	test is until secret run algorithms
 *	@template typename T
 *	@param T val container
 *	@return void
 */
template <typename T>
void testSecretRun_Is_Until(T &val)
{
	print(val);	

	vector<int> :: iterator countSorted;
	vector<int> :: iterator countHeap;	

	sort(val.begin(), val.begin()+3);
	print(val);
	countSorted = is_sorted_until(val.begin(), val.end());
	cout<<(countSorted-val.begin())<<" elements are sorted\n";

	make_heap(val.begin(), val.begin()+4);
	print(val);
	countHeap = is_heap_until(val.begin(), val.end());
	cout<<(countHeap-val.begin())<<" elements are in heap\n";

}

/*
 *	test copy secret run algorithms
 *	@template typename T
 *	@param T val container
 *	@return void
 */
template <typename T>
void testSecretRun_Copy(T &val)
{
	print(val);

	T testVect(val.size());

	copy(val.begin(), val.end(), testVect.begin());
	print(testVect);

	auto it1 = copy_n(val.begin(), 3, testVect.begin());
	testVect.resize(distance(testVect.begin(), it1));
	print(testVect);

	auto it2 = copy_if(val.begin(), val.end(), testVect.begin(), [](int i){return !(i<5);});
	testVect.resize(distance(testVect.begin(), it2));
	print(testVect);
	
	testVect.resize(testVect.size()+3);
	copy_backward(val.begin(), val.begin()+5, testVect.end());
	print(testVect);
	
}

/*
 *	test secret runs algorithms
 *	@template typename T
 *	@param T val container
 *	@return void
 */
template <typename T>
void testSecretRuns(T &val)
{

//	testSecretRun_Stable(val);

//	testSecretRun_Is(val);

//	testSecretRun_Is_Until(val);

	testSecretRun_Copy(val);
}
