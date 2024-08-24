#include <iostream>

int main() {
    // Case 1: Initializing an array
    int ia[] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9}; // ia is an array of ten ints

    // Case 2: Using auto with an array
    auto ia2(ia); // ia2 is deduced as int*, pointing to the first element of ia

    // Trying to assign an int value to ia2
    // ia2 = 42; // This line would cause an error: ia2 is a pointer, and we can't assign an int to a pointer

    // Showing that ia2 is a pointer
    std::cout << "ia2 points to the first element of ia: " << *ia2 << std::endl;

    // Case 3: Using decltype with an array
    decltype(ia) ia3 = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9}; // ia3 is deduced as an array of ten ints

    // Trying to assign a pointer to ia3
    // int *p = ia;
    // ia3 = p; // This line would cause an error: can't assign an int* to an array

    // Modifying an element in ia3
    int i = 42;
    ia3[4] = i; // Ok: assigns the value of i to the element at index 4 in ia3

    // Printing ia3 to show the modification
    std::cout << "Contents of ia3 after modification: ";
    for (int j = 0; j < 10; ++j) {
        std::cout << ia3[j] << " ";
    }
    std::cout << std::endl;

    return 0;
}
