#include <iostream>

void calculateNum()
{
    float num1, num2;
    char opr;
    std::cout << "Please enter two number: " << std::endl;
    std::cin >> num1;
    std::cin >> num2;
    float result;
    char reCal;

    std::cout << "Enter operator (+, -, *, /, %): ";
    std::cin >> opr;

    switch (opr)
    {
    case '+':
        result = num1 + num2;
        break;
    case '-':
        result = num1 - num2;
        break;
    case '/':
        if (num2 == 0)
        {
            std::cout << "Error: Division by zero is not allowed." << std::endl;
            return;
        }

        result = num1 / num2;
        break;
    case '*':
        result = num1 * num2;
        break;
    default:
        std::cout << "Please enter a valid operator" << std::endl;
        return;
    };

    std::cout << num1 << " " << opr << " " << num2 << " = " << result << std::endl;

    std::cout << "Do you want to perform another calculation? (y/n):";
    std::cin >> reCal;
    if (reCal == 'y')
    {
        calculateNum();
    }
    else
    {
        return;
    }
}

int main()
{
    calculateNum();
    return 0;
}
