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

    cout << "Intersection: ";

    for(int i=0; i<5; i++) {
        for(int j=0; j<5; j++) {
            if(a[i] == b[j]) {
                cout << a[i] << " ";
                break;
            }
        }
    }

    return 0;
}