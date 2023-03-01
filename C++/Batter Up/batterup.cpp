// Jacob Hansen - Mar 2023
// https://open.kattis.com/problems/batterup

#include <iostream>

using namespace std;

int main() {
    int num;
    int walks = 0;
    cin >> num;
    double sum = 0.0;
    double slugging_percentage;
    for (int i = 0; i < num; i++) {
        int temp;
        cin >> temp;
        if (temp < 0) {
            walks++;
            continue;
        }
        sum += temp;
    }
    slugging_percentage = sum / (num - walks);
    cout << slugging_percentage << endl;
}