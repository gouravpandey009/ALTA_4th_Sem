#include <iostream>
using namespace std;

// Step 1: Need GCD function first (Euclidean Algorithm)
int get_gcd(int a, int b) {
    while (b != 0) {
        int r = a % b;
        a = b;
        b = r;
    }
    return a;
}

// Step 2: Use the formula: (a * b) / GCD
int get_lcm(int a, int b) {
    if (a == 0 || b == 0) return 0;
    
    int gcd = get_gcd(a, b);
    
    // Logic: Multiply first, then divide by GCD to remove the overlap
    return (a * b) / gcd;
}

int main() {
    int num1 = 12, num2 = 18;

    cout << "--- LCM Calculation ---" << endl;
    cout << "Numbers: " << num1 << " and " << num2 << endl;
    
    int gcd_val = get_gcd(num1, num2);
    int lcm_val = get_lcm(num1, num2);
    
    cout << "GCD is: " << gcd_val << endl;
    cout << "LCM is: (" << num1 << " * " << num2 << ") / " << gcd_val << " = " << lcm_val << endl;

    return 0;
}