#include <iostream>
using namespace std;

int main()
{
    int n, temp, i, fact, sum = 0, j;

    cout << "Enter a number : ";
    cin >> n;

    temp = n;

    while(n > 0)
    {
        i = n % 10;
        fact = 1;

        for(j = 1; j <= i; j++)
        {
            fact = fact * j;
        }

        sum = sum + fact;
        n = n / 10;
    }

    if(sum == temp)
    {
        cout << temp << " is a Strong Number";
    }
    else
    {
        cout << temp << " is not a Strong Number";
    }

    return 0;
}