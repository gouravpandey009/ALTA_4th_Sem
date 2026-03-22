#include <iostream>
using namespace std;

/**
 * Print 1 to N using Recursion
 * Logic: To print 1 to 5, we first tell recursion to "print 1 to 4",
 * then we manually print 5.
 */
 
void printNumbers(int n) {
    // 1. Base Case: The condition where recursion stops
    if (n == 0) {
        return;
    }

    // 2. Recursive Call: Call the function for a smaller problem (n-1)
    printNumbers(n - 1);

    // 3. Self Work: Print the current number
    // This happens WHILE the stack is "popping" back up
    cout << n << " ";
}

int main() {
    int n;
    cout << "--- Print 1 to N (Recursion) ---" << endl;
    cout << "Enter value of N: ";
    cin >> n;

    printNumbers(n);
    cout << endl;

    return 0;
}