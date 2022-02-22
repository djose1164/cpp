/*
Exercise 3.4: Write a program to read two strings and report whether the
strings are equal. If not, report which of the two is larger. Now, change
the program to report whether the strings have the same length, and if not,
report which is longer.
*/
#include <iostream>
#include <string>

int main(int argc, char const *argv[])
{
    std::string line{}, line2{};

    std::cout << "Enter 2 word seperated by space: ";
    std::cin >> line >> line2;
    /*
    if (line == line2)
        std::cout << line << " and " << line2 << " are the same.\n";
    else if (line > line2)
        std::cout << line << " is larger than " << line2 << ".\n";
    else
        std::cout << line2 << " is larger than " << line << ".\n";
    */
    if (line.size() == line2.size())
        std::cout << "The words has the same length.\n";
    else if (line.size() > line2.size())
        std::cout << "The first word is longer than the second one.\n";
    else
        std::cout << "The second word is longer than the first one.\n";
    return 0;
}
