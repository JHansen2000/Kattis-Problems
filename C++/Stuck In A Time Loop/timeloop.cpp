// Jacob Hansen - Jan 2023
// https://open.kattis.com/problems/timeloop

#include <iostream>
using namespace std;

int main() {
    int num = 0;
    cin >> num;
    for (int i = 1; i <= num; i++) {
        cout << i << " " << "Abracadabra" << endl;
    }
    return 0;
}