#include <iostream>
using namespace std;

int main() {
    int m1, m2, m3, total;
    float per;

    cout << "Enter marks of 3 subjects: ";
    cin >> m1 >> m2 >> m3;

    total = m1 + m2 + m3;
    per = total / 3.0;

    cout << "\nTotal = " << total << endl;
    cout << "Percentage = " << per << "%" << endl;

    if(per >= 40)
        cout << "Result: Pass";
    else
        cout << "Result: Fail";

    return 0;
}