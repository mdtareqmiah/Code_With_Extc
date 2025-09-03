#include<bits/stdc++.h>
using namespace std;
int main(){
    int h1,m1,h2,m2;
    char c1,c2;
    cin>>h1>>c1>>m1;
    cin>>h2>>c2>>m2;
    int a=(h1*60)+m1;
    int b=(h2*60)+m2;
    int d=b-a;
    int min=a+(d/2);
    int h=min/60;
    int m=min%60;
    if(h<10){
        cout<<"0";
    }
    cout<<h<<c1;
    if(m<10){
        cout<<"0";
    }
    cout<<m<<"\n";
    return 0;
}