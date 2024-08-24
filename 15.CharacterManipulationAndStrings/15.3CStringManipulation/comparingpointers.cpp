#include <iostream>

int main() {
    const char ca1[] = "A string example";
    const char ca2[] = "A different string";

    if (ca1 < ca2) {
        std::cout << "ca1 is less than ca2" << std::endl;
    } else {
        std::cout << "ca1 is not less than ca2" << std::endl;
    }

    return 0;
}
