#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
    ll n;
    cin>>n;

    int ct=0;
    while(n>0){
        if(n%2!=0) ct++;
        n/=2;
    }
    cout<<ct<<"\n";
    return 0;
}