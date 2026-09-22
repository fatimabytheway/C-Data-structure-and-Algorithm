#include <iostream>

class Counter {
private:
    int count;

public:
    void setCount(int value) {
        count = value;
    }

    int getCount() {
        return count;
    }
};

int main() {
    Counter c;
    c.setCount(5);
    std::cout << "Current Count: " << c.getCount() << "\n";

    return 0;
}
