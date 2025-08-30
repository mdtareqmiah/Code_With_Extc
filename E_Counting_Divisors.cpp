#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int ct=0;
        int sq=sqrt(n+0.5);
        for(int i=1; i<=sq; i++){
            if(n%i==0){
                ct++;
            
                int x=n/i;
                if(x<=n && x!=i){
                    ct++;
                }
            }
        }
        cout<<ct<<"\n";
    }
    return 0;
}