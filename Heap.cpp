/*
 *	test heap algorithms
 *	@template typename T
 *	@param T val container
 *	@return void
 */
template <typename T>
void testHeap(T &val)
{
	print(val);	

	//generating max heap
	make_heap(val.begin(), val.end());
	print(val);

	val.push_back(90);
	push_heap(val.begin(), val.end());
	print(val);
	cout<<"Max Heap Value : "<<val.front()<<endl;

	pop_heap(val.begin(), val.end());
	val.pop_back();
	print(val);
	cout<<"Max Heap Value : "<<val.front()<<endl;

	//generating min heap
	make_heap(val.begin(), val.end(), desc());
	print(val);

	val.push_back(0);
	push_heap(val.begin(), val.end(), desc());
	print(val);
	cout<<"Min Heap Value : "<<val.front()<<endl;

	pop_heap(val.begin(), val.end(), desc());
	val.pop_back();
	print(val);
	cout<<"Min Heap Value : "<<val.front()<<endl;

}
