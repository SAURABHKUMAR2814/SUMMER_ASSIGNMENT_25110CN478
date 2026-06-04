#include <iostream>
using namespace std;

int main()
{
    int n, temp, i, sum = 0;

    cout << "Enter a number: ";
    cin >> n;

    temp = n;

    while(temp != 0)
    {
        i= temp % 10;
        sum = sum + (i *i * i);
        temp = temp / 10;
    }

    if(sum == n)
        cout << n << " is an Armstrong number";

    else
        cout << n << " is not an Armstrong number";

    return 0;
}