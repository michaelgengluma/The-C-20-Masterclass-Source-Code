#include <iostream>
#include <string>

int main() {
    std::string text = "Hello, World!";
    
    // Define a variable of type string::size_type
    std::string::size_type length = text.size();  // Get the length of the string

    std::cout << "The length of the string is: " << length << std::endl;

    // Loop through the string using string::size_type for the index
    for (std::string::size_type i = 0; i < length; ++i) {
        std::cout << "Character at position " << i << " is: " << text[i] << std::endl;
    }

    return 0;
}
