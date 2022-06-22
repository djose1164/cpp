/*
Exercise 3.36: Write a program to compare two arrays for equality. Write a 
similar program to compare two vectors.
*/

#include <iostream>
#include <vector>

//bool compare(

int main(void)
{
	constexpr unsigned len = 4;
	std::vector<unsigned> vec{2, 4, 6, 8};
	std::vector<unsigned> vec2{1, 4, 6, 8};
	
	if (vec == vec2)
		std::cout << "Vectors are equals!\n";
	else
		std::cout << "Vectors are different!\n";
	return 0;
}
