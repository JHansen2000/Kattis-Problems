// Jacob Hansen - Jan 2023
// https://open.kattis.com/problems/cold

#include <iostream>
using namespace std;

int main() {
    int n, output = 0;
    cin >> n;
    for (int i = 0; i < n; i++) {
        int temperature;
        cin >> temperature;
        if (temperature < 0) output++;
    }
    cout << output << endl;
    return 0;
}