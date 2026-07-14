#include <iostream>
using namespace std;

int main() {
    int a[5], b[5];

    cout << "Enter 5 elements of first array: ";
    for(int i=0; i<5; i++)
        cin >> a[i];

    cout << "Enter 5 elements of second array: ";
    for(int i=0; i<5; i++)
        cin >> b[i];

    cout << "Merged Array: ";

    for(int i=0; i<5; i++)
        cout << a[i] << " ";

    for(int i=0; i<5; i++)
        cout << b[i] << " ";

    return 0;
}