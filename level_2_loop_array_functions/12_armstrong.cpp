#include <iostream>
#include <vector>
#include <cmath>

void armStrong(int n)
{
    int original = n;
    std::vector<int> totalDigits;
    int totalSum = 0;

    while (original > 0)
    {
        int remainder = original % 10;
        totalDigits.push_back(remainder);
        original = original / 10;
    }

    for (int n : totalDigits)
    {
        totalSum += pow(n, totalDigits.size());
    }

    if (totalSum == n)
    {
        std::cout << n << " is a armstrong number." << std::endl;
    }
    else
    {
        std::cout << n << " is not a armstrong number." << std::endl;
    }
}

int main()
{

    armStrong(153);
    armStrong(123);

    return 0;
}