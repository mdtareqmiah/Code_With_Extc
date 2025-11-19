#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    ll n,l,r,x;
    cin>>n>>l>>r>>x;
    vector<int>v(n),v1;
    for(int &u:v) cin>>u;
    v1=v;
    sort(v1.begin(), v1.end());
    int ct=0;
    for(int i=0; i<n; i++){
        v1[i+1]+=v1[i];
        if(v1[i]<r) ct++;
    }  
    //for(int u:v1) cout<<u<<" "; 
    cout<<ct<<"\n";
    return 0;3z
}