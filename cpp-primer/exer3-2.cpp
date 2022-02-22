/*
Exercise 3.2: Write a program to read the standard input a line at a time.
Modify your program to read a word at a time.
*/

#include <iostream>
#include <string>

int main(void)
{
    std::string line{};
    std::cout << "> ";
    
    /*while (getline(std::cin, line))
    {
        std::cout << line << std::endl;
        std::cout << "> ";
    }*/
    while (std::cin >> line)
    {
        std::cout << line << std::endl;
        std::cout << "> ";
    }
    std::cout << "Bye!";

}