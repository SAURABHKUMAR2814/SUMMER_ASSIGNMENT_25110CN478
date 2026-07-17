#include <iostream>
using namespace std;

class Ticket
{
public:
    string name;
    int seat;

    void input()
    {
        cout << "Enter Name: ";
        cin >> name;
        cout << "Enter Seat Number: ";
        cin >> seat;
    }

    void display()
    {
        cout << "Name: " << name << endl;
        cout << "Seat Number: " << seat << endl;
    }
};

int main()
{
    Ticket t;
    t.input();
    t.display();
    return 0;
}