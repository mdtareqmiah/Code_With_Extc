#include<bits/stdc++.h>
#define ll long long
#define EOF (-1)
using namespace std;

int main(){
    ll n;
    while(cin>>n && n > EOF){
        ll s=0;
        ll base=1;
        while(n>0){
            s+=(n%3)*base;
            n/=3;
            base*=10;
        }
        cout<<s<<"\n";
    }
    return 0;
}