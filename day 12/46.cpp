#include <iostream>
using namespace std;

void armstrong(int n)
{
    int sum = 0, temp = n, rem;

    while (n > 0)
    {
        rem = n % 10;
        sum = sum + rem * rem * rem;
        n = n / 10;
    }

    if (sum == temp)
        cout << "Armstrong";
    else
        cout << "Not Armstrong";
}

int main()
{
    int n;
    cout << "Enter number: ";
    cin >> n;

    armstrong(n);

    return 0;
}