// Jacob Hansen - Jan 2023
// https://open.kattis.com/problems/knightpacking

#include <iostream>
using namespace std;

int main() {
    int size;
    cin >> size;
    if (size % 2 == 0) {
        cout << "second" << endl;
    } else {
        cout << "first" << endl;
    }
    return 0;
}