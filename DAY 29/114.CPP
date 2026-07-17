#include <iostream>
using namespace std;

int main()
{
    int a[5], i, sum = 0;

    cout << "Enter 5 numbers:\n";
    for(i = 0; i < 5; i++)
        cin >> a[i];

    cout << "\nArray Elements:\n";
    for(i = 0; i < 5; i++)
        cout << a[i] << " ";

    for(i = 0; i < 5; i++)
        sum = sum + a[i];

    cout << "\nSum = " << sum;

    return 0;
}