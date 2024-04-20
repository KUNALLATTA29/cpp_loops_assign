#include <bits/stdc++.h>
using namespace std;

int main() {
    int rows;

    cout << "Enter the number of rows for Pascal's triangle: ";
    cin >> rows;

    for (int i = 0; i < rows; ++i) {
        int number = 1;
        cout << string(rows - i - 1, ' ');

        for (int j = 0; j <= i; ++j) {
            cout << number << " ";
            number = number * (i - j) / (j + 1);
        }
        cout << endl;
    }

    return 0;
}