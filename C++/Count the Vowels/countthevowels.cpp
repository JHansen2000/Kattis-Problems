// Jacob Hansen - Mar 2023
// https://open.kattis.com/problems/countthevowels

#include <iostream>
#include <string>

using namespace std;

int main() {
    string input;
    char letter;
    int count = 0;
    getline(cin, input);
    for (int i = 0; i < input.length(); i++) {
        letter = input[i];
        if (letter == 'a' || letter == 'e' || letter == 'i' || letter == 'o' || letter == 'u') count++;
        if (letter == 'A' || letter == 'E' || letter == 'I' || letter == 'O' || letter == 'U') count++;
    }
    cout << count << endl;
}