#include <iostream>
using namespace std;

/**
 * Factorial Using Recursion
 * Logic: n! = n * factorial(n-1)
 * Base Case: 1! = 1
 */

int factorial(int n) {
    // 1. Base Case: The smallest version of the problem
    if (n <= 1) {
        return 1;
    }

    // 2. Recursive Case: n * (n-1)!
    return n * factorial(n - 1);
}

int main() {
    int n;
    cout << "--- Factorial (Recursion) ---" << endl;
    cout << "Enter a number: ";
    cin >> n;

    if (n < 0) {
        cout << "Factorial is not defined for negative numbers." << endl;
    } else {
        cout << "Factorial of " << n << " is: " << factorial(n) << endl;
    }

    return 0;
}