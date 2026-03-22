#include <iostream>
using namespace std;

/**
 * Array Frequency Concept
 * Logic: Use the value of the element as an index in a 'frequency' array.
 * freq[number]++ increases the count for that specific number.
 */
int main() {
    int arr[] = {1, 2, 2, 3, 3, 3, 5, 5, 1};
    int n = sizeof(arr) / sizeof(arr[0]);

    // Step 1: Create a Frequency Array 
    // {0} initializes all positions to zero
    int freq[10] = {0};

    // Step 2: Fill the frequency array
    for (int i = 0; i < n; i++) {
        int number = arr[i];
        freq[number]++; 
    }

    // Step 3: Print the results
    cout << "--- Array Frequency Count ---" << endl;
    for (int i = 0; i < 10; i++) {
        // Only print numbers that appeared at least once
        if (freq[i] > 0) {
            cout << "Number " << i << " appears " << freq[i] << " times" << endl;
        }
    }

    return 0;
}