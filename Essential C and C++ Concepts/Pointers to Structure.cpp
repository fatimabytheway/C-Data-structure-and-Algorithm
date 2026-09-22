#include <iostream>

struct Person {
    int age;
};

int main() {
    Person p1 = {20};
    Person* ptr = &p1; // Pointer pointing to structure variable p1

    // Accessing structure members using pointer arrow operator (->)
    std::cout << "Age using pointer: " << ptr->age << "\n";

    return 0;
}


