#include <iostream>
using namespace std;

int main()
{
    int a[10], n, key, count = 0;

    cout << "Enter size: ";
    cin >> n;

    cout << "Enter elements: ";
    for(int i = 0; i < n; i++)
        cin >> a[i];

    cout << "Enter element: ";
    cin >> key;

    for(int i = 0; i < n; i++)
    {
        if(a[i] == key)
            count++;
    }

    cout << "Frequency = " << count;

    return 0;
}