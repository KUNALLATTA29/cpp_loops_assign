#include<bits/stdc++.h>
using namespace std;

int main(){
    
    int a,s=0;
    cout<<"enter a number: ";
    cin>>a;
    
    while(a>0){
        s=s+a%10;
        a=a/10;
    }
    cout<<s;
    return 0;
}