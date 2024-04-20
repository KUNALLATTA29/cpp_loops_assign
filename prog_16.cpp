#include <bits/stdc++.h>
using namespace std;

bool isPrime(int num) {
    if (num <= 1) return false;
    for (int i = 2; i <= num / 2; ++i) {
        if (num % i == 0) {
            return false;
        }
    }
    return true;
}

int main() {
    int start, end, sum = 0;
    
    cout << "Enter the starting number: ";
    cin >> start;
    
    cout << "Enter the ending number: ";
    cin >> end;
    
    for (int i = start; i <= end; ++i) {
        if (isPrime(i)) {
            sum += i;
        }
    }
    
    cout << "Sum of prime numbers between " << start << " and " << end << " is: " << sum << endl;
    
    return 0;
}
