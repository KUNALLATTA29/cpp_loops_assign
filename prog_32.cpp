#include <bits/stdc++.h>
using namespace std;

double power_n(double base, int power) {
    if (power == 0)
        return 1;
    else if (power%2==0)
        return power_n(base*base, power/2);
    else
        return base * power_n(base*base, (power-1)/2);
}

int main() {
    double base;
    int power;

    cout << "Enter base: ";
    cin >> base;
    cout << "Enter power: ";
    cin >> power;

    cout <<power_n(base, power) << endl;

    return 0;
}