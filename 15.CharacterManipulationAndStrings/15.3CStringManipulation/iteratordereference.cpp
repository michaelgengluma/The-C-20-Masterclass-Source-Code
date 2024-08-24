#include <iostream>
#include <vector>
#include <string>
#include <utility> // for std::pair

int main() {
    // Creating a vector of pairs
    std::vector<std::pair<int, std::string>> vec = {
        {1, "one"},
        {2, "two"},
        {3, "three"}
    };

    // Demonstrating *iter
    auto iter = vec.begin(); // iter points to the first element in the vector
    std::cout << "First element: (" << (*iter).first << ", " << (*iter).second << ")\n";

    // Demonstrating iter->mem
    std::cout << "Accessing the first element using iter->: (" << iter->first << ", " << iter->second << ")\n";

    // Move the iterator to the next element
    ++iter;
    std::cout << "Second element: (" << (*iter).first << ", " << (*iter).second << ")\n";

    return 0;
}
