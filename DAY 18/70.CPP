#include <iostream>
using namespace std;

int main() {
    int a[5];

    cout << "Enter 5 elements: ";
    for(int i=0; i<5; i++)
        cin >> a[i];

    for(int i=0; i<4; i++) {
        int min = i;

        for(int j=i+1; j<5; j++) {
            if(a[j] < a[min])
                min = j;
        }

        int temp = a[i];
        a[i] = a[min];
        a[min] = temp;
    }

    cout << "Sorted Array: ";
    for(int i=0; i<5; i++)
        cout << a[i] << " ";

    return 0;
}