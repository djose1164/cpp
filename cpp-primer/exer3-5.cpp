/*
Exercise 3.5: Write a program to read strings from the standard input, concatenating 
what is read into one large string. Print the concatenated string. Next, change 
the program to separate adjacent input strings by a space.
*/
#include <iostream>
#include <string>

int main(int argc, char const *argv[])
{
    std::string line{};
    std::string word{};
    std::string space{" "};
    
    while (std::cin >> word)
    {
        word += " ";
        line += word;
        std::cout << line << std::endl;
    }
    
    return 0;
}
