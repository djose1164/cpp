/*
Exercise 3.10: Write a program that reads a string of characters including punctuation
and writes what was read but with the punctuation removed.
*/

#include <iostream>
#include <string>

int main(void)
{
    std::string line{};
    std::string str{};
    getline(std::cin, line);
    std::cout << "With punctuation: " << line << std::endl;
    for (auto c : line)
        if (!ispunct(c))
            str += c;
    std::cout << "Without punctuation: " << str << std::endl;
    return 0;
}
