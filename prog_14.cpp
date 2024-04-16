
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

void Palindromes(int start, int end) {
    for (int i = start; i <= end; ++i) {
        if (isPalindrome(i))
            cout << i << endl;
    }
}

int main() {
    int start, end;
    cout << "Enter the starting number: ";
    cin >> start;
    cout << "Enter the ending number: ";
    cin >> end;

    Palindromes(start, end);

    return 0;
}