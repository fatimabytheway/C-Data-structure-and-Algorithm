#include <iostream>

int main() {
    int length = 10;
    int breadth = 5;

    int area = length * breadth;
    int perimeter = 2 * (length + breadth);

    std::cout << "Monolithic Area Calculation:\n";
    std::cout << "Area: " << area << "\n";
    std::cout << "Perimeter: " << perimeter << "\n";

    return 0;
}
