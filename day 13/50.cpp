#include <iostream>
using namespace std;

int main()
{
    int a[10], n, sum = 0;
    float avg;

    cout << "Enter size: ";
    cin >> n;

    cout << "Enter elements: ";
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        sum = sum + a[i];
    }

    avg = (float)sum / n;

    cout << "Sum = " << sum << endl;
    cout << "Average = " << avg;

    return 0;
}