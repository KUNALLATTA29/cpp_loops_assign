#include <bits/stdc++.h>
using namespace std;

int sumOfDigits(int num) {
    int sum = 0;
    while (num > 0 || sum > 9) {
        if (num == 0) {
            num = sum;
            sum = 0;
        }
        sum += num % 10;
        num /= 10;
    }
    return sum;
}

int main() {
    int number;

    cout << "Enter a number: ";
    cin >> number;

    cout << sumOfDigits(number) << endl;

    return 0;
}