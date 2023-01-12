// Jacob Hansen - Jan 2023
// https://open.kattis.com/problems/jumbojavelin

#include <iostream>
using namespace std;

int main() {
    int N, total_length = 1;
    cin >> N;
    for (int i = 0; i < N; i++) {
        int length;
        cin >> length;
        total_length += length - 1;
    }
    cout << total_length << endl;
    return 0;
}