/*
Exercise 3.35: Using pointers, write a program to set the elements in an array to zero.
*/
#include <iostream>
#include <iterator>

int main(void)
{
    int arr[]{2, 5, 1, 8, -4, 0, 1};
    auto begin{std::begin(arr)};
    auto end{std::end(arr)};
    while (begin != end)
    {
        *begin = 0;
        ++begin;
    }
    return 0;
}