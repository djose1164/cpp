#include <iostream>

enum class Test 
{
    A,
    B,
    C
};

std::string test_creator(Test test)
{
    switch (test)
    {
        case Test::A:
            return "Letter A";

        case Test::B:
            return "Letter B";
        
        case Test::C:
            return "Letter C";
    }

    return "Letter not found";
}

int main(int argc, char const *argv[])
{
    std::cout << test_creator(Test::B) << std::endl;   
    return 0;
}
