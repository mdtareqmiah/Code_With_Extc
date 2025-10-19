#include<bits/stdc++.h>
using namespace std;
int main(){
    int k,n,w;
    cin>>k>>n>>w;
    int res=0;

    for(int i=1; i<=w; i++){
        res+=i*k;
    }
    int ct=0;
    if(n<res){
        ct=res-n;
    }
    cout<<ct<<"\n";
    return 0;
}
