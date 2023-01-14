// Jacob Hansen - Jan 2023
// https://open.kattis.com/problems/ratingproblems

#include <iostream>
using namespace std;

int main() {
    int n, k;
    float min, max, current = 0.0;
    cin >> n >> k;
    for (int i = 0; i < k; i++) {
        float temp;
        cin >> temp;
        current += temp;
    }
    min = (current + ((n - k) * -3.0)) / n;
    max = (current + ((n - k) * 3.0)) / n;
    cout << min << " " << max << endl;
    return 0;
}