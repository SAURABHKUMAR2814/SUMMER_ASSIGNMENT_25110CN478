#include <iostream>
using namespace std;

int main() {
    int a, b;

   
    cout<<"Starting point of the range : ";

    cin >> a ;

    cout<<"\n Ending points of the range : ";

    cin>>b;

    for (int i = a; i <= b; i++) {
        int count = 0;

        for (int j = 1; j <= i; j++) {
            if (i % j == 0)
                count++;
        }

        if (count == 2)
            cout << i << " ";
    }

    return 0;
}