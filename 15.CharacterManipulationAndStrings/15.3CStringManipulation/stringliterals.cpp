#include <iostream>
#include <string>

int main() {
    std::string s1 = "Hello";
    std::string s2 = "World";

    // Example 1: Valid concatenation
    std::string s4 = s1 + ", ";  // ok: s1 is a std::string, ", " is a const char[]
    std::cout << "s4: " << s4 << std::endl;  // Outputs: Hello,

    // Example 2: Invalid concatenation
    // std::string s5 = "hello" + ", "; // error: both operands are const char[]
    // This would cause an error because neither operand is a std::string.
    // To fix it, you need to make sure at least one operand is a std::string:
    std::string s5 = std::string("hello") + ", "; // Now it's valid
    std::cout << "s5: " << s5 << std::endl;  // Outputs: hello,

    // Example 3: Valid concatenation
    std::string s6 = s1 + ", " + "world";  // ok: s1 is a std::string, so each + has a std::string operand
    std::cout << "s6: " << s6 << std::endl;  // Outputs: Hello, world

    // Example 4: Invalid concatenation
    // std::string s7 = "hello" + ", " + s2; // error: "hello" + ", " tries to add two const char[] types
    // This causes an error because the first concatenation "hello" + ", " involves two string literals.
    // To fix it, you can convert one of the literals to a std::string first:
    std::string s7 = std::string("hello") + ", " + s2;  // Now it's valid
    std::cout << "s7: " << s7 << std::endl;  // Outputs: hello, World

    return 0;
}
