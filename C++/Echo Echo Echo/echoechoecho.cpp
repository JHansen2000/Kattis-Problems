// Jacob Hansen - Jan 2023
// https://open.kattis.com/problems/echoechoecho

#include <iostream>
using namespace std;

int main() {
    string input, output;
    cin >> input;
    output = input + " " + input + " " + input;
    cout << output << endl;
    return 0;
}