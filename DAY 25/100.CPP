#include <iostream>
#include <string>
using namespace std;

int main() {
    string word[5], temp;

    cout << "Enter 5 words:\n";
    for(int i=0; i<5; i++)
        cin >> word[i];

    for(int i=0; i<4; i++) {
        for(int j=i+1; j<5; j++) {
            if(word[i].length() > word[j].length()) {
                temp = word[i];
                word[i] = word[j];
                word[j] = temp;
            }
        }
    }

    cout << "Words Sorted by Length:\n";
    for(int i=0; i<5; i++)
        cout << word[i] << endl;

    return 0;
}