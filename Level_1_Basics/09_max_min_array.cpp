#include <iostream>
#include <vector>
#include <climits>

int main() {
    int size;
    std::vector<int> arr;

    std::cout << "Enter the size of array: ";
    std::cin >> size;

    if (size <= 0) {
        std::cout << "Please enter a valid array size." << std::endl;
        return 0;
    }

    std::cout << "Enter " << size << " elements: ";
    for (int i = 0; i < size; i++) {
        int elem;
        std::cin >> elem;
        arr.push_back(elem);
    }

    int max = INT_MIN, min = INT_MAX;
    int maxIndex = 0, minIndex = 0;

    for (int i = 0; i < size; i++) {
        if (arr[i] > max) {
            max = arr[i];
            maxIndex = i;
        }
        if (arr[i] < min) {
            min = arr[i];
            minIndex = i;
        }
    }

    std::cout << "Minimum number: " << min << " (Index: " << minIndex << ")" << std::endl;
    std::cout << "Maximum number: " << max << " (Index: " << maxIndex << ")" << std::endl;

    return 0;
}
