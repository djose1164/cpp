/*
Exercise 5.24: Revise your program to throw an exception if the second number 
is zero. Test your program with a zero input to see what happens on your system 
if you don’t catch an exception.
*/
#include <iostream>
#include <stdexcept>
int main(void)
{
	int a, b;
	std::cin >> a >> b;
	if (b == 0)
		throw std::invalid_argument("Cannot divide by zero!");
	std::cout << a << '/' << b << '=' << a/b << std::endl;
	return 0;
}
