#include <iostream>

int main()
{
    int sum = 0,
        val = 1;

    // Keep executing the while loop as long as val is less than or equal to 10.
    while (val <= 10)
    {
        sum += val; // Assigns the value of (sum + val) to val.
        ++val;      // Adds 1 to val.
    }

    std::cout << "The sum of 1 to 10 inclusive is "
              << sum << "." << std::endl;

    return 0;
}
