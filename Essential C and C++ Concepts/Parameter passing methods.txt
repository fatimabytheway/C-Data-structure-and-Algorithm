#include <iostream>

// 1. Pass by Value
void passByValue(int num) {
    num = 100; // Changes local copy only
}

// 2. Pass by Address (Pointer)
void passByAddress(int* ptr) {
    *ptr = 200; // Modifies actual variable
}

// 3. Pass by Reference
void passByReference(int& ref) {
    ref = 300; // Modifies actual variable
}

int main() {
    int val = 10;

    passByValue(val);
    std::cout << "After Pass by Value: " << val << "\n";

    passByAddress(&val);
    std::cout << "After Pass by Address: " << val << "\n";

    passByReference(val);
    std::cout << "After Pass by Reference: " << val << "\n";

    return 0;
}
