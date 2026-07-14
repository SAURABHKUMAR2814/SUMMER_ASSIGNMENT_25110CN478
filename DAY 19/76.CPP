#include <iostream>
using namespace std;

int main() {
    int a[2][2], sum = 0;

    cout << "Enter matrix:\n";
    for(int i=0; i<2; i++)
        for(int j=0; j<2; j++)
            cin >> a[i][j];

    for(int i=0; i<2; i++)
        sum = sum + a[i][i];

    cout << "Diagonal Sum = " << sum;

    return 0;
}