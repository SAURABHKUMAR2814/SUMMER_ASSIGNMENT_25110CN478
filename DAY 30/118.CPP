#include <iostream>
using namespace std;

class Library
{
public:
    int id;
    string book;

    void input()
    {
        cout << "Enter Book ID: ";
        cin >> id;
        cout << "Enter Book Name: ";
        cin >> book;
    }

    void display()
    {
        cout << "Book ID: " << id << endl;
        cout << "Book Name: " << book << endl;
    }
};

int main()
{
    Library l;
    l.input();
    l.display();

    return 0;
}