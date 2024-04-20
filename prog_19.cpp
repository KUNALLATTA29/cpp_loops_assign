#include <bits/stdc++.h>
using namespace std;

int factorial(int num) {
    if (num == 0 || num == 1)
        return 1;
    else
        return num * factorial(num - 1);
}

int main() {
    int number, digit, sum = 0;

    cout << "Enter a number: ";
    cin >> number;

    while (number != 0) {
        digit = number % 10;
        sum += factorial(digit);
        number /= 10;
    }

    cout << sum << endl;

    return 0;
}