/*
Exercise 3.31: Write a program to define an array of ten ints. Give each 
element the same value as its position in the array.
*/
#include <iostream>

int main(void)
{
    constexpr size_t len{10};
    int arr[len]{};
    for (auto i{0}; i < len; ++i)
        arr[i] = i;
    
    for (auto& i: arr)
        std::cout << i << " ";
    std::cout << std::endl;
}