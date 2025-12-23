#include <iostream>

int main()
{
    int sum = 0,
        value = 0;

    /* Read input until end-of-file.
     * Calculate a running total of all values read.
     */
    while (std::cin >> value)
    {
        sum += value;   // This is equivalent to sum = sum + value;
    }

    std::cout << "The sum is " << sum << std::endl;

    return 0;
}
