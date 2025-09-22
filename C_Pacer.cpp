#include<bits/stdc++.h>

using namespace std;
using ll = long long;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,m;
        cin>>n>>m;
        ll x=0,y=0,ct=0;
        
        for(int i=0; i<n; i++){
            ll a,b;
            cin>>a>>b;
            ll dis=a-x;
            if((y+dis)%2==b){
                ct+=dis;
            }
            else{
                ct+=dis-1;
            }
            x=a;
            y=b;

        }
        ll dis =m-x;
        ct+=dis;
        cout<<ct<<"\n";

    }
    return 0;
}