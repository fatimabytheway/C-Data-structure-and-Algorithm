#include <iostream>

// Function that receives an array and its size
void printArray(int arr[], int size) {
    std::cout << "Array inside function: ";
    for (int i = 0; i < size; i++) {
        std::cout << arr[i] << " ";
    }
    std::cout << "\n";
}

int main() {
    int numbers[4] = {1, 2, 3, 4};
    printArray(numbers, 4);

    return 0;
}
