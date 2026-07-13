#include <iostream>
using namespace std;

int main()
{
    int a[10], n;

    cout << "Enter size: ";
    cin >> n;

    cout << "Enter elements: ";
    for (int i = 0; i < n; i++)
        cin >> a[i];

    cout << "Array elements are: ";
    for (int i = 0; i < n; i++)
        cout << a[i] << " ";

    return 0;
}