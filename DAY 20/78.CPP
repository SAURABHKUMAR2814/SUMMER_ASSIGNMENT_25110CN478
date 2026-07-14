#include <iostream>
using namespace std;

int main() {
    int a[2][2];
    bool symmetric = true;

    cout << "Enter matrix:\n";
    for(int i=0; i<2; i++)
        for(int j=0; j<2; j++)
            cin >> a[i][j];

    for(int i=0; i<2; i++) {
        for(int j=0; j<2; j++) {
            if(a[i][j] != a[j][i])
                symmetric = false;
        }
    }

    if(symmetric)
        cout << "Matrix is Symmetric";
    else
        cout << "Matrix is Not Symmetric";

    return 0;
}