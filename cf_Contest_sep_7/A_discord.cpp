#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<int>v(n);
    int res=0;
    for(int &u:v) cin>>u, res+=u;
    // for(int u:v) res+=u;
    cout<<res<<"\n";
    return 0;
}