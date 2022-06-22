/*
Exercise 3.36: Write a program to compare two arrays for equality. Write a 
similar program to compare two vectors.
*/

#include <iostream>
#include <vector>
#include <iterator>
/*
Compare two arrays.
Parameters: * for any number.
	begin* where the array starts.
	end* where the array ends.
	
Return:
	True for equals, false otherwise.
*/
bool compare(int *const begin1, int *const end1, int *const begin2,
			 int *const end2)
{
	if ((end1 - begin1) != (end2 - begin2))
		return false;
		
	for (auto i = begin1, j = begin2; (i != end1) && (j != end2); ++i, ++j)
		if (*i != *j)
			return false;
			
	return true;
}

int main(void)
{
	int arr1[]{1, 3, 5, 7};
	int arr2[]{1, 3, 5};
	
	if (compare(std::begin(arr1), std::end(arr1), std::begin(arr2), 
		std::end(arr2)))
		std::cout << "The two array are equal!\n";
	else
		std::cout << "The two array are not equal!\n";
	
	std::cout << "===========\n";
	
	std::vector<unsigned> vec{2, 4, 6, 8};
	std::vector<unsigned> vec2{1, 4, 6, 8};
	
	if (vec == vec2)
		std::cout << "The two vectors are equal!\n";
	else
		std::cout << "The two vectors are not equal!\n";
	
	return 0;
}
