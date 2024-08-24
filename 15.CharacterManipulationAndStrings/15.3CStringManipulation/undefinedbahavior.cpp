#include <iostream>

int main() {
    int i = 0;
    std::cout << i << " " << ++i << std::endl; // Undefined behavior
    return 0;
}
