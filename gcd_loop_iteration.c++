#include <iostream>
using namespace std;

// Iterative version of GCD
int gcd(int a, int b) {
    while (b != 0) {
        int rem = a % b;
        a = b;
        b = rem;
    }
    return a;
}

int main() {
    int num1, num2;
    cout << "Enter two numbers: ";
    cin >> num1 >> num2;

    cout << "GCD of " << num1 << " and " << num2 << " is " << gcd(num1, num2) << endl;
    return 0;
}
