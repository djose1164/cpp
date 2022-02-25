/*
Exercise 3.20: Read a set of integers into a vector. Print the sum of each pair of
adjacent elements. Change your program so that it prints the sum of the first and
last elements, followed by the sum of the second and second-to-last, and so on.
*/

#include <iostream>
#include <vector>

int main(void)
{
    std::vector<int> vec;
    int num{}, len{};
    while (std::cin >> num && ++len)
        vec.push_back(num);
    int sum{};
    /*for (auto cur : vec)
        sum += cur;
    std::cout << "The sum of each pair is: " << sum << std::endl;*/
    sum = 0;
    auto len_c = static_cast<size_t>(len);
    std::cout << "===========\n";
    for (size_t i{}; i < len; ++i)
        std::cout << vec[i] + vec[--len] << std::endl;

    return 0;
}