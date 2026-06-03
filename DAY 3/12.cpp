#include <iostream>

using namespace std;

int main() {
    int a, b;
    cout << "Enter two numbers: ";
    cin >> a >> b;

    int m = a;
    int n = b;

    while (m != n) {
        if (m > n) {
            m = m - n;
        } else {
            n = n - m;
        }
    }

    
    int lcm = (a * b) / m;

    cout << "LCM is: " << lcm;

    return 0;
}