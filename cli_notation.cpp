#include <iostream>

enum class Operation
{
    ADD,
    SUBTRACT,
    MULTIPLAY,
    DIVIDE,
};

class Calculator
{
private:
    Operation operation;

public:
    Calculator(Operation operation);
    int calculate(int a, int b);
    ~Calculator();
};

Calculator::Calculator(Operation operation)
{
    this->operation = operation;
}

int Calculator::calculate(int a, int b)
{
    switch (this->operation)
    {
    case Operation::ADD:
        return a + b;

    case Operation::SUBTRACT:
        return a - b;

    case Operation::MULTIPLAY:
        return a * b;
    
    case Operation::DIVIDE:
        return a / b;

    default:
        std::cerr << "\aHold on! That's an invalid operation!\n";
        break;
    }
    return 0;
}

Calculator::~Calculator()
{
    std::cout << "Deleting calculator!\n";
}


int main(int argc, char const *argv[])
{
    Calculator calc{Operation::DIVIDE};
    Calculator calc2(Operation::ADD);
    auto calc3 = new Calculator(Operation::SUBTRACT);
    auto calc4 = new Calculator{Operation::MULTIPLAY};

    std::cout << calc.calculate(25, 5) << std::endl;
    std::cout << calc2.calculate(25, 5) << std::endl;
    std::cout << calc3->calculate(25, 5) << std::endl;
    std::cout << calc4->calculate(25, 5) << std::endl;

    delete calc3;
    delete calc4;
    return 0;
}

