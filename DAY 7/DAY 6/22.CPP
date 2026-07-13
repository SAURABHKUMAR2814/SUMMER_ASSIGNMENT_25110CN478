#include <iostream>
using namespace std;

int main()
{
    int n, rem, dec = 0, base = 1;

    cout << "Enter a binary number: ";
    cin >> n;

    while(n > 0)
    {
        rem = n % 10;
        dec = dec + rem * base;
        base = base * 2;
        n = n / 10;
    }

    cout << "Decimal number is: " << dec;

    return 0;
}