#include <iostream>

int main()
{
    int num;
    std::cout << "Enter a number: ";
    std::cin >> num;

    int totalDigit = 0;
    int sum = 0;
    int reverse = 0;

    while (num > 0)
    {
        int remainder = num % 10;
        reverse = remainder + (reverse * 10);
        sum = sum + remainder;
        totalDigit = totalDigit + 1;
        num = num / 10;
    }
    std::cout << "Total digits: " << totalDigit << std::endl;
    std::cout << "Sum of digits: " << sum << std::endl;
    std::cout << "Reversed numbers : " << reverse << std::endl;

    return 0;
}