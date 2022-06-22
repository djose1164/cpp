/*
Exercise 3.36: Write a program to compare two arrays for equality. Write a 
similar program to compare two vectors.
*/

#include <iostream>
#include <vector>

int main(void)
{
	constexpr unsigned len = 4;
	std::vector<unsigned> vec{2, 4, 6, 8};
	std::vector<unsigned> vec2{2, 4, 6, 8};
	bool flag{true};
	
	for (size_t i{0}; i < len; ++i)
	{
		if (vec[i] != vec2[i])
		{
			flag = false;
			break;
		}
	}
	if (flag)
		std::cout << "Vectors are equals!\n";
	else
		std::cout << "Vectors are different!\n";
	return 0;
}
