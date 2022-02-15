#include "Sales_item.h"

int main(int argc, char const *argv[])
{
    Sales_item total;

    if (std::cin >> total)
    {
        Sales_item trans;
        while (std::cin >> trans)
        {
            // If we're still processing the same book.
            if (total.isbn() == trans.isbn())
                total += trans;
            std::cout << total << std::endl;
            total = trans; // total now refers to the next book.
        }
        std::cout << total << std::endl; // Print the last transaction.
    }
    else // No input. Warn the user.
    {
        std::cerr << "No data given!" << std::endl;
        return -1;
    }
    return 0;
}
