#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int x=n/2;
        if(x%2!=0){
            cout<<"NO\n";
        }
        else{
            cout<<"YES\n";
            int ct=0, trac=0;
            for(int i=1; i<=x; i++){
                cout<<2*i<<" ";
                ct+=i;
                trac++;
            }
            //cout<<1<<" ";
            ct-=1;
            trac-=1;
            int y=1;
            while(y<x){
                cout<<2*y-1<<" ";
                y++;
                // trac--;
                // if(trac>0){
                //     y+=2;
                //     cout<<y<<" ";
                //     ct-=y;
                // }
                // else{
                //     cout<<ct<<" ";
                // }
                //ct-=2;
            }
            cout<<3*x-1<<"\n";
        }
    }
    return 0;
}