#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
    int t;
    cin>>t;
    while(t--){
        ll n,k;
        cin>>n>>k;
        int ct=0;
        bool flag =true;
        if(k==1) ct=n;
        else
            while(n){
                ct+=n%k;
                n/=k;
            }
        cout<<ct<<"\n";

    }
    return 0;
}