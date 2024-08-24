#include <iostream>
#include <fstream>
#include <string>
#include <vector>

using namespace std;

int main() {
    // Step 1: Declare a vector to hold the text from the file
    vector<string> text;

    // Step 2: Open the text file
    ifstream infile("example.txt");
    if (!infile) {
        cerr << "Unable to open file example.txt";
        return 1;
    }

    // Step 3: Read the file line by line and store each line in the vector
    string line;
    while (getline(infile, line)) {
        text.push_back(line);
    }

    // Step 4: Close the file
    infile.close();

    // Step 5: Print the contents of the first paragraph
    for (auto it = text.cbegin(); it != text.cend() && !it->empty(); ++it) {
        cout << *it << endl;
    }

    return 0;
}
