/*
Exercise 5.23: Write a program that reads two integers from the standard input 
and prints the result of dividing the first number by the second.
*/
#include <iostream>

int main(void)
{
	int a, b;
	std::cin >> a >> b;
	std::cout << a << '/' << b << '=' << a/b << std::endl;
	return 0;
}
