#include <iostream>

int main()
{
    int number;
    std::cout << "Enter a number: ";
    std::cin >> number;

    if (number < 0) {
        std::cout << "Negative numbers are not considered palindromes." << std::endl;
        return 0;
    }

    int originalNumber = number;
    int reversed = 0;

    while (number > 0)
    {
        int remainder = number % 10;
        reversed = reversed * 10 + remainder;
        number /= 10;
    }

    if (originalNumber == reversed)
    {
        std::cout << originalNumber << " is a palindrome number." << std::endl;
    }
    else
    {
        std::cout << originalNumber << " is not a palindrome number." << std::endl;
    }

    return 0;
}
