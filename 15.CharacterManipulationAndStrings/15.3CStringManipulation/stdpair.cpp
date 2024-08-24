#include <iostream>
#include <utility>  // For std::pair

int main() {
    // Create a pair of an integer and a string
    std::pair<int, std::string> myPair = std::make_pair(1, "Hello");

    // Accessing the elements of the pair using .first and .second
    std::cout << "First element: " << myPair.first << std::endl;
    std::cout << "Second element: " << myPair.second << std::endl;

    // Modifying the elements
    myPair.first = 2;
    myPair.second = "World";

    std::cout << "Modified first element: " << myPair.first << std::endl;
    std::cout << "Modified second element: " << myPair.second << std::endl;

    return 0;
}
