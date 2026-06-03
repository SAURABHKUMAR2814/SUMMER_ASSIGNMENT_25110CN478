#include <iostream>

using namespace std;

int main() {
    int n1, n2;

    cout << "Enter two numbers: ";
    cin >> n1 >> n2;

    
    while (n1 != n2) {
        if (n1 > n2) {
            n1 = n1 - n2;
        } else {
            n2 = n2 - n1;
        }
    }

    // When n1 equals n2, that number is the GCD
    cout << "gcd is: " << n1;

    return 0;
}