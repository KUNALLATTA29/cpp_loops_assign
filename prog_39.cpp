#include <bits/stdc++.h>
using namespace std;

int factorial(int num) {
    if (num <= 1)
        return 1;
    else
        return num * factorial(num - 1);
}

int sumOfFactorialDigits(int num) {
    while (num >= 10) {
        int sum = 0;
        while (num != 0) {
            int digit = num % 10;
            sum += factorial(digit);
            num /= 10;
        }
        num = sum;
    }
    return num;
}

int main() {
    int number;

    cout << "Enter a number: ";
    cin >> number;

    cout << sumOfFactorialDigits(number) << endl;

    return 0;
}