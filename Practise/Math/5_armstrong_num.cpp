#include <iostream>
#include <cmath>
using namespace std;

/**
 * Armstrong Number Checker
 * Logic: Extract each digit, cube it, and add to sum.
 * Check if final sum == original number.
 */
bool isArmstrong(int n) {
    int originalNum = n;
    int sum = 0;
    
    // We use a while loop to process each digit
    while (n > 0) {
        int lastDigit = n % 10;          // Get the last digit (e.g., 3 from 153)
        sum += (lastDigit * lastDigit * lastDigit); // Cube it and add to sum
        n = n / 10;                      // Remove the last digit (e.g., 153 becomes 15)
    }
    
    return (sum == originalNum);
}

int main() {
    int num;
    cout << "--- Armstrong Number Checker ---" << endl;
    cout << "Enter a number: ";
    cin >> num;

    if (isArmstrong(num)) {
        cout << num << " is an Armstrong number!" << endl;
    } else {
        cout << num << " is NOT an Armstrong number." << endl;
    }

    return 0;
}