#include <iostream>
using namespace std;

int roll[3];
string name[3];

void input()
{
    for(int i=0; i<3; i++)
    {
        cout << "Enter Roll No: ";
        cin >> roll[i];
        cout << "Enter Name: ";
        cin >> name[i];
    }
}

void display()
{
    cout << "\nStudent Records\n";

    for(int i=0; i<3; i++)
    {
        cout << "Roll No: " << roll[i] << endl;
        cout << "Name: " << name[i] << endl;
    }
}

int main()
{
    input();
    display();

    return 0;
}