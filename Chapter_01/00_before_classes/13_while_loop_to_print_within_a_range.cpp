#include <iostream>

int main()
{
    int big = 0,
        small = 0,
        number = 0;

    std::cout << "Hey!" << std::endl;
    std::cout << "Enter two numbers you like :)" << std::endl;
    std::cout << "  >> ";

    std::cin >> big;
    std::cin >> small;

    if (big < small)
    {
        number = small;
        small = big;
        big = number;
    }

    number = big - small;

    while (number > 0)
    {
        std::cout << "You like " << small;
        std::cout << ", and you also like " << big;
        std::cout << ":)" << std::endl;

        --number;
    }

    return 0;
}
