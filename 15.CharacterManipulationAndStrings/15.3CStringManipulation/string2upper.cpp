#include <iostream>
#include <string>
#include <cctype> // For toupper function

int main() {
    std::string s("hello world!!!");

    if (!s.empty())             // make sure there's a character in s[0]
    s[0] = toupper(s[0]);

    // Convert s to uppercase
    //for (auto &c : s)   // for every char in s (note: c is a reference)
    //    c = toupper(c); // c is a reference, so the assignment changes the char in s

    std::cout << s << std::endl; // Outputs the modified string

    return 0;
}
