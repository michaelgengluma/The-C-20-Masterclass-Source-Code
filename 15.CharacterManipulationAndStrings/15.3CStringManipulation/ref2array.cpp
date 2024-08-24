#include <iostream>

int main() {
    int arr[] = {10, 20, 30, 40, 50};
    
    // Reference to the second element of the array
    int& ref = arr[1];

    // Modify the second element via the reference
    ref = 25;

    // Print the array to see the change
    std::cout << "Array after modification: ";
    for (int i = 0; i < 5; ++i) {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;

    return 0;
}
