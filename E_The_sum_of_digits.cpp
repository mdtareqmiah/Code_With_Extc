#include<bits/stdc++.h>
using namespace std;
using ll=long long;

int main(){
    ll n;
    cin>>n;
    n=abs(n);
    ll sum=0;
    while(n>0){
        ll x=n%10;
        sum+=x;
        n/=10;
    }
    cout<<sum<<"\n";
    return 0;
}