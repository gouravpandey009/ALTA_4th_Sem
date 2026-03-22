#include <iostream>
#include <cmath>
using namespace std;

/**
 * Prime Number Checker (Optimized)
 * Logic: If no number from 2 to sqrt(n) divides n, it's prime.
 * Time Complexity: O(sqrt(N))
 */
bool isPrime(int n) {
    // 1 and numbers less than 1 are not prime
    if (n <= 1) return false;
    
    // 2 and 3 are prime
    if (n <= 3) return true;

    // Check from 2 up to sqrt(n)
    // Using i * i <= n is faster than calling sqrt() every time
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) {
            return false; // Found a divisor, so not prime
        }
    }

    return true; // No divisors found, it's prime!
}

int main() {
    int num;
    cout << "--- Prime Number Checker ---" << endl;
    cout << "Enter a number: ";
    cin >> num;

    if (isPrime(num)) {
        cout << num << " is a Prime Number!" << endl;
    } else {
        cout << num << " is NOT a Prime Number." << endl;
    }

    return 0;
}