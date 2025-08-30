#include<bits/stdc++.h>
using namespace std;
bool priems(int n){
    if(n<2) return false;
    for(int i=2; i*i<=n; i++){
        if(n%i==0) return false;
    }
    return true;
}
int main(){
    int n;
    cin>>n;
    bool x=priems(n);
    if(x==true){
        cout<<"The number is prime.";
    }
    else{
        cout<<"Number is Not Prime.";
    }
}