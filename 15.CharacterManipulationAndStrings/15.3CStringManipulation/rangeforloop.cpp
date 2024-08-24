#include <iostream>
#include <vector>
#include <string>

int main() {
    // Example data: a vector of strings containing text
    std::vector<std::string> text = {
        "This is the first sentence.",
        "This is the second sentence",
        "",
        "This is the third sentence.",
        "Another sentence follows.",
        "",
        "This is the last sentence"
    };

    // Range-based for loop to process each element in the vector
    for (const auto &s : text) { // for each element in text
        std::cout << s; // print the current element

        // blank lines and those that end with a period get a newline
        // if (s.empty() || s[s.size() - 1] == '.') {
        //     std::cout << std::endl;
        // } else {
        //     std::cout << " "; // otherwise just separate with a space
        // }
    }

    return 0;
}
