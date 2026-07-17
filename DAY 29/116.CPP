#include <iostream>
using namespace std;

class Item
{
public:
    int id, quantity;
    string name;

    void input()
    {
        cout << "Enter Item ID: ";
        cin >> id;
        cout << "Enter Item Name: ";
        cin >> name;
        cout << "Enter Quantity: ";
        cin >> quantity;
    }

    void display()
    {
        cout << "\nItem ID: " << id;
        cout << "\nItem Name: " << name;
        cout << "\nQuantity: " << quantity;
    }
};

int main()
{
    Item i;
    i.input();
    i.display();

    return 0;
}