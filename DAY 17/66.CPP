#include <iostream>
using namespace std;

int main() {
    int a[5], b[5];

    cout << "Enter first array: ";
    for(int i=0; i<5; i++)
        cin >> a[i];

    cout << "Enter second array: ";
    for(int i=0; i<5; i++)
        cin >> b[i];

    cout << "Union: ";

    for(int i=0; i<5; i++)
        cout << a[i] << " ";

    for(int i=0; i<5; i++) {
        bool found = false;

        for(int j=0; j<5; j++) {
            if(b[i] == a[j]) {
                found = true;
                break;
            }
        }

        if(!found)
            cout << b[i] << " ";
    }

    return 0;
}