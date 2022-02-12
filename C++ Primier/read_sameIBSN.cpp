/*
Exercise 1.22: Write a program that reads several transactions for the same ISBN.
Write the sum of all the transactions that were read.
*/

#include "Sales_item.h"

int main(int argc, char const *argv[])
{
    Sales_item book1, book2, book3;
    // I think that the user must enter the same ISBN after the first one.
    std::cin >> book1;

    std::cin >> book2;
    while (book1.isbn() != book2.isbn())
    {
        std::cout << "Introduce the same ISBN as the first one!!!\n";
        std::cin >> book2;
    }

    std::cin >> book3;
    while (book1.isbn() != book3.isbn())
    {
        std::cout << "Introduce the same ISBN as the first one!!!\n";
        std::cin >> book3;
    }
    std::cout << "The sum is: " << book1 + book2 + book3 << std::endl;
    return 0;
}
