#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<int>v(n);
    for(int &u:v) cin>>u;
    int mx=0, mn=0;
    for(int i=1; i<n; i++){
        if(v[i]>v[mx])mx=i;
        if(v[i]<=v[mn]) mn=i;
    }
    int res=mx+(n-1-mn);
    if(mx>mn) res-=1;
    cout<<res<<"\n";
    


    
}