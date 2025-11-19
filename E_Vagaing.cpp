#include<bits/stdc++.h>
using namespace std;
int main(){
    string h;
    //string s,s1,s2;
    //cin>>h>>s>>m>>s1>>sec>>s2;
    cin>>h;

    char s=h[0],s1=h[1];
    //cout<<s<<" "<<s1;
    char x=h[8],x1[9];
    string p=h.substr(2,6);
    cout<<x<<" "<<x1<<"\n";
    cout<<p<<"\n";
    int hour;
    if(1){
        if(s=='1'&& s1=='2'){
            s='0',s1='0';
        }
    }
    
    else{
        if(s!='1'&& s1!='2'){
            int h1=s+'0';
            int h2=s1+'0';
            int hour=h1+h2;
            //h1+=12;
            //h=to_string(h1);
        }
    }
    cout<<hour<<p<<"\n";
    //cout<<s<<m<<s1<<sec<<s2<<"\n";
    //cout<<h<<s<<m<<s1<<sec;
    return 0;
}