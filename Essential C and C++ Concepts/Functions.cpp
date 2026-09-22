#include <iostream>

// Simple function to add two numbers
int addNumbers(int a, int b) {
    return a + b;
}

int main() {
    int result = addNumbers(5, 7);
    std::cout << "Result of addition: " << result << "\n";

    return 0;
}

