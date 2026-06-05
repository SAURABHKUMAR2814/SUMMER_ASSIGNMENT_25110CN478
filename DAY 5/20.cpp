#include <iostream>
using namespace std;

int main()
{
    int n, i, largest = 0;

    cout << "Enter a number : ";
    cin >> n;

    for(i = 2; i <= n; i++)
    {
        while(n % i == 0)
        {
            largest = i;
            n = n / i;
        }
    }

    cout << "Largest Prime Factor = " << largest;

    return 0;
}