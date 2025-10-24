#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<int>v(n);
    for(int &u:v) cin>>u;
    int sum=v[0],ct=0;
    for(int i=1; i<n; i++){
        sum+=v[i];
        ct+=sum;
    }
    cout<<ct<<"\n";

    return 0;
}