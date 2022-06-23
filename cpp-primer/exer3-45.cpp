/*
Exercise 3.45: Rewrite the programs again, this time using auto.
*/
#include <iostream>

int main(void)
{
	using int_array = int[4];
	int_array ia[3] = {{0, 1, 2, 3},
                    {4, 5, 6, 7},
                    {8, 9, 10, 11}};
	
	// With for-range
	for (auto& p: ia)
		for (auto& q: p)
			std::cout << q << ' ';
	std::cout << std::endl;
	std::cout << "============\n";
	// With subscript
	for (size_t i{0}; i < 3; ++i)
	{
		for (size_t j{0}; j < 4; ++j)
			std::cout << ia[i][j] << ' ';
		std::cout << std::endl;
	}	
	std::cout << "============\n";
	// With pointers
	for (auto *p = ia; p != ia + 3; ++p)
	{
		for (auto *q = *p; q != *p + 4; ++q)
			std::cout << *q << ' ';
		std::cout << std::endl;
	}

	return 0;
}
