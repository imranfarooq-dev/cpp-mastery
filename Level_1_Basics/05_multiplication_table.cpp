#include <iostream>

int main()
{
    int number;
    int nTimes;

    std::cout << "Enter a number: ";
    std::cin >> number;
    std::cout << "Enter the total number of multiplication: ";
    std::cin >> nTimes;

    for (int i = 1; i <= nTimes; i++)
    {
        std::cout << number << " * " << i << " = " << number * i << std::endl;
    }

    return 0;
}