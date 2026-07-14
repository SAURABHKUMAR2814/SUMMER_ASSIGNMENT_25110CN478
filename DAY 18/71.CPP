#include <iostream>
using namespace std;

int main() {
    int a[5], key;

    cout << "Enter 5 sorted elements: ";
    for(int i=0; i<5; i++)
        cin >> a[i];

    cout << "Enter element to search: ";
    cin >> key;

    int low = 0, high = 4;

    while(low <= high) {
        int mid = (low + high) / 2;

        if(a[mid] == key) {
            cout << "Element Found";
            return 0;
        }
        else if(a[mid] < key)
            low = mid + 1;
        else
            high = mid - 1;
    }

    cout << "Element Not Found";

    return 0;
}