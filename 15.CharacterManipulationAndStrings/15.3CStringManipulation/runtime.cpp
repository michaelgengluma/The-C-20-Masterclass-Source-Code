#include <iostream>

// constexpr function
constexpr int square(int x) {
    return x * x;
}

int main() {
    const int a = 10;  // Initialized at runtime
    constexpr int b = square(4);  // Compile-time evaluation

    int runtimeValue = 5;
    const int c = square(runtimeValue);  // Valid: `c` is const, but initialized at runtime
    constexpr int d = square(runtimeValue);  // Error: not a constant expression

    std::cout << "a: " << a << ", b: " << b << ", c: " << c << std::endl;

    return 0;
}
