#include <iostream>

int main() {
    int a = 10;
    int* ptr = &a; // Pointer holding the memory address of variable 'a'

    std::cout << "Value of a: " << a << "\n";
    std::cout << "Address of a (&a): " << &a << "\n";
    std::cout << "Pointer value (ptr): " << ptr << "\n";
    std::cout << "Value via pointer (*ptr): " << *ptr << "\n";

    return 0;
}
