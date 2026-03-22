#include <iostream>
using namespace std;

/**
 * Sum of First N Numbers using Recursion
 * Logic: sum(n) = n + sum(n - 1)
 * Base Case: sum(0) = 0
 */
int sum(int n) {
    // 1. Base Case: The smallest subproblem
    if (n == 0) {
        return 0;
    }

    // 2. Recursive Case: current n + sum of numbers before it
    return n + sum(n - 1);
}

int main() {
    int n;
    cout << "--- Sum of First N Numbers (Recursion) ---" << endl;
    cout << "Enter value of N: ";
    cin >> n;

    if (n < 0) {
        cout << "Please enter a positive integer." << endl;
    } else {
        cout << "The sum of first " << n << " numbers is: " << sum(n) << endl;
    }

    return 0;
}