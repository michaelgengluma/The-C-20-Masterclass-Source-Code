#include <iostream>

int* getPointer() {
    static int x = 42;  // Static local variable with a fixed address
    return &x;  // Return a pointer to the static local variable
}

int main() {
    int* p = getPointer();  // Initialize regular pointer with the address returned by getPointer()

    std::cout << "Value pointed by p: " << *p << std::endl;  // Output the value of the static local variable
    std::cout << "Address of p: " << p << std::endl;  // Output the address stored in p

    *p = 100;  // Modify the static local variable through the pointer
    std::cout << "Value pointed by p after modification: " << *p << std::endl;

    int* p2 = getPointer();  // Get the pointer again
    std::cout << "Value pointed by p2: " << *p2 << std::endl;

    return 0;
}