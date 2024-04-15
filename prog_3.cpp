#include<bits/stdc++.h>
using namespace std;

int main(){
    
    int a,c=1;
    cout<<"enter a number: ";
    cin>>a;
    for(int i=1;i<=a;i++){
        c*=i;
    }
    cout<<c;
    return 0;
}