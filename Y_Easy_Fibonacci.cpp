#include<bits/stdc++.h>
using namespace std;
void fibo(int n){
    if(n==0) cout<<0<<" ";
    if(n==1) cout<<1<<" ";
    int x=fibo(n-1)+fibo(n-2);
    cout<<x;
}
int main(){
    int n;
    cin>>n;
    cout<<fibo(n-1)<<"\n";

    return 0;
}