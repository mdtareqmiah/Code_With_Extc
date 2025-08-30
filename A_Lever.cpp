#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int>v(n),v1(n);
        
        for(auto &u:v) cin>>u; 
        for(auto &u:v1) cin>>u;

        int ct=0;
        for(int i=0; i<n; i++){
            if(v[i]>v1[i]){
                int x=v[i]-v1[i];
                ct+=x;
            }

        }
        cout<<ct+1<<"\n";

    }
    return 0;
}