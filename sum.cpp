#include <iostream>


int main(int argc, char const *argv[])
{
    int num1{};
    int num2{};
    auto sum{0};

    std::cout << "Type first number: ";
    std::cin >> num1;
    std::cout << "Type second number: ";    
    std::cin >> num2;
    sum = num1 + num2;
    std::cout << "The result is " << sum << std::endl;
    return 0;
}
