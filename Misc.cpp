/*
 *	comperator to generate min heap
 *	@template typename T
 *	@param T a first iterator
 *	@param T b second iterator
 *	@return bool true OR false
 */
struct desc
{
	template <typename T>
	bool operator()(const T& a, const T& b) const
	{
		return (a > b);
	}
};

/*
 *	print container
 *	@template T
 *	@param T val container
 *	@return void
 */
template <typename T>
void print(T &val)
{
	for(vector<int>::iterator it = val.begin(); it != val.end(); it++)
	    {
	        cout<<*it<<" ";
	    }
	cout<<"\n";
}

/*
 *	is odd checker	
 *	@template T
 *	@param T a container
 *	@return true if odd
 */
struct isOdd
{
	template <typename T>
	bool operator()(const T& a) const
	{
		return (a%2 == 1);
	}
};

/*
 *	print some element of a container
 *	@template typename Iterator
 *	@param first first iterator
 *	@param second second iterator
 *	@return void
 */
template <typename Iterator>
void printSome(Iterator iter, Iterator iter2)
{
    for (Iterator it = iter; it != iter2; ++it) 
	{
        cout<<*it<<" ";
    }
	cout<<"\n";
}
