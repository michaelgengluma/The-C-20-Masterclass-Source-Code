#include <iostream>

constexpr int square(int x) {
    return x * x;
}

int getRuntimeValue() {
    return 10;
}

int main() {
    int runtimeValue = getRuntimeValue();

    // Valid: `runtimeValue` is a runtime value, so this is fine.
    int result1 = square(runtimeValue);  // This is allowed; square is evaluated at runtime.

    // Invalid: `runtimeValue` is not a constant expression, so it cannot be used to initialize a `constexpr` variable.
    constexpr int result2 = square(runtimeValue);  // Compile-time error!

    std::cout << "Result1: " << result1 << std::endl;

    return 0;
}
