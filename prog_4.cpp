#include<bits/stdc++.h>
using namespace std;

bool is_prime(int a){
    if(a<=1){
        return false;
    }
    for(int i=2;i*i<=a;++i){
        if(a%i==0){
            return false;
        }
    }
    return true;
}
int main(){
    
    int a;
    cout<<"enter a number: ";
    cin>>a;
    if(is_prime(a)){
        cout<<"this is prime ";
    }else{
        cout<<"it's not prime ";
    }
    return 0;
}