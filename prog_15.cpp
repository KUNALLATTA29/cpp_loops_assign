#include <bits/stdc++.h>
using namespace std;

int main() {
    int number, count = 0;
    
    cout << "Enter a number: ";
    cin >> number;
    
    while (number != 0) {
        number /= 10;
        ++count;
    }
    
    cout << "Number of digits: " << count << endl;
    
    return 0;
}
