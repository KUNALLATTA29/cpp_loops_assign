#include<bits/stdc++.h>
using namespace std;

int main(){
    
    int a;
    cout<<"enter a number: ";
    cin>>a;
    int sum=0, rem;
    while(a>0){
        rem=a%10;
        sum=sum*10+rem;
        a=a/10;
    }
    cout<<sum;
    return 0;
}