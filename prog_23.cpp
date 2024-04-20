#include <bits/stdc++.h>
using namespace std;

int factorial(int n) {
    if (n == 0 || n == 1)
        return 1;
    else
        return n * factorial(n - 1);
}

int main() {
    int num;

    cout << "Enter a number: ";
    cin >> num;

    cout << factorial(num) << endl;

    return 0;
}