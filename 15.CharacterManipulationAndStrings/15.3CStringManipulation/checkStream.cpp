#include <iostream>
#include <string>

int main() {
    std::string word;
    std::cout << "Enter words (Ctrl+D to end): " << std::endl;

    while (std::cin >> word) {
        std::cout << "You entered: " << word << std::endl;
    }

    if (std::cin.eof()) {
        std::cout << "End of input reached." << std::endl;
    } else if (std::cin.fail()) {
        std::cerr << "Input error encountered!" << std::endl;
    }

    return 0;
}
