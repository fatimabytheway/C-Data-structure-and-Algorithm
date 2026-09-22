#include <iostream>

int main() {
    // Declaring and initializing an array of integers
    int numbers[5] = {10, 20, 30, 40, 50};

    // Printing elements using a loop
    std::cout << "Array elements:\n";
    for (int i = 0; i < 5; i++) {
        std::cout << "Element at index " << i << ": " << numbers[i] << "\n";
    }

    return 0;
}
