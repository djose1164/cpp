/*
Exercise 3.25: Rewrite the grade clustering program from § 3.3.3 (p. 104) 
using iterators instead of subscripts.
*/

#include <iostream>
#include <vector>

int main(void)
{
    std::vector<unsigned>scores(11, 0);
    unsigned grade;

    while(std::cin >> grade)
        if (grade <= 100)
            ++(*(scores.begin() + grade/10));

    for (auto &i: scores)
        std::cout << i << " ";
    std::cout << std::endl;
    return 0;
}
