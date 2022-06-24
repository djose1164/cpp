/*
Exercise 5.25: Revise your program from the previous exercise to use a try block 
to catch the exception. The catch clause should print a message to the user and 
ask them to supply a new number and repeat the code inside the try.
*/
#include <iostream>
#include <stdexcept>

int main(void)
{
	int a, b;
	while (std::cin >> a >> b)
	{
		try {
			if (b == 0)
				throw std::runtime_error("Cannot divide by zero!\n");
			std::cout << a << '/' << b << '=' << a/b << std::endl;
		} catch (std::runtime_error e) {
			std::cout << e.what() << "Please enter another number different to zero.\n";
			std::cin >> b;
			std::cout << a << '/' << b << '=' << a/b << std::endl;
		}
	}
	return 0;
}
