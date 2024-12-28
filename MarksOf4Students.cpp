#include <iostream>
#include <vector>
#include <climits>

using namespace std;

int findLargestElement(int arr[][3], int rows, int cols) {
    int maxElement = INT_MIN;
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            if (arr[i][j] > maxElement) {
                maxElement = arr[i][j];
            }
        }
    }
    return maxElement;
}

int main() {
    const int numStudents = 4;
    const int numSubjects = 2;

    vector<vector<int>> studentMatrix(numStudents, vector<int>(numSubjects + 1));

    for (int i = 0; i < numStudents; ++i) {
        cout << "Enter roll number for student " << i + 1 << ": ";
        cin >> studentMatrix[i][0];
        for (int j = 1; j <= numSubjects; ++j) {
            cout << "Enter marks for subject " << j << " for student " << i + 1 << ": ";
            cin >> studentMatrix[i][j];
        }
    }

    vector<vector<int>> vec; // Define vec to avoid compilation error
    vector<int> v3; // Define v3 to avoid compilation error
    vec.push_back(v3);

    for (int i = 0; i < vec.size(); i++) {
        for (int j = 0; j < vec[i].size(); j++) {
            cout << vec[i][j] << " ";
        }
        cout << endl;
    }

    const int rows = 3;
    const int cols = 3;
    int myArray[rows][cols];

    cout << "Enter elements of the 2D array:" << endl;
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            cout << "Element at position (" << i + 1 << ", " << j + 1 << "): ";
            cin >> myArray[i][j];
        }
    }

    int largestElement = findLargestElement(myArray, rows, cols);

    cout << "\nRoll Number\tSubject 1\tSubject 2\n";
    for (int i = 0; i < numStudents; ++i) {
        cout << studentMatrix[i][0] << "\t\t";
        for (int j = 1; j <= numSubjects; ++j) {
            cout << studentMatrix[i][j] << "\t\t";
        }
        cout << "\n";
    }

    return 0;
}
