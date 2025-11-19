#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
    int t;
    cin>>t;
    while(t--){
        ll a,n,b;
        cin>>a>>n>>b;
        ll m=n;
        int ct=0;
        if(n==1 && a>=b || a==n) cout<<1<<"\n";
        else if(b>a) cout<<2<<"\n";
        else if((n*b)<=a) cout<<1<<"\n";
        
        else cout<<2<<"\n";

        // while(n--){
        //     ll len=min(b, (a/m));
        //     if(b!=len || b==len){
        //         ct++;
        //         m--;
        //     }

        // }
        // cout<<ct<<"\n";

    }
    return 0;
}