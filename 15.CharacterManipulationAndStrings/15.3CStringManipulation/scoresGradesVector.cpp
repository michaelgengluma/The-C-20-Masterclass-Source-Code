#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<unsigned> scores(11, 0); // 11 buckets, all initially 0
    vector<unsigned> grades = {42, 65, 95, 100, 39, 67, 95, 76, 88, 76, 83, 92, 76, 93}; // List of grades

    for (unsigned grade : grades) {
        if (grade <= 100) { // handle only valid grades
            ++scores[grade / 10]; // increment the counter for the current cluster
        }
    }

    // Output the number of grades in each cluster
    for (unsigned i = 0; i < scores.size(); ++i) {
        if (i == 10)
            cout << "100: " << scores[i] << endl;
        else
            cout << i * 10 << "--" << (i * 10 + 9) << ": " << scores[i] << endl;
    }

    return 0;
}
