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

