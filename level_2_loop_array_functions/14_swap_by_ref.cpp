#include <iostream>
void swapNumbers(int &a, int &b){
    int temp = b;
    b = a ;
    a = temp;
}

int main() {
    int num1 = 10;
    int num2 = 20;
    std::cout<<"Numbers before swapping are: "<< num1 << ", " << num2<<std::endl;
    swapNumbers(num1, num2);
    std::cout<<"Numbers after swapping are: "<< num1 << ", " << num2;

    return 0;
}