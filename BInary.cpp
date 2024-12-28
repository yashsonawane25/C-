#include <iostream>

using namespace std;

int binarySearch(int arr[], int size, int x) {
    int l = 0, r = size - 1;

    while (l <= r) {
        int m = l + (r - l) / 2; // Calculate the middle index

        // Check if x is present at mid
        if (arr[m] == x)
            return m;

        // If x is greater, ignore the left half
        if (arr[m] < x)
            l = m + 1;

        // If x is smaller, ignore the right half
        else
            r = m - 1;
    }

    // If we reach here, then the element was not present
    return -1;
}

int main() {
    int arr[] = {2, 3, 4, 10, 40};
    int size = sizeof(arr) / sizeof(arr[0]);
    int x;

    cout << "Enter the element to search: ";
    cin >> x;

    int result = binarySearch(arr, size, x);

    if (result != -1)
        cout << "Element found at index: " << result << endl;
    else
        cout << "Element not found in the array" << endl;

    return 0;
}
