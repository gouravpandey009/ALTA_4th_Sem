#include <iostream>
using namespace std;

/**
 * Print N to 1 using Recursion
 * Logic: Print the current number 'n' first, 
 * then tell recursion to handle the rest (n-1).
 */
 
void printReverse(int n) {
    // 1. Base Case: Stop when we reach 0
    if (n == 0) {
        return;
    }

    // 2. Self Work: Print BEFORE the recursive call
    cout << n << " ";

    // 3. Recursive Call: Pass the smaller problem
    printReverse(n - 1);
}

int main() {
    int n;
    cout << "--- Print N to 1 (Recursion) ---" << endl;
    cout << "Enter value of N: ";
    cin >> n;

    printReverse(n);
    cout << endl;

    return 0;
}