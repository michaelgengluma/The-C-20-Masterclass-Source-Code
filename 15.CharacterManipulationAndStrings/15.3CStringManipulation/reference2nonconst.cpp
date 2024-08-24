#include <iostream>

int main() {
    int i = 42;           // i is a non-const integer
    int &r1 = i;          // r1 is a non-const reference to i
    const int &r2 = i;    // r2 is a const reference to i

    // Initially, both r1 and r2 refer to the same object (i)
    std::cout << "Initial value of i: " << i << std::endl;   // Outputs: 42
    std::cout << "r1: " << r1 << std::endl;                  // Outputs: 42
    std::cout << "r2: " << r2 << std::endl;                  // Outputs: 42

    r1 = 0;  // r1 is non-const, so we can modify i through r1
    std::cout << "\nAfter r1 = 0:" << std::endl;
    std::cout << "Value of i: " << i << std::endl;           // Outputs: 0
    std::cout << "r1: " << r1 << std::endl;                  // Outputs: 0
    std::cout << "r2: " << r2 << std::endl;                  // Outputs: 0

    // Attempting to modify i through r2 would result in a compile-time error:
    // r2 = 0;  // error: r2 is a const reference

    i = 100;  // Directly modify i
    std::cout << "\nAfter i = 100:" << std::endl;
    std::cout << "Value of i: " << i << std::endl;           // Outputs: 100
    std::cout << "r1: " << r1 << std::endl;                  // Outputs: 100
    std::cout << "r2: " << r2 << std::endl;                  // Outputs: 100

    return 0;
}
