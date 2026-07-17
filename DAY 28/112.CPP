#include <iostream>
using namespace std;

class Contact
{
public:
    string name;
    long long phone;

    void input()
    {
        cout << "Enter Name: ";
        cin >> name;
        cout << "Enter Phone Number: ";
        cin >> phone;
    }

    void display()
    {
        cout << "Name: " << name << endl;
        cout << "Phone Number: " << phone << endl;
    }
};

int main()
{
    Contact c;
    c.input();
    c.display();
    return 0;
}