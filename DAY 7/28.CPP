#include <iostream>
using namespace std;

int reverseNum(int n, int rev)
{
    if(n == 0)
        return rev;

    rev = rev * 10 + (n % 10);
    return reverseNum(n / 10, rev);
}







int main()
{
    int n;

    cout << "Enter a number: ";
    cin >> n;

    cout << "Reverse number = " << reverseNum(n, 0);

    return 0;
}