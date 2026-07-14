#include <iostream>
using namespace std;

int main() {
    int balance = 10000, amount;

    cout << "Enter withdrawal amount: ";
    cin >> amount;

    if(amount <= balance) {
        balance = balance - amount;
        cout << "Withdrawal Successful\n";
        cout << "Remaining Balance = " << balance;
    }
    else {
        cout << "Insufficient Balance";
    }

    return 0;
}