/*
 *	test permutation algorithms
 *	@template typename T
 *	@param T val container
 *	@return void
 */
template <typename T>
void testPermutation(T &val)
{
	print(val);

	rotate(val.begin(), val.begin() + 3, val.end());

	print(val);

	shuffle(val.begin(), val.end(), default_random_engine(seed));

	print(val);

	bool nextCheck = next_permutation(val.begin(), val.end());

	if(nextCheck)	cout<<"Next Permutation Available\n";

	print(val);

	bool prevCheck = prev_permutation(val.begin(), val.end());

	if(prevCheck)	cout<<"Previous Permutation Available\n";

	print(val);	

	reverse(val.begin(), val.end());

	print(val);
}
