#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin>>s;
    int ct=s.size();
    //cout<<ct<<"\n";
    sort(s.begin(), s.end());
    int sz=unique(s.begin(), s.end())-s.begin();
    //cout<<sz<<"\n";
    if(sz%2==0){
        cout<<"CHAT WITH HER!"<<"\n";
    }
    else{
        cout<<"IGNORE HIM!"<<"\n";
    }


    return 0;
}