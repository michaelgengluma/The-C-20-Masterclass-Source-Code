#include <iostream>

int main() {
    int* y = new int(42);  // Dynamically allocate memory and store the address in y
    std::cout << "Value of *y: " << *y << std::endl;  // Print the value stored at the allocated memory
    std::cout << "Address stored in y: " << y << std::endl;  // Print the memory address stored in y

    delete y;  // Deallocate the memory, freeing it for reuse by the system

    std::cout << "After delete, y still holds the address: " << y << std::endl;
    // Accessing *y here would be dangerous, as the memory has been deallocated
    std::cout << "Value of *y: " << *y << std::endl;  // Print the value stored at the same memory

    // Optionally, set y to nullptr to avoid using a dangling pointer
    y = nullptr;
    std::cout << "After setting y to nullptr, y holds the address: " << y << std::endl;
    //std::cout << "Value of *y: " << *y << std::endl; 

    return 0;
}
