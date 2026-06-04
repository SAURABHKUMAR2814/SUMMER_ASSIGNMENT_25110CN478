#include <iostream>
using namespace std;

int main()
{
    int start, end, n, temp, i, sum;

    cout << "Enter starting number: ";
    cin >> start;

    cout << "Enter ending number: ";
    cin >> end;

    cout << "Armstrong numbers are: ";

    for(n = start; n <= end; n++)
    {
        temp = n;
        sum = 0;

        while(temp != 0)
        {
            i = temp % 10;
            sum = sum + (i * i * i);
            temp = temp / 10;
        }

        if(sum == n)
        {
            cout << n << " ";
        }
    }

    return 0;
}