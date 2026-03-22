#include <iostream>
using namespace std;

/**
 * GCD using Repeated Subtraction
 * Logic: If a > b, GCD(a, b) = GCD(a - b, b)
 * We keep subtracting until a == b.
 */
int gcd_subtraction(int a, int b) {
    // Handle case where one number is 0
    if (a == 0) return b;
    if (b == 0) return a;

    // Repeated subtraction until both numbers are equal
    while (a != b) {
        if (a > b) {
            a = a - b;
        } else {
            b = b - a;
        }
    }
    return a; // When a == b, that's our GCD
}

int main() {
    int num1 = 18, num2 = 12;

    cout << "--- GCD via Repeated Subtraction ---" << endl;
    cout << "Numbers: " << num1 << ", " << num2 << endl;
    
    int result = gcd_subtraction(num1, num2);
    
    cout << "GCD is: " << result << endl;

    return 0;
}


//Method_2 - Euclid_Algorithm

/*
#include <iostream>
using namespace std;

 * GCD using Euclidean Algorithm (Modulo)
 * Logic from your notes: GCD(a, b) = GCD(b, a % b)
 * This is faster because it skips multiple subtractions in one step.


int gcd_euclid(int a, int b) {
    while (b != 0) {
        int r = a % b; // Remainder
        a = b;         // Replace a with b
        b = r;         // Replace b with the remainder
    }
    return a; // When b becomes 0, a is the GCD
}

int main() {
    int num1 = 18, num2 = 12;

    cout << "--- GCD via Euclid's Algorithm ---" << endl;
    cout << "Numbers: " << num1 << ", " << num2 << endl;
    
    int result = gcd_euclid(num1, num2);
    
    cout << "GCD is: " << result << endl;

    return 0;
}

*/