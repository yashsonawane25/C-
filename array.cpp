#include <iostream>
#include <vector>

using namespace std;

int main() {
    // Initialize the vector with some elements
    vector<int> v = {10, 20, 30, 40, 50};

    // Insert 100 at the third position (index 2)
    v.clear();

    // Print the updated vector
    cout << "Updated vector: ";
    for (int i : v) {
        cout << i << " ";
    }
    cout << endl;

    return 0;
}
