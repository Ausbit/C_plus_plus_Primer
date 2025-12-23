#include <iostream>

int main()
{
    int sum = 0,
        range = 0;

    std::cout << "Hey friend, let's add some numbers :)" << std::endl;
    std::cout << "How many do you have in mind? >> ";
    std::cin >> range;
    
    std::cout << std::endl;
    std::cout << "Alright fam!"<< std::endl;
    std::cout << "Enter " << range << " numbers, and press Enter :> "; 
    for (int value = 0; range > 0; --range)
    {
        std::cin >> value;
        sum += value;
    }

    std::cout << std::endl;
    std::cout << "The sum of your beautiful numbers is ";
    std::cout << sum << std::endl;

    return 0;
}
