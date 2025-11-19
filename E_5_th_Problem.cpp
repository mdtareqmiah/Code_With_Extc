#include<bits/stdc++.h>
using namespace std;
bool leapyear(int y){
    if(y%400==0) return true;
    else if(y%100==0) return false;
    else if(y%4==0) return true;
    else return false;
}

int main(){
    int t;
    cin>>t;
    for(int i=1; i<=t; i++){
        int d,m,sy,ey;
        cin>>d>>m>>sy>>ey;
        int ct=0;
        for(int i=sy+1; i<=ey; i++){
            if(d==29 && m==2){
                if(leapyear(i)) ct++;
            }
            else{
                ct++;
            }
        }
        cout<<"Case "<<i<<": "<<ct<<"\n";
    }
}