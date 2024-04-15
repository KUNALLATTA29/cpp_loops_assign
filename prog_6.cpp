#include<bits/stdc++.h>
using namespace std;

int main(){
    
    int a;
    cout<<"enter a number: ";
    cin>>a;
    int n1=0,n2=1,n3;
    cout<<n1<<" "<<n2<<" ";
    for(int i=1; i<=a; i++){
        n3=n1+n2;
        cout<<n3<<" ";
        n1=n2;
        n2=n3;
    }
    return 0;
}