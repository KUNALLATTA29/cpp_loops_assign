#include <bits/stdc++.h>
using namespace std;

double calculateArea(double a, double b, double c) {
    double s = (a + b + c) / 2;
    return sqrt(s * (s - a) * (s - b) * (s - c));
}

int main() {
    double side1, side2, side3;

    cout << "Enter the length of side 1: ";
    cin >> side1;

    cout << "Enter the length of side 2: ";
    cin >> side2;

    cout << "Enter the length of side 3: ";
    cin >> side3;

    double area = calculateArea(side1, side2, side3);

    cout << area << endl;

    return 0;
}