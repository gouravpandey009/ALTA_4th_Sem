#include <iostream>
#include <vector>
#include <algorithm> 
#include <cmath>   
using namespace std;

/**
 * Divisors of a Number
 * Logic: A divisor 'i' always has a buddy 'n/i'. 
 * We only need to check up to sqrt(n).
 */
void printDivisors(int n) {
    vector<int> divisors;

    // The Optimized Loop: i * i <= n is the same as i <= sqrt(n)
    for (int i = 1; i * i <= n; i++) {
        if (n % i == 0) {
            divisors.push_back(i); // Found the first divisor
            
            // Check if the buddy (n/i) is different
            // e.g., for 36, if i=6, n/i=6. We don't want to add 6 twice.
            if (i != n / i) {
                divisors.push_back(n / i);
            }
        }
    }

    sort(divisors.begin(), divisors.end());

    cout << "Divisors of " << n << " are: ";
    for (int d : divisors) {
        cout << d << " ";
    }
    cout << endl;
}

int main() {
    int n;
    cout << "--- Divisor Finder ---" << endl;
    cout << "Enter a number: ";
    cin >> n;

    printDivisors(n);

    return 0;
}