#include <iostream>
#include <string>

int main() {
    std::string line;

    std::cout << "Please enter a line of text: ";
    
    // Use getline to read an entire line of text into the string 'line'
    std::getline(std::cin, line);

    // Output the line that was read
    std::cout << "You entered: " << line << std::endl;

    return 0;
}
