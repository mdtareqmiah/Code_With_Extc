#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,s;
        cin>>n>>s;
        vector<int>v(n);
        for(auto &u:v) cin>>u;
        int l=v.front();
        int r=v.back();
        int res= (r-l)+(min(abs(s-l), abs(s-r)));
        cout<<res<<"\n";
    }
    return 0;
}