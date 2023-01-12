// Jacob Hansen - Jan 2023
// https://open.kattis.com/problems/fyi

#include <iostream>
using namespace std;

int main() {
    string input, area;
    cin >> input;
    area = input.substr(0, 3);
    if (area == "555") {
        cout << 1 << endl;
    } else {
        cout << 0 << endl;
    }
    return 0;
}