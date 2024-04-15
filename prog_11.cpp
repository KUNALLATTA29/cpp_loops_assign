#include<bits/stdc++.h>
using namespace std;

int main(){
    
    int a;
    cout<<"enter a number: ";
    cin>>a;
    
    int sum=0,rem, temp=a;
    while(a>0){
        rem=a%10;
        sum=sum+rem*rem*rem;
        a=a/10;
    }
    if(sum==temp){
        cout<<"yes";
    }else{
        cout<<"no";
    }
    return 0;
}