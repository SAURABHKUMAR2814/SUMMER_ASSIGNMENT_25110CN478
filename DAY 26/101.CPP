#include <iostream>
using namespace std;

int main() {
    int number = 7, guess;

    cout << "Guess the number (1 to 10): ";
    cin >> guess;

    if(guess == number)
        cout << "Correct Guess!";
    else
        cout << "Wrong Guess! The number is " << number;

    return 0;
}