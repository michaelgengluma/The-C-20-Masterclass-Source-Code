#include <iostream>

int main() {
    int *uninitializedPointer; // Declaration without initialization

    std::cout << "Uninitialized pointer value (address it points to): " << uninitializedPointer << std::endl;

    // Attempting to dereference the uninitialized pointer
    // This is dangerous and leads to undefined behavior
    std::cout << "Dereferencing uninitialized pointer: " << *uninitializedPointer << std::endl;

    return 0;
}
