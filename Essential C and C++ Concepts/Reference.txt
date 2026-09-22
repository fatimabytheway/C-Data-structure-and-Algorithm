#include <iostream>

int main() {
    int x = 25;
    int& ref = x; // 'ref' is an alias (reference) for variable 'x'

    std::cout << "Original x: " << x << "\n";
    std::cout << "Reference ref: " << ref << "\n";

    // Modifying value using reference
    ref = 50;

    std::cout << "New value of x (after modifying ref): " << x << "\n";

    return 0;
}
