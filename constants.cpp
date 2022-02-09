#include <iostream>

consteval double division(double x, double y)
{
    return x/y;
}

int main(int argc, char const *argv[])
{
    const double result = division(14.5, 2.40);
    std::cout << "The result is " << result << ".\n";
    return 0;
}
