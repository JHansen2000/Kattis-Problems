// Jacob Hansen - Mar 2023
// https://open.kattis.com/problems/cutthenegativity

#include <iostream>

using namespace std;

int main() {
    int num_cities, double_cities;
    cin >> num_cities;
    double_cities = num_cities * num_cities;
    int output[double_cities][3];
    int num_entries = 0;
    for (int i = 0; i < num_cities; i++) {
        for (int j = 0; j < num_cities; j++) {
            int temp;
            cin >> temp;            
            if (temp != -1) {
                output[num_entries][0] = i + 1;
                output[num_entries][1] = j + 1;
                output[num_entries][2] = temp;
                num_entries++;
            }
        }
    }
    cout << num_entries << endl;
    for (int i = 0; i < num_entries; i++) {
        cout << output[i][0] << " " << output[i][1] << " " << output[i][2] << endl;
    }
}