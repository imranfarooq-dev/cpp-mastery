#include <iostream>
#include <vector>

struct ArrayStats {
    int sum;
    double average;
};

ArrayStats sumAndAvgArray(const std::vector<int>& array) {
    int sum = 0;
    double average = 0;

    for (int i : array) {
        sum += i;
    }

    if (!array.empty()) {  
        average = static_cast<double>(sum) / array.size();
    }

    return {sum, average};
}

int main() {
    int size;
    std::vector<int> arr;

    std::cout << "Enter the size of array: ";
    std::cin >> size;

    std::cout << "Enter " << size << " elements: ";
    for (int i = 0; i < size; i++) {
        int elem;
        std::cin >> elem;
        arr.push_back(elem);
    }

    ArrayStats stats = sumAndAvgArray(arr);

    std::cout << "Sum of array: " << stats.sum << std::endl;
    std::cout << "Average of array: " << stats.average << std::endl;

    return 0;
}
