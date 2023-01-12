// Jacob Hansen - Jan 2023
// https://open.kattis.com/problems/nsum

#include <iostream>
using namespace std;

int main() {
    int N, sum = 0;
    cin >> N;
    for (int i = 0; i < N; i++) {
        int num;
        cin >> num;
        sum += num;
    }
    cout << sum << endl;
    return 0;
}