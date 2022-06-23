/*
Exercise 3.44: Rewrite the programs from the previous exercises using a 
type alias for the type of the loop control variables.
*/
#include <iostream>

int main(void)
{
	int ia[3][4] = {{0, 1, 2, 3},
                    {4, 5, 6, 7},
                    {8, 9, 10, 11}};
	
	// With for-range.
	for (auto (&p)[4]: ia)
	{
		for (auto& q: p)
			std::cout << q << " ";
	}
	std::cout << "\n=======" << std::endl;

	// Using subscripts.
	for (auto i = 0; i < 3; ++i)
	{
		for (auto j = 0; j < 4; ++j) 	
			std::cout << ia[i][j];
		std::cout << std::endl;
	}
	std::cout << "=======" << std::endl;
	
	// Using pointers.
	for (auto (*p)[4] = ia; p != ia + 3; ++p)
	{
		for (auto *q = *p; q != *p + 4; ++q)
		std::cout << *q << ' ';
	std::cout << std::endl;
	}
	
	return 0;
}

