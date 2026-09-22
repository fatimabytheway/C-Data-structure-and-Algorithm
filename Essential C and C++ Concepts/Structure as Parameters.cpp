#include <iostream>

struct Rectangle {
    int length;
    int breadth;
};

// Function receiving structure by value
void displayRectangle(Rectangle r) {
    std::cout << "Length: " << r.length << ", Breadth: " << r.breadth << "\n";
}

int main() {
    Rectangle rect = {10, 5};
    displayRectangle(rect);

    return 0;
}
