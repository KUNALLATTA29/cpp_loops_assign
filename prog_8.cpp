#include<bits/stdc++.h>
using namespace std;

int main(){
    
    int a;
    cout<<"enter a number: ";
    cin>>a;
    int sum=0;
    for(int i=1;i<=a;i++){
        sum+=i;
    }
    cout<<sum;
    return 0;
}