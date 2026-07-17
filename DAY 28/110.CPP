#include <iostream>
using namespace std;

class Bank
{
public:
    int accNo;
    string name;
    float balance;

    void input()
    {
        cout << "Enter Account Number: ";
        cin >> accNo;
        cout << "Enter Name: ";
        cin >> name;
        cout << "Enter Balance: ";
        cin >> balance;
    }

    void display()
    {
        cout << "Account No: " << accNo << endl;
        cout << "Name: " << name << endl;
        cout << "Balance: " << balance << endl;
    }
};

int main()
{
    Bank b;
    b.input();
    b.display();
    return 0;
}