// find.cpp
// finds the first object with a specified value
#include <iostream>
#include <algorithm> // for find()
#include <iterator>  // for std::begin() and std::end()
using namespace std;

int arr[] = { 11, 22, 33, 44, 55, 66, 77, 88 };

int main()
{
    int* ptr;
    ptr = find(begin(arr), end(arr), 33); // find first 33

    if (ptr != end(arr)) {
        cout << "First object with value 33 found at offset " << (ptr - arr) << endl;
    } else {
        cout << "Object with value 33 not found." << endl;
    }

    return 0;
}
