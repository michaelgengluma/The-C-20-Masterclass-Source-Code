#include <iostream>

int main() {
    int x = 5;

    // Prefix increment: increments x and yields an lvalue
    ++x;  // x is now 6
    std::cout << "After prefix increment: x = " << x << std::endl;

    // You can use the result of a prefix increment as an lvalue
    ++x = 10;  // First increments x (x becomes 7), then assigns 10 to x
    std::cout << "After assignment to prefix increment: x = " << x << std::endl;

    // Postfix increment: increments x but yields the value before increment
    int y = x++; // y gets the value 10 (x before increment), then x becomes 11
    std::cout << "After postfix increment: x = " << x << ", y = " << y << std::endl;

    return 0;
}