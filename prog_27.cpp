#include <bits/stdc++.h>
using namespace std;

bool isPerfectNumber(int num) {
    int sum = 0;
    for (int i = 1; i <= num / 2; ++i) {
        if (num % i == 0) {
            sum += i;
        }
    }
    return sum == num;
}

int main() {
    int number;

    cout << "Enter a number: ";
    cin >> number;

    if (isPerfectNumber(number)) {
        cout << number << " is a perfect number." << endl;
    } else {
        cout << number << " is not a perfect number." << endl;
    }

    return 0;
}