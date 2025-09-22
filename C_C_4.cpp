#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    string s;
    cin>>s;
    string s1="";
    int ct=0;
    for(char c:s){
        if(s1.size()%2==1 && s1.back()==c){
            ct++;
        }
        else{
            s1.push_back(c);
        }
    }
    if(s1.size()%2==1){
        s1.pop_back();
        ct++;
    }

    cout<<ct<<"\n";
    cout<<s1<<"\n";
    return 0;
}
