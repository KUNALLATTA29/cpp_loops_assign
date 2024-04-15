#include<bits/stdc++.h>
using namespace std;

bool isArmstrong(int number) {
    int originalNumber, remainder, result = 0, n = 0;

    
    originalNumber = number;

    while (originalNumber != 0) {
        originalNumber /= 10;
        ++n;
    }

    originalNumber = number;

    while (originalNumber != 0) {
        remainder = originalNumber % 10;
        result += pow(remainder, n);
        originalNumber /= 10;
    }

    if (result == number)
        return true;
    else
        return false;
}

void printArmstrongNumbers(int start, int end) {
    cout << "Armstrong numbers between " << start << " and " << end << " are:" << endl;
    for (int i = start; i <= end; ++i) {
        if (isArmstrong(i)) {
            cout << i << endl;
        }
    }
}

int main() {
    int start, end;
    cout << "Enter starting number: ";
    cin >> start;
    cout << "Enter ending number: ";
    cin >> end;

    printArmstrongNumbers(start, end);

    return 0;
}
