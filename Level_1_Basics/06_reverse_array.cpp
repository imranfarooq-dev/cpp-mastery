#include <iostream>
#include <vector>
#include <algorithm>

int main()
{
    int size;
    std::cout << "Enter the size of array: ";
    std::cin >> size;

    if (size <= 0)
    {
        std::cout << "Please enter a valid array size.\n";
        return 0;
    }

    std::vector<int> arr(size);
    std::cout << "Enter " << size << " elements: ";
    for (int i = 0; i < size; ++i)
    {
        std::cin >> arr[i];
    }

    std::cout << "\nOriginal array: ";
    for (int num : arr)
        std::cout << num << " ";

    // In-place reverse
    for (int i = 0; i < size / 2; ++i)
    {
        std::swap(arr[i], arr[size - i - 1]);
    }

    std::cout << "\nReversed array: ";
    for (int num : arr)
        std::cout << num << " ";
    std::cout << std::endl;

    return 0;
}
