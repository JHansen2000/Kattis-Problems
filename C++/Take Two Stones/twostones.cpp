// Jacob Hansen - Jan 2023
// https://open.kattis.com/problems/twostones

#include <iostream>
using namespace std;

int main() {
    int input = 0;
    cin >> input;
    if (input % 2 == 0) {
        cout << "Bob" << endl;
    } else {
        cout << "Alice" << endl;
    }
    return 0;
}