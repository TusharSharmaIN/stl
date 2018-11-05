/*
 *	test partition algorithm
 *	@template typename T
 *	@param T val container
 *	@return void
 */
template <typename T>
void testPartition(T &val)
{
	vector<int>::iterator bound;

	partition(val.begin(), val.end(), isOdd());

	bound = partition_point(val.begin(), val.end(), isOdd());
	
	print(val);

	printSome(val.begin(), bound);
	
	printSome(bound, val.end());
	
}
