#include <iostream>
using namespace std;

int main() {
    char str[100];
    int count = 0, max = 0;

    cout << "Enter a sentence: ";
    cin.getline(str, 100);

    for(int i = 0; ; i++) {
        if(str[i] != ' ' && str[i] != '\0')
            count++;
        else {
            if(count > max)
                max = count;
            count = 0;
        }

        if(str[i] == '\0')
            break;
    }

    cout << "Longest Word Length = " << max;

    return 0;
}