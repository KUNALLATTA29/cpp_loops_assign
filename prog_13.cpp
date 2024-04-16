
#include <bits/stdc++.h>
using namespace std;

bool isPalindrome(int num) {
    int result = 0, temp = num;
    while (num > 0) {
        result = result * 10 + num % 10;
        num /= 10;
    }
    return temp == result;
}

int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;

    if (isPalindrome(num))
        cout <<"it is a palindrome.";
    else
        cout <<"it is not a palindrome.";

    return 0;
}