#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n,m;
        cin>>n>>m;
        string s,s1;
        cin>>s>>s1;
        int ct=0,t1=10;
        bool flag=true;

        while(t1--){
            if(s.find(s1)!=string::npos){
                cout<<ct<<"\n";
                flag=false;
                break;
            }
            else{
                s+=s;
                ct++;
            }
        }
        if(flag){
            cout<<-1<<"\n";
        }
    }
    return 0;
}

