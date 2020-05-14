#include <bits/stdc++.h>
using namespace std;

int main() {
    string name;
    int temp;
    int counter = 0;
    bool alphabet[26];

    cin >> name;

    for (int i = 0; i < 26; i++) {
        alphabet[i] = false;
    }

    for (int i = 0; i < name.size(); i++) {
        temp = name[i];
        temp = temp - 97;  // convert alphabet to number and order
        // cout << temp << endl;
        if (alphabet[temp] == 0) {
            counter++;
            alphabet[temp] = 1;
        }
    }

    if (counter % 2 == 0) {
        cout << "CHAT WITH HER!";
    } else {
        cout << "IGNORE HIM!";
    }
    return 0;
}