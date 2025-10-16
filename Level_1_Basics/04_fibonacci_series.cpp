#include <iostream>

int main()
{
    int n;
    int prev1 = 1;
    int prev2 = 0;
    std::cout << "Enter the number of terms: ";
    std::cin >> n;
    if(n<3){
        std::cout<<"Please enter a valid term.";
        return 0;
    }
    
    std::cout << prev2 << " ";

   for (int i = 2; i < n; i++)
    {
        int curr = prev1 + prev2;
        prev2 = prev1;
        prev1 = curr;
        std::cout << curr << " ";
    }

    return 0;
}