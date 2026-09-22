#include <iostream>

// OOP groups data and behavior together inside a class
class Car {
public:
    std::string brand;

    void drive() {
        std::cout << "Driving the " << brand << " car!\n";
    }
};

int main() {
    Car myCar;
    myCar.brand = "Toyota";
    myCar.drive();

    return 0;
}
