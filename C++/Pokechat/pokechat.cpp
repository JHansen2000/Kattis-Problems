// Jacob Hansen - Jan 2023
// https://open.kattis.com/problems/pokechat

#include <iostream>
using namespace std;

int main() {
    string encrypted, key, decrypted;
    getline(cin, encrypted);
    getline(cin, key);
    int length = key.length();
    for (int i = 0; i < length; i += 3) {
        cout << encrypted[stoi(key.substr(i, 3)) - 1];
    }
    cout << endl;
    return 0;
}