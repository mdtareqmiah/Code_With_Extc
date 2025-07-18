#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;


    while(t--){
        int n,ct=0;
        cin>>n;
        int arr[n];
        for(int &u:arr) cin>>u;
        for(int u:arr){
            if(u%2!=0)
             ct++;
        } 
        cout<<ct<<"\n";
        
    }
    return 0;
}