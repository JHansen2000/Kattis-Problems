// Jacob Hansen - Jan 2023
// https://open.kattis.com/problems/pot

#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int N;
    long long total = 0;
    cin >> N;
    for (int i = 0; i < N; i++) {
        string num; // String form for string manipulation
        long long base, exp;
        cin >> num;
        int length = num.length();
        base = stoll(num.substr(0, length - 1));
        exp = stoll(num.substr(length - 1, length));
        total += pow(base, exp);
    }
    cout << total << endl;
    return 0;
}