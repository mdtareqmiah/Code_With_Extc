#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int>v(n+1);
        int ct=0;
        for(int i=1; i<=n; i++){
            string s;
            cin>>s;
            if(s=="LEFT"){
                v[i]=-1;
            }
            else if(s=="RIGHT"){
                v[i]=1;
            }
            else{
                string s1;
                int x;
                cin>>s1>>x;
                v[i]=v[x];
            }
            ct+=v[i];
        }
        cout<<ct<<"\n";
    }

}