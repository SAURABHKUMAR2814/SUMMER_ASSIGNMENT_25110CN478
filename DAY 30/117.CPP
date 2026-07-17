#include <iostream>
using namespace std;

int main()
{
    int roll[3];
    string name[3];

    for(int i=0; i<3; i++)
    {
        cout << "Enter Roll No: ";
        cin >> roll[i];
        cout << "Enter Name: ";
        cin >> name[i];
    }

    cout << "\nStudent Records\n";

    for(int i=0; i<3; i++)
    {
        cout << "Roll No: " << roll[i] << endl;
        cout << "Name: " << name[i] << endl;
    }

    return 0;
}