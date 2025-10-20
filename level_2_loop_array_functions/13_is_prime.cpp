#include <iostream>
#include <cmath>

void checkPrime(int n) {
    if (n < 2) {
        std::cout << n << " is not a prime number.";
        return;
    }

    bool isPrime = true;

    for (int i = 2; i*i <= n; i++) {
        if (n % i == 0) {
            isPrime = false;
            break;
        }
    }

    if (isPrime) {
        std::cout << n << " is a prime number.";
    } else {
        std::cout << n << " is not a prime number.";
    }
}

int main() {
    int num;
    std::cout << "Enter the number: ";
    std::cin >> num;

    checkPrime(num);

    return 0;
}
