// Jacob Hansen - Jan 2023
// https://open.kattis.com/problems/sorttwonumbers

#include <iostream>
using namespace std;

int main() {
    long long a, b;
    cin >> a >> b;
    if (a >= b) {
        cout << b << " " << a;
    } else {
        cout << a << " " << b;
    }
    return 0;
}