// Jacob Hansen - Jan 2023
// https://open.kattis.com/problems/oddecho

#include <iostream>
using namespace std;

int main() {
    int N;
    cin >> N;
    for (int i = 0; i < N; i++) {
        string word;
        cin >> word;
        if (i % 2 == 0) {
            cout << word << endl;
        }
    }
    return 0;
}