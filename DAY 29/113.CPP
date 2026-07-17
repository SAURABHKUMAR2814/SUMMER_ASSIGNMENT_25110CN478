#include <iostream>
using namespace std;

int main()
{
    int ch;
    float a, b;

    cout << "Enter two numbers: ";
    cin >> a >> b;

    cout << "\n1. Add";
    cout << "\n2. Subtract";
    cout << "\n3. Multiply";
    cout << "\n4. Divide";
    cout << "\nEnter Choice: ";
    cin >> ch;

    switch(ch)
    {
        case 1: cout << "Result = " << a + b; break;
        case 2: cout << "Result = " << a - b; break;
        case 3: cout << "Result = " << a * b; break;
        case 4: cout << "Result = " << a / b; break;
        default: cout << "Invalid Choice";
    }

    return 0;
}