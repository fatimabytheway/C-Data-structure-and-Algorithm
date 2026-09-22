#include <iostream>

// Defining a simple structure
struct Student {
    int rollNumber;
    double marks;
};

int main() {
    // Creating a structure variable
    Student s1;

    // Assigning values
    s1.rollNumber = 101;
    s1.marks = 88.5;

    // Printing values
    std::cout << "Student Roll Number: " << s1.rollNumber << "\n";
    std::cout << "Student Marks: " << s1.marks << "\n";

    return 0;
}
