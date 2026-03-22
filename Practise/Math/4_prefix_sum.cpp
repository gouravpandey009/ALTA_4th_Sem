#include <iostream>
#include <vector>
using namespace std;

/**
 * Prefix Sum Concept
 * Logic: prefix[i] stores the "total sum up to index i"
 * Formula for Range Sum (L to R): prefix[R] - prefix[L-1]
 */

int main() {
    int arr[] = {2, 4, 1, 3, 5};
    int n = sizeof(arr) / sizeof(arr[0]);

    // Step 1: Build the Prefix Array
    int prefix[n];
    prefix[0] = arr[0];

    for (int i = 1; i < n; i++) {
        prefix[i] = prefix[i - 1] + arr[i];
    }

    // Output the Prefix Array
    cout << "Original Array: [2, 4, 1, 3, 5]" << endl;
    cout << "Prefix Array:   [";
    for (int i = 0; i < n; i++) {
        cout << prefix[i] << (i == n - 1 ? "" : ", ");
    }
    cout << "]" << endl;

    // Step 2: Calculate Range Sum (Example: Sum from index 1 to 3)
    // Formula: prefix[R] - prefix[L-1]
    int L = 1, R = 3;
    int rangeSum = prefix[R] - prefix[L - 1];

    cout << "\nQuery: Sum from index " << L << " to " << R << endl;
    cout << "Calculation: prefix[" << R << "] - prefix[" << L-1 << "]" << endl;
    cout << "Result: " << prefix[R] << " - " << prefix[L-1] << " = " << rangeSum << endl;

    return 0;
}