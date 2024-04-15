#include<bits/stdc++.h>
using namespace std;

int main(){
    
    int a=1,count=0;
    
   while(count<10){
       if(a%2==0){
           cout<<a<<endl;
           count+=1;
       }
       a+=1;
   }
    return 0;
}