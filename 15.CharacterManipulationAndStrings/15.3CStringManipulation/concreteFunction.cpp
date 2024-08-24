#include <iostream>

class array_of_ints {
    int data[10] = {};  // An array of 10 integers initialized to zero
public:
    int size() const { return 10; }  // Returns the size of the array (always 10)
    int& at(int i) { return data[i]; }  // Provides access to the element at index i
};

void double_each_element(array_of_ints& arr)
{
    for (int i = 0; i < arr.size(); ++i) {
        arr.at(i) *= 2;  // Doubles the value of each element in the array
    }
}


int main() {
    array_of_ints arr;

    // Initialize the array with some values
    for (int i = 0; i < arr.size(); ++i) {
        arr.at(i) = i + 1;  // Fill the array with values 1 through 10
    }

    // Double each element in the array
    double_each_element(arr);

    // Print the doubled values
    for (int i = 0; i < arr.size(); ++i) {
        std::cout << arr.at(i) << " ";  // Output should be: 2 4 6 8 10 12 14 16 18 20
    }

    return 0;
}
