#include <iostream>

// Template class works with any data type (int, double, char, etc.)
template <typename T>
class DataPrinter {
private:
    T data;

public:
    DataPrinter(T value) : data(value) {}

    void print() {
        std::cout << "Data value: " << data << "\n";
    }
};

int main() {
    // Instantiate with int
    DataPrinter<int> intObj(42);
    intObj.print();

    // Instantiate with double
    DataPrinter<double> doubleObj(3.14159);
    doubleObj.print();

    return 0;
}
