#include <iostream>
using namespace std;

/**
 * Power Function using Recursion (x^n)
 * Logic: power(x, n) = x * power(x, n - 1)
 * Base Case: x^0 = 1
 */
 
long long power(int x, int n) {
    // 1. Base Case: Any number to the power of 0 is 1
    if (n == 0) {
        return 1;
    }

    // 2. Recursive Case: x multiplied by x^(n-1)
    return x * power(x, n - 1);
}

int main() {
    int x, n;
    cout << "--- Power Function (x^n) ---" << endl;
    cout << "Enter base (x): ";
    cin >> x;
    cout << "Enter exponent (n): ";
    cin >> n;

    if (n < 0) {
        cout << "This basic version handles positive exponents only." << endl;
    } else {
        cout << x << " raised to the power " << n << " is: " << power(x, n) << endl;
    }

    return 0;
}