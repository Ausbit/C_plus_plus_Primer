#include <iostream>

int main()
{
    int new_value = 0,
        current_value = 0;

    // Read the first number and ensure that there is data to be processed.
    if (std::cin >> current_value)
    {
        int count = 1;  // To store the count for the current value we are processing.

        while(std::cin >> new_value) // Read the remaining numbers.
        {
            if (current_value == new_value) // Check if the values are the same.
            {
                ++count;    // Then, add 1 to the count variable.
            }
            else {  // Otherwise,
                // Print the count for the previous value.
                std::cout << current_value << " occurs "
                          << count << " times." << std::endl;
                
                // Remember the new value.
                current_value = new_value;

                // Reset the count variable.
                count = 1;
            }   // The inner if-else statement ends here.
        }   // The while loop ends here.

        //  Print the count for the last value in the input.
        std::cout << current_value << " occurs "
                  << count << " times." << std::endl;
    }   // The outer if statement ends here.

    return 0;
}
