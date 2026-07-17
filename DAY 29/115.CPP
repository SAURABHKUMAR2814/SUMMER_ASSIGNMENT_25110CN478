#include <iostream>
#include <string>
using namespace std;

int main()
{
    string s;

    cout << "Enter String: ";
    cin >> s;

    cout << "\n1. Display";
    cout << "\n2. Length";

    int ch;
    cout << "\nEnter Choice: ";
    cin >> ch;

    switch(ch)
    {
        case 1:
            cout << "String = " << s;
            break;

        case 2:
            cout << "Length = " << s.length();
            break;

        default:
            cout << "Invalid Choice";
    }

    return 0;
}