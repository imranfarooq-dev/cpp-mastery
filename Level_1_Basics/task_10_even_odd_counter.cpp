#include <iostream>
#include <vector>

int main()
{

    int size;
    std::cout << "Enter the size of array: ";
    std::cin >> size;

    std::vector<int> arr;

    std::cout << "Enter the array elements: ";
    for (int i = 0; i < size; i++)
    {
        int elem;
        std::cin >> elem;
        arr.push_back(elem);
    }

    std::vector<int> evenArray;
    std::vector<int> oddArray;

    for (int elem : arr)
    {
        if ((elem % 2) == 0)
        {
            evenArray.push_back(elem);
        }
        else
        {
            oddArray.push_back(elem);
        }
    };
    std::cout << "Number of even elements in array are: " << evenArray.size() << std::endl;
    std::cout << "Number of odd elements in array are: " << oddArray.size() << std::endl;

    return 0;
}