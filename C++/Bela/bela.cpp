// Jacob Hansen - Jan 2023
// https://open.kattis.com/problems/bela

#include <iostream>
using namespace std;

int main() {
    int N, total = 0;
    int values[8][2] = {11,11,4,4,3,3,20,2,10,10,14,0,0,0,0,0};
    char trump;
    cin >> N >> trump;
    for (int i = 0; i < N * 4; i++) {
        int value; 
        int flag = 1;
        string input;
        cin >> input;
        if (input[1] == trump) flag = 0;
        switch (input[0]) {
            case 'A':
                value = values[0][flag];
                break;
            case 'K':
                value = values[1][flag];
                break;
            case 'Q':
                value = values[2][flag];
                break;
            case 'J':
                value = values[3][flag];
                break;
            case 'T':
                value = values[4][flag];
                break;
            case '9':
                value = values[5][flag];
                break;
            case '8':
                value = values[6][flag];
                break;
            case '7':
                value = values[7][flag];
                break;
        } 
        total += value;
    }
    cout << total << endl;
    return 0;
}