#include <bits/stdc++.h>
using namespace std; 
#define pb push_back
#define setbits(x) __builtin_popcountll(x)
#define unsetbits(x) __builtin_ctzll(x)
#define ll long long
#define ull unsigned long long
#define endl '\n'
#define vi vector<ll>
#define vi_pair vector<pair<ll,ll>>



int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    
    ll t;
    cin>>t;
    while(t--){
        ll n;
        cin >> n;
        ll x = 0;
        ll ct = 0;
        while(x<n){
            x = 2*x;
            ct+=2;
            x++;
        }
        cout<<ct+1<<endl;    
    }
    return 0;
}

