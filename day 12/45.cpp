#include <iostream>
using namespace std;

void palindrome(int n)
{
    int rev = 0, temp = n;

    while (n > 0)
    {
        rev = rev * 10 + n % 10;
        n = n / 10;
    }

    if (temp == rev)
        cout << "Palindrome";
    else
        cout << "Not Palindrome";
}

int main()
{
    int n;
    cout << "Enter number: ";
    cin >> n;

    palindrome(n);

    return 0;
}