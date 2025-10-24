#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        // vector<int>v(n);
        // for(int &u:v) cin>>u;
        string s;
        cin>>s;
        int x=-k, y=-k, ct=0;
        for(int i=0; i<n; i++){
            if(s[i]=='1'){
                if(i-x>=k){
                    ct++;
                    y=i;
                }
                x=i;
            }
        }
        cout<<ct<<"\n";

    }
    return 0;
}