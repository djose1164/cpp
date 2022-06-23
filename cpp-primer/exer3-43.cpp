/*
Exercise 3.43: Write three different versions of a program to print the elements 
of ia. One version should use a range for to manage the iteration, the other two
should use an ordinary for loop in one case using subscripts and in the other 
using pointers. In all three programs write all the types directly. That is, 
do not use a type alias, auto, or decltype to simplify the code.
*/
#include <iostream>
#include <iterator>

int main(void)
{
	int ia[]{-5, 10, 2, 0, 1};
	
	// With for-range.
	for (int& i: ia)
		std::cout << i << " ";
	std::cout << "\n=======" << std::endl;
	
	// Using subscripts.
	for (size_t i = 0; i < (std::end(ia) - std::begin(ia)); ++i)
		std::cout << ia[i] << " ";
	std::cout << "\n=======" << std::endl;
	
	// Using pointers.
	for (size_t i = 0; i < (std::end(ia) - std::begin(ia)); ++i)
		std::cout << *(ia + i) << " ";
	std::cout << std::endl;
}
