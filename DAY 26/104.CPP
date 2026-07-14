#include <iostream>
using namespace std;

int main() {
    int ans, score = 0;

    cout << "Q1. Capital of India?\n";
    cout << "1. Delhi\n2. Mumbai\n3. Chennai\n";
    cin >> ans;

    if(ans == 1)
        score++;

    cout << "Q2. 5 + 5 = ?\n";
    cout << "1. 8\n2. 10\n3. 12\n";
    cin >> ans;

    if(ans == 2)
        score++;

    cout << "Your Score = " << score << "/2";

    return 0;
}