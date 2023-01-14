// Jacob Hansen - Jan 2023
// https://open.kattis.com/problems/pet

#include <iostream>
using namespace std;

int main() {
    int N = 5;
    int best_id, best_score = 0;
    for (int i = 1; i <= N; i++) {
        int total = 0;
        for (int j = 0; j < N - 1; j++) {
            int score;
            cin >> score;
            total += score;
        }
        if (total > best_score) {
            best_id = i;
            best_score = total;
        }
    }
    cout << best_id << " " << best_score << endl;
    return 0;
}