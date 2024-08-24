#include <iostream>

template<typename T>
T add_em_up(T& lhs, T& rhs) {
    return lhs + rhs;
}

int main() {
    int a = 5;
    int b = 10;
    int result = add_em_up(a, b);  // Works for int
    std::cout << "Result: " << result << std::endl;  // Output: 15

    return 0;
}
