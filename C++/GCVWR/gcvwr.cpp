// Jacob Hansen - Jan 2023
// https://open.kattis.com/problems/gcvwr

#include <iostream>

using namespace std;

int main() {
    int gcvwr, truck, num; //gross combined vehicle weight rating, truck weight, num of items
    double max, items;
    cin >> gcvwr >> truck >> num;
    max = (gcvwr - truck) * 0.9;
    for (int i = 0; i < num; i++) {
        int item;
        cin >> item;
        items += item;
    }
    max -= items;
    cout << max;
}