/*
Exercise 3.36: Write a program to compare two arrays for equality. Write a 
similar program to compare two vectors.
*/

#include <iostream>

int main(void)
{
	const unsigned len = 4;
	int arr[len]{2, 4, 6, 8};
	int arr2[len]{1, 3, 5, 7};
	bool flag{true};
	
	for (size_t i{0}; i < len; ++i)
		if (arr[i] != arr2[i])
			flag = false;
			
	if (flag)
		std::cout << "Arrays are equals!\n";
	else
		std::cout << "Arrays are differents!\n";
		
	return 0;	
}
