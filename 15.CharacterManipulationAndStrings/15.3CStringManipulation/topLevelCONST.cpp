#include <iostream>

int main() {
    int i = 0;  // Non-const integer
    int *const p1 = &i;  // p1 is a constant pointer to int; top-level const

    *p1 = 42;  // This is valid because p1 points to a non-const int, so we can modify the value of i
    // p1 = &other_var;  // Error: p1 is a const pointer; cannot change what it points to

    const int ci = 42;  // ci is a constant integer; top-level const

    // ci = 100;  // Error: ci is const, so we cannot change its value

    const int *p2 = &ci;  // p2 is a pointer to a const int; low-level const

    p2 = &i;  // This is valid because p2 itself is not const; we can change what it points to
    // *p2 = 100;  // Error: p2 points to a const int, so we cannot modify the value through p2

    const int *const p3 = p2;  // p3 is a const pointer to a const int; both top-level and low-level const

    // p3 = &i;  // Error: p3 is a const pointer; cannot change what it points to
    // *p3 = 100;  // Error: p3 points to a const int; cannot modify the value through p3

    const int &r = ci;  // r is a reference to a const int; low-level const

    // r = 100;  // Error: r is a reference to a const int, so we cannot modify the value of ci through r

    // Output to verify the values
    std::cout << "i: " << i << std::endl;           // Outputs: i: 42
    std::cout << "ci: " << ci << std::endl;         // Outputs: ci: 42
    std::cout << "*p2: " << *p2 << std::endl;       // Outputs: *p2: 42
    std::cout << "*p3: " << *p3 << std::endl;       // Outputs: *p3: 42
    std::cout << "r: " << r << std::endl;           // Outputs: r: 42

    return 0;
}
