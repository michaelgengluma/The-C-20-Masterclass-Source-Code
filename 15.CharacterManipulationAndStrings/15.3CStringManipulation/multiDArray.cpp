#include <iostream>

int main() {
    // Define a 3x4 2D array
    int ia[3][4] = {
        {0, 1, 2, 3},  // first row
        {4, 5, 6, 7},  // second row
        {8, 9, 10, 11} // third row
    };

    // Define a 2x2x2 3D array
    int arr[2][2][2] = {
        {
            {12, 13},
            {14, 15}
        },
        {
            {16, 17},
            {18, 19}
        }
    };

    // Assigns the first element of arr to the last element in the last row of ia
    ia[2][3] = arr[0][0][0];

    // Print the modified ia array
    std::cout << "Modified ia array:" << std::endl;
    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 4; ++j) {
            std::cout << ia[i][j] << " ";
        }
        std::cout << std::endl;
    }

    // Binding a reference to the second row of ia
    int (&row)[4] = ia[1]; // binds row to the second four-element array in ia

    // Modify the row through the reference
    row[0] = 100;

    // Print the modified ia array after changing the second row
    std::cout << "\nModified ia array after changing second row:" << std::endl;
    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 4; ++j) {
            std::cout << ia[i][j] << " ";
        }
        std::cout << std::endl;
    }

    return 0;
}
