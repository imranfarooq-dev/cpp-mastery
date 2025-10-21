#include <iostream>
int add(int a, int b)
{
    return a + b;
}

int add(float a, int b)
{
    return a - b;
}
int main()
{
    int num1 = 10;
    int num2 = 20;

    std::cout << "sum of int and int is: " << add(num1, num2) << std::endl;
    std::cout << "difference of float and int is: " << add(30.10f, num1);

    return 0;
}