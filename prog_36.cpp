#include <bits/stdc++.h>
using namespace std;


int main() { 

    int decimal, quotient, remainder, binary = 0, place = 1; 

    cout << "Enter a decimal number: "; 

    cin >> decimal; 

     

    quotient = decimal; 

    while (quotient != 0) { 

        remainder = quotient % 2; 

        binary += remainder * place; 

        place *= 10; 

        quotient /= 2; 

    } 

     

    cout << "The binary equivalent of " << decimal << " is " << binary << endl; 

    return 0; 

}
