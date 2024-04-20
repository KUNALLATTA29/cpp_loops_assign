#include <bits/stdc++.h>
using namespace std;

int main() {
    string str, reversedStr = "";
    
    cout << "Enter a string: ";
    getline(cin, str);
    
    int length = str.length();
    
    for (int i = length - 1; i >= 0; --i) {
        reversedStr += str[i];
    }
    
    cout << "Reversed string: " << reversedStr << endl;
    
    return 0;
}