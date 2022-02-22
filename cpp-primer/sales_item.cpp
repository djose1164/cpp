/*
Exercise 1.20: http://www.informit.com/title/0321714113 contains a copy of 
Sales_item.h in the Chapter 1 code directory. Copy that file to your working 
directory. Use it to write a program that reads a set of book sales transactions, 
writing each transaction to the standard output.
*/
#include "Sales_item.h"
#define MAX_BOOKS 5

int main(int argc, char const *argv[])
{
    Sales_item books[MAX_BOOKS];
    for (size_t i = 0; i < MAX_BOOKS; i++)
    {
        std::cin >> books[i];
        std::cout << books[i] << std::endl;
    }
    
    return 0;
}
