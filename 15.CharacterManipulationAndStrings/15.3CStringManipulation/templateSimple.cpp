#include <iostream>

template<typename T>
T max(T a, T b) {
    return b < a ? a : b;
}

int main() {
    std::cout << max(10, 20) << std::endl;       // Output: 20
    std::cout << max(15.5, 10.3) << std::endl;   // Output: 15.5
    std::cout << max('x', 'y') << std::endl;     // Output: y
    return 0;
}
