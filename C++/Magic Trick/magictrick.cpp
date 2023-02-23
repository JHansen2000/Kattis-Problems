// Jacob Hansen - Jan 2023
// https://open.kattis.com/problems/magictrick

#include <iostream>
using namespace std;

int main() {
    int letter_count[26] = { 0 };
    int flag = 1;
    string input;
    cin >> input;
    for (int i = 0; i < input.length(); i++) {
        char letter = input[i];
        int num_letter = (int)letter - 97;
        if (letter_count[num_letter] != 0) flag = 0;
        letter_count[num_letter] += 1;
    }
    cout << flag << endl;
    return 0;
}