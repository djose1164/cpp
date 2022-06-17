/*
Exercise 3.32: Copy the array you defined in the previous exercise into 
another array. Rewrite your program to use vectors.
*/

#include <iostream>

int main(void)
{
    constexpr size_t len{10};
    int arr[len]{};
    for (auto i{0}; i < len; ++i)
        arr[i] = i;
    // Copying array.
    int arr2[len]{0};
    for (auto i{0}; i < len; ++i)
        arr2[i] = arr[i];

    return 0;
}