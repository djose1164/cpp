/*
Exercise 3.6: Use a range for to change all the characters in a string to X.
*/
#include <iostream>
#include <string>

int main(void)
{
    std::string name{"Jose Daniel"};
    std::cout << "Before range for: " << name << std::endl;

    /*for (auto &str : name)
        str = 'X';*/
    /*auto &str = name;
    size_t len{};
    while (len < str.size())
    {
        str[len] = 'X';
        ++len;
    }*/
    for (size_t i = 0; i < name.size(); i++)
        name[i] = 'X';

    std::cout << "After range for: " << name << std::endl;
}