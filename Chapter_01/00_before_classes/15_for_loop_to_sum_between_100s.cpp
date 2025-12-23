#include <iostream>

int main()
{
    int sum = 0;

    for (int i = -100; i <= 100; ++i)
    {
        sum += i;
    }

    std::cout << "The sum of values from -100 to +100 inclusive is ";
    std::cout << sum << "." << std::endl;

    return 0;
}
