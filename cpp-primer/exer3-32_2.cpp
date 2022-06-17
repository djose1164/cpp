/*
Exercise 3.32: Copy the array you defined in the previous exercise into 
another array. Rewrite your program to use vectors.
*/

#include <iostream>
#include <vector>

int main(void)
{
    constexpr size_t len{10};
    std::vector<unsigned>vector(len);
    for (auto i{0}; i < len; ++i)
        vector[i] = i;
    // Copying vector.
    std::vector<unsigned>vector2(len);
    vector2 = vector;

    for (auto& i: vector2)
        std::cout << i << " ";
    std::cout << std::endl;
    return 0;
}