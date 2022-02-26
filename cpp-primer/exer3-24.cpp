/*
Exercise 3.24: Redo the last exercise from § 3.3.3 (p. 105) using iterators.
*/

#include <iostream>
#include <vector>

int main(void)
{
    std::vector<int> vec;
    int num{};
    while (std::cin >> num)
        vec.push_back(num);

    std::cout << "===========\n";
    for (auto b = vec.begin(), e = vec.end()-1, mid = vec.begin() + vec.size() / 2;
         b != mid; ++b, --e)
        std::cout << *b + *e << std::endl;
    return 0;
}