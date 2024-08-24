#include <iostream>
#include <string>
#include <cctype> // For toupper and isspace functions

int main() {
    std::string s = "hello world";

    // Process characters in s until we run out of characters or we hit a whitespace
    for (auto it = s.begin(); it != s.end() && !isspace(*it); ++it) {
        *it = toupper(*it); // Capitalize the current character
    }

    std::cout << s << std::endl; // Outputs the modified string

    return 0;
}
