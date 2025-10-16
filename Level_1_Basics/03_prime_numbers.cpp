#include <iostream>
#include <vector>
#include<cmath>

void printPrimeNumber(int num)
{

    std::vector<int> primeNumbers;

    for (int i = 2; i <= num; i++)
    {

        bool isPrime = true;
        for (int y = 2; y < std::sqrt(i); y++)
        {
            if (i % y == 0)
            {
                isPrime = false;
                break;
            }
        }
        if (isPrime)
        {
            primeNumbers.push_back(i);
        }
    }
    for (int n : primeNumbers)
    {
        std::cout << n << " ";
    }
    std::cout << std::endl;
}

int main()
{

    int n;
    std::cout << "Enter a number: ";
    std::cin >> n;

    printPrimeNumber(n);
}