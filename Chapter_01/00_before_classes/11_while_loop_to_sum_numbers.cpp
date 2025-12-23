#include <iostream>

int main()
{
    int sum = 0,
        val = 50;

    // Keep executing the while loop as long as val is less than or equal to 100.
    while (val <= 100)
    {
        sum += val; // Assigns the value of (sum + val) to val.
        ++val;      // Adds 1 to val.
    }

    std::cout << "The sum of 50 to 100 inclusive is "
              << sum << "." << std::endl;

    return 0;
}
