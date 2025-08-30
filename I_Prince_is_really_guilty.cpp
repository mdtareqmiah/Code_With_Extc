#include<bits/stdc++.h>
using namespace std;
int solve(){
    int m,n;
    cin>>n>>m;
    char arr[m][n];
    for(int i=0; i<m; i++){
        for(int j=0; j<n; j++){
            cin>>arr[i][j];
        }
    }
    int ct=1;
    for(int i=0; i<m; i++){
        for(int j=0; j<n; j++){
            if(arr[i][j]=='.'){
                ct++;
            }
        }
    }
    // cout<<ct<<"\n";
    return ct;
}
int main(){
    int t;
    cin>>t;
    for(int i=1; i<=t; i++){
        int x = solve();
        cout<<"Case "<<i<<": "<<x<<"\n";
    }
    
    return 0;

}
