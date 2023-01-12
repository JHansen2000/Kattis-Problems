// Jacob Hansen - Jan 2023
// https://open.kattis.com/problems/findingana

#include <iostream>
using namespace std;

int main() {
    string input, output;
    cin >> input;
    for (int i = 0; i < input.length(); i++) {
        if (input[i] == 'a') {
            output = input.substr(i, input.length());
            break;
        }
    }
    cout << output << endl;
    return 0;
}