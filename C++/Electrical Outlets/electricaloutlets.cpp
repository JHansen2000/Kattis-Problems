// Jacob Hansen - Jan 2023
// https://open.kattis.com/problems/electricaloutlets

#include <iostream>
using namespace std;

int main() {
    int N;
    cin >> N;
    for (int i = 0; i < N; i++) {
        int K, output = 0;
        cin >> K;
        for (int j = 0; j < K; j++) {
            int temp;
            cin >> temp;
            output += temp;
        }
        output -= (K - 1);
        cout << output << endl;
    }
    return 0;
}