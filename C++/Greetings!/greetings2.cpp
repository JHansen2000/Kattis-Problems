// Jacob Hansen - Jan 2023
// https://open.kattis.com/problems/greetings2

#include <iostream>
using namespace std;

int main() {
    string input, e, output;
    cin >> input;
    e = input.substr(1, input.length() - 2);
    output = "h" + e + e + "y"
    cout << output << endl;
    return 0;
}