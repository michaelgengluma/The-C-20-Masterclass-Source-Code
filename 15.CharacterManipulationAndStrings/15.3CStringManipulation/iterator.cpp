#include <iostream>
#include <string>
#include <cctype> // For toupper function

int main() {
    std::string s("some string");

    if (s.begin() != s.end()) { // make sure s is not empty
        auto it = s.begin(); // it denotes the first character in s
        *it = toupper(*it); // make that character uppercase
    }

    std::cout << s << std::endl; // Outputs: "Some string"

    return 0;
}
