// Jacob Hansen - Jan 2023
// https://open.kattis.com/problems/digitswap

#include <iostream>
using namespace std;

int main() {
    string input, output, d1, d2;
    cin >> input;
    d1 = input[0];
    d2 = input[1];
    output = d2 + d1;
    cout << output << endl;
    return 0;
}