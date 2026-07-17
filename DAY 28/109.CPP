#include <iostream>
using namespace std;

class Library
{
public:
    int id;
    string name;

    void input()
    {
        cout << "Enter Book ID: ";
        cin >> id;
        cout << "Enter Book Name: ";
        cin >> name;
    }

    void display()
    {
        cout << "Book ID: " << id << endl;
        cout << "Book Name: " << name << endl;
    }
};

int main()
{
    Library b;
    b.input();
    b.display();
    return 0;
}